#include "pch.h"
#include "Map.h"
#include "BaseAddress.h"
#include "OffsetAddr.h"
#include "Common.h"
#include "Logger.h"
#include <sstream>

Map::Map()
{
	std::wstringstream ws;
	int 地图ID = 解密读取(读内存数据<int>(房间编号, { 时间基址, A星偏移0 }) + BOSS房间X - 24) + 1;
	高 = 读内存数据<int>(读内存数据<uint32_t>(房间编号, { 时间基址, A星偏移0, A星偏移1 }) + 地图ID * 8 - 4);
	宽 = 读内存数据<int>(读内存数据<uint32_t>(房间编号, { 时间基址, A星偏移0, A星偏移1 }) + 地图ID * 8 - 8);
	BOSS房间坐标.x = 解密读取(读内存数据<uint32_t>(房间编号, { 时间基址, A星偏移0 }) + BOSS房间X);
	BOSS房间坐标.y = 解密读取(读内存数据<uint32_t>(房间编号, { 时间基址, A星偏移0 }) + BOSS房间Y);
	const int N = 高 * 宽;
	地图通道.resize(N, 0);
	邻接矩阵.resize(N);
	
	for (int i = 0; i < 邻接矩阵.size(); ++i)
	{
		邻接矩阵[i].resize(N, 0);
	}
	WriteLog(L"邻接矩阵初始化完毕！");
	int 临时地址 = 读内存数据<int>(读内存数据<uint32_t>(房间编号, { 时间基址, A星偏移0, A星偏移2 }) + 地图ID * 20 - 16);
	for (int i = 0; i < 地图通道.size(); ++i) {
		地图通道[i] = 读内存数据<int>(临时地址 + i * 4);
	}
	WriteLog(L"地图通道构建完毕！");
	for (int i = 0; i < 地图通道.size(); ++i) {
		if (地图通道[i] == 0) continue;
		Coordinate_t 坐标 = 索引转坐标(i);
		CString txt;

		// 右边是否有门
		if ((地图通道[i] & 1) && (坐标.x + 1 < 宽)) {
			int u = 坐标转索引(坐标), v = 坐标转索引({ 坐标.x + 1, 坐标.y });
			邻接矩阵[u][v] = 1;
			邻接矩阵[v][u] = 1;
			txt.Format(L"坐标: (%d,%d) 有右门, u=%d,v=%d", 坐标.x, 坐标.y, u, v);
			WriteLog(txt);
		}
		else {
			txt.Format(L"坐标: (%d,%d) 没有右门", 坐标.x, 坐标.y);
			WriteLog(txt);
		}
		// 上边是否有门
		if ((地图通道[i] & 2) && (坐标.y - 1 >= 0)) {
			int u = 坐标转索引(坐标), v = 坐标转索引({ 坐标.x, 坐标.y - 1 });
			邻接矩阵[u][v] = 1;
			邻接矩阵[v][u] = 1;
			txt.Format(L"坐标: (%d,%d) 有上门, u=%d,v=%d", 坐标.x, 坐标.y, u, v);
			WriteLog(txt);
		}
		else {
			txt.Format(L"坐标: (%d,%d) 没有上门", 坐标.x, 坐标.y);
			WriteLog(txt);
		}
		// 左边是否有门
		if ((地图通道[i] & 4) && (坐标.x - 1 >= 0)) {
			int u = 坐标转索引(坐标), v = 坐标转索引({ 坐标.x - 1, 坐标.y });
			邻接矩阵[u][v] = 1;
			邻接矩阵[v][u] = 1;
			txt.Format(L"坐标: (%d,%d) 有左门, u=%d,v=%d", 坐标.x, 坐标.y, u, v);
			WriteLog(txt);
		}
		else {
			txt.Format(L"坐标: (%d,%d) 没有左门", 坐标.x, 坐标.y);
			WriteLog(txt);
		}
		// 下边是否有门
		if ((地图通道[i] & 8) && (坐标.y + 1 < 高)) {
			int u = 坐标转索引(坐标), v = 坐标转索引({ 坐标.x, 坐标.y + 1 });
			邻接矩阵[u][v] = 1;
			邻接矩阵[v][u] = 1;
			txt.Format(L"坐标: (%d,%d) 有下门, u=%d,v=%d", 坐标.x, 坐标.y, u, v);
			WriteLog(txt);
		}
		else {
			txt.Format(L"坐标: (%d,%d) 没有下门", 坐标.x, 坐标.y);
			WriteLog(txt);
		}
		WriteLog(L"\r\n");
	}
	
}

int Map::坐标转索引(Coordinate_t 坐标)
{
	return 坐标.y * 宽 + 坐标.x;
}

Coordinate_t Map::索引转坐标(int 索引)
{
	return { 索引 % 宽, 索引 / 宽 };
}

int Map::getMinDistanceIndex(const std::vector<int>& dist, const std::vector<bool>&  sptSet) {
	int V = dist.size();
	int min = INT_MAX, minIndex;
	for (int v = 0; v < V; v++) {
		if (sptSet[v] == false && dist[v] <= min) {
			min = dist[v];
			minIndex = v;
		}
	}
	return minIndex;
}

void Map::getPath(const std::vector<int>& parent, int j, std::vector<int>& path) {
	if (parent[j] == -1) return;
	getPath(parent, parent[j], path);
	path.push_back(j);
}

std::vector<int> Map::getShortestPath(const std::vector<int>& parent, int end) {
	std::vector<int> path;
	getPath(parent, end, path);
	return path;
}

std::vector<int> Map::dijkstra(int start, int end) {
	int V = 邻接矩阵.size();
	std::vector<int> dist(V);
	std::vector<bool> sptSet(V);
	std::vector<int> parent(V);
	for (int i = 0; i < V; i++) {
		//parent[0] = -1;
		parent[i] = -1;
		dist[i] = INT_MAX;
		sptSet[i] = false;
	}
	dist[start] = 0;
	for (int count = 0; count < V - 1; count++) {
		int u = getMinDistanceIndex(dist, sptSet);
		sptSet[u] = true;
		for (int v = 0; v < V; v++) {
			if (!sptSet[v] && 邻接矩阵[u][v] && dist[u] + 邻接矩阵[u][v] < dist[v]) {
				parent[v] = u;
				dist[v] = dist[u] + 邻接矩阵[u][v];
			}
		}
	}
	return getShortestPath(parent, end);
}

void Map::获取走法()
{
	

}



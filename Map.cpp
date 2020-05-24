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
	int ��ͼID = ���ܶ�ȡ(���ڴ�����<int>(������, { ʱ���ַ, A��ƫ��0 }) + BOSS����X - 24) + 1;
	�� = ���ڴ�����<int>(���ڴ�����<uint32_t>(������, { ʱ���ַ, A��ƫ��0, A��ƫ��1 }) + ��ͼID * 8 - 4);
	�� = ���ڴ�����<int>(���ڴ�����<uint32_t>(������, { ʱ���ַ, A��ƫ��0, A��ƫ��1 }) + ��ͼID * 8 - 8);
	BOSS��������.x = ���ܶ�ȡ(���ڴ�����<uint32_t>(������, { ʱ���ַ, A��ƫ��0 }) + BOSS����X);
	BOSS��������.y = ���ܶ�ȡ(���ڴ�����<uint32_t>(������, { ʱ���ַ, A��ƫ��0 }) + BOSS����Y);
	const int N = �� * ��;
	��ͼͨ��.resize(N, 0);
	�ڽӾ���.resize(N);
	
	for (int i = 0; i < �ڽӾ���.size(); ++i)
	{
		�ڽӾ���[i].resize(N, 0);
	}
	WriteLog(L"�ڽӾ����ʼ����ϣ�");
	int ��ʱ��ַ = ���ڴ�����<int>(���ڴ�����<uint32_t>(������, { ʱ���ַ, A��ƫ��0, A��ƫ��2 }) + ��ͼID * 20 - 16);
	for (int i = 0; i < ��ͼͨ��.size(); ++i) {
		��ͼͨ��[i] = ���ڴ�����<int>(��ʱ��ַ + i * 4);
	}
	WriteLog(L"��ͼͨ��������ϣ�");
	for (int i = 0; i < ��ͼͨ��.size(); ++i) {
		if (��ͼͨ��[i] == 0) continue;
		Coordinate_t ���� = ����ת����(i);
		CString txt;

		// �ұ��Ƿ�����
		if ((��ͼͨ��[i] & 1) && (����.x + 1 < ��)) {
			int u = ����ת����(����), v = ����ת����({ ����.x + 1, ����.y });
			�ڽӾ���[u][v] = 1;
			�ڽӾ���[v][u] = 1;
			txt.Format(L"����: (%d,%d) ������, u=%d,v=%d", ����.x, ����.y, u, v);
			WriteLog(txt);
		}
		else {
			txt.Format(L"����: (%d,%d) û������", ����.x, ����.y);
			WriteLog(txt);
		}
		// �ϱ��Ƿ�����
		if ((��ͼͨ��[i] & 2) && (����.y - 1 >= 0)) {
			int u = ����ת����(����), v = ����ת����({ ����.x, ����.y - 1 });
			�ڽӾ���[u][v] = 1;
			�ڽӾ���[v][u] = 1;
			txt.Format(L"����: (%d,%d) ������, u=%d,v=%d", ����.x, ����.y, u, v);
			WriteLog(txt);
		}
		else {
			txt.Format(L"����: (%d,%d) û������", ����.x, ����.y);
			WriteLog(txt);
		}
		// ����Ƿ�����
		if ((��ͼͨ��[i] & 4) && (����.x - 1 >= 0)) {
			int u = ����ת����(����), v = ����ת����({ ����.x - 1, ����.y });
			�ڽӾ���[u][v] = 1;
			�ڽӾ���[v][u] = 1;
			txt.Format(L"����: (%d,%d) ������, u=%d,v=%d", ����.x, ����.y, u, v);
			WriteLog(txt);
		}
		else {
			txt.Format(L"����: (%d,%d) û������", ����.x, ����.y);
			WriteLog(txt);
		}
		// �±��Ƿ�����
		if ((��ͼͨ��[i] & 8) && (����.y + 1 < ��)) {
			int u = ����ת����(����), v = ����ת����({ ����.x, ����.y + 1 });
			�ڽӾ���[u][v] = 1;
			�ڽӾ���[v][u] = 1;
			txt.Format(L"����: (%d,%d) ������, u=%d,v=%d", ����.x, ����.y, u, v);
			WriteLog(txt);
		}
		else {
			txt.Format(L"����: (%d,%d) û������", ����.x, ����.y);
			WriteLog(txt);
		}
		WriteLog(L"\r\n");
	}
	
}

int Map::����ת����(Coordinate_t ����)
{
	return ����.y * �� + ����.x;
}

Coordinate_t Map::����ת����(int ����)
{
	return { ���� % ��, ���� / �� };
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
	int V = �ڽӾ���.size();
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
			if (!sptSet[v] && �ڽӾ���[u][v] && dist[u] + �ڽӾ���[u][v] < dist[v]) {
				parent[v] = u;
				dist[v] = dist[u] + �ڽӾ���[u][v];
			}
		}
	}
	return getShortestPath(parent, end);
}

void Map::��ȡ�߷�()
{
	

}



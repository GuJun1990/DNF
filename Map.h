#pragma once

#include "DataType.h"
#include <vector>
#include "Room.h"

using namespace std;

class Map
{
public:
	Map();
	int 读地图高() const { return 高; }
	int 读地图宽() const { return 宽; }
	Coordinate_t 读BOSS房间坐标() const { return BOSS房间坐标; }
	int 坐标转索引(Coordinate_t 坐标);
	Coordinate_t 索引转坐标(int 索引);

	void 获取走法();
	vector<vector<int>> 获取邻接矩阵() { return 邻接矩阵; }
	vector<int> 读地图通道() { return 地图通道; }
	std::vector<int> Map::dijkstra(int start, int end);

private:
	Coordinate_t BOSS房间坐标;
	int 宽;
	int 高;
	int 地图编号;
	vector<int> 地图通道;
	vector<vector<int>> 邻接矩阵;

	int Map::getMinDistanceIndex(const std::vector<int>& dist, const std::vector<bool>& sptSet);
	void Map::getPath(const std::vector<int>& parent, int j, std::vector<int>& path);
	std::vector<int> Map::getShortestPath(const std::vector<int>& parent, int end);
};

// 游戏地图
class RoomInfo
{
	Coordinate_t 地图坐标;
	bool 地图左边;
	bool 地图右边;
	bool 地图上边;
	bool 地图下边;
	bool 地图通道;
	int 背景颜色;
};



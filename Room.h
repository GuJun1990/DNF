#pragma once
#include "DataType.h"
#include <vector>

using namespace std;

class Room
{
public:
	Room();
	void UpdateInfo();
	bool IsDoorOpen();
	bool IsBossRoom(Coordinate_t boss);
	bool hasCampfire();
	Coordinate_t 读房间坐标() const { return 坐标; }

	vector<Object_t> 读房间物品列表() const { return 房间物品列表; }

	void 移动物品到脚下();

private:
	Coordinate_t 坐标;
	vector<Object_t> 房间物品列表;
	bool 门状态;
	bool 地图左边;
	bool 地图右边;
	bool 地图上边;
	bool 地图下边;
	bool 地图通道;
	int 背景颜色;
};

//地图节点
class MapNode
{
	int F;
	int G;
	int H;
	Coordinate_t 当前坐标;
	Coordinate_t 最终坐标;
};



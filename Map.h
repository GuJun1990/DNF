#pragma once

#include "DataType.h"
#include <vector>
#include "Room.h"

using namespace std;

class Map
{
public:
	Map();
	int ����ͼ��() const { return ��; }
	int ����ͼ��() const { return ��; }
	Coordinate_t ��BOSS��������() const { return BOSS��������; }
	int ����ת����(Coordinate_t ����);
	Coordinate_t ����ת����(int ����);

	void ��ȡ�߷�();
	vector<vector<int>> ��ȡ�ڽӾ���() { return �ڽӾ���; }
	vector<int> ����ͼͨ��() { return ��ͼͨ��; }
	std::vector<int> Map::dijkstra(int start, int end);

private:
	Coordinate_t BOSS��������;
	int ��;
	int ��;
	int ��ͼ���;
	vector<int> ��ͼͨ��;
	vector<vector<int>> �ڽӾ���;

	int Map::getMinDistanceIndex(const std::vector<int>& dist, const std::vector<bool>& sptSet);
	void Map::getPath(const std::vector<int>& parent, int j, std::vector<int>& path);
	std::vector<int> Map::getShortestPath(const std::vector<int>& parent, int end);
};

// ��Ϸ��ͼ
class RoomInfo
{
	Coordinate_t ��ͼ����;
	bool ��ͼ���;
	bool ��ͼ�ұ�;
	bool ��ͼ�ϱ�;
	bool ��ͼ�±�;
	bool ��ͼͨ��;
	int ������ɫ;
};



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
	Coordinate_t ����������() const { return ����; }

	vector<Object_t> ��������Ʒ�б�() const { return ������Ʒ�б�; }

	void �ƶ���Ʒ������();

private:
	Coordinate_t ����;
	vector<Object_t> ������Ʒ�б�;
	bool ��״̬;
	bool ��ͼ���;
	bool ��ͼ�ұ�;
	bool ��ͼ�ϱ�;
	bool ��ͼ�±�;
	bool ��ͼͨ��;
	int ������ɫ;
};

//��ͼ�ڵ�
class MapNode
{
	int F;
	int G;
	int H;
	Coordinate_t ��ǰ����;
	Coordinate_t ��������;
};



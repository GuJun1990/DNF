#pragma once
#include <cstdint>
#include <Windows.h>
#include <vector>
#include "DataType.h"
#include "BaseAddress.h"
#include "OffsetAddr.h"
#include "Room.h"

using namespace std;

template <typename T>
T 读内存数据(uint32_t 地址)
{
	T ret = T();
	__try {
		ret = *(T*)(地址);
	} 
	__except (1) {}
	return ret;
}

template <typename T>
T 读内存数据(uint32_t 基址, const vector<int>& 偏移地址列表)
{
	uint32_t 地址 = 基址;
	for (const auto& 偏移地址 : 偏移地址列表)
	{
		地址 = 读内存数据<uint32_t>(地址) + 偏移地址;
	}
	return 读内存数据<T>(地址);
}

template <typename T>
void 写内存数据(uint32_t 地址, T 数据)
{
	size_t len = sizeof(T);
	DWORD op = { 0 };
	VirtualProtect((LPVOID)地址, len, PAGE_EXECUTE_READWRITE, &op);
	memcpy((void*)地址, &数据, len);
	VirtualProtect((LPVOID)地址, len, op, &op);
}

void 写NOP指令(uint32_t 地址, int NOP个数);

void 写内存字节数组(uint32_t 地址, BYTE 字节数组[], int 长度);

void 公告(std::wstring txt);
GameState_t 读游戏状态();
Coordinate_t 读对象对标(uint32_t 对象基址, ObjType_t 对象类型);
vector<Object_t> 遍历地图();
void 坐标CALL(Coordinate_t 坐标);
uint32_t 解密读取(uint32_t 地址);
void 加密写入(uint32_t 地址, int32_t 数据, int 类型);
uint32_t 读评分();
void 顺图CALL(Direction_t 方向);

Coordinate_t 寻找怪物(Room& room);

Direction_t 获取下一个房间方向(Coordinate_t curr, Coordinate_t next);

void 组包选图();
void 组包回城();
void 组包进图(int 编号, int 难度, bool 任务);
void 组包城镇移动(int 大区域, int 小区域, int 坐标X, int 坐标Y);
void 组包翻牌(int x, int y);


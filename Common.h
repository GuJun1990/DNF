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
T ���ڴ�����(uint32_t ��ַ)
{
	T ret = T();
	__try {
		ret = *(T*)(��ַ);
	} 
	__except (1) {}
	return ret;
}

template <typename T>
T ���ڴ�����(uint32_t ��ַ, const vector<int>& ƫ�Ƶ�ַ�б�)
{
	uint32_t ��ַ = ��ַ;
	for (const auto& ƫ�Ƶ�ַ : ƫ�Ƶ�ַ�б�)
	{
		��ַ = ���ڴ�����<uint32_t>(��ַ) + ƫ�Ƶ�ַ;
	}
	return ���ڴ�����<T>(��ַ);
}

template <typename T>
void д�ڴ�����(uint32_t ��ַ, T ����)
{
	size_t len = sizeof(T);
	DWORD op = { 0 };
	VirtualProtect((LPVOID)��ַ, len, PAGE_EXECUTE_READWRITE, &op);
	memcpy((void*)��ַ, &����, len);
	VirtualProtect((LPVOID)��ַ, len, op, &op);
}

void дNOPָ��(uint32_t ��ַ, int NOP����);

void д�ڴ��ֽ�����(uint32_t ��ַ, BYTE �ֽ�����[], int ����);

void ����(std::wstring txt);
GameState_t ����Ϸ״̬();
Coordinate_t ������Ա�(uint32_t �����ַ, ObjType_t ��������);
vector<Object_t> ������ͼ();
void ����CALL(Coordinate_t ����);
uint32_t ���ܶ�ȡ(uint32_t ��ַ);
void ����д��(uint32_t ��ַ, int32_t ����, int ����);
uint32_t ������();
void ˳ͼCALL(Direction_t ����);

Coordinate_t Ѱ�ҹ���(Room& room);

Direction_t ��ȡ��һ�����䷽��(Coordinate_t curr, Coordinate_t next);

void ���ѡͼ();
void ����س�();
void �����ͼ(int ���, int �Ѷ�, bool ����);
void ��������ƶ�(int ������, int С����, int ����X, int ����Y);
void �������(int x, int y);


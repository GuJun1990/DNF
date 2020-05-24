#include "pch.h"
#include "Room.h"
#include "Common.h"
#include "BaseAddress.h"
#include "OffsetAddr.h"

Room::Room()
{
	UpdateInfo();
}

void Room::UpdateInfo()
{
	
	if (读游戏状态() != 游戏状态_在副本中) return;
	坐标.x = 读内存数据<int>(房间编号, { 时间基址, A星偏移3 });
	坐标.y = 读内存数据<int>(房间编号, { 时间基址, A星偏移4 });
	/*
	房间物品列表.clear();
	uint32_t Obj基址 = 读内存数据<uint32_t>(读内存数据<uint32_t>(人物基址) + 地图偏移);
	uint32_t 首指针 = 读内存数据<uint32_t>(Obj基址 + 首地址);
	uint32_t 尾指针 = 读内存数据<uint32_t>(Obj基址 + 尾地址);
	for (uint32_t Obj指针 = 首指针; Obj指针 < 尾指针; Obj指针 += 4)
	{
		wchar_t* 物品名称 = 读内存数据<wchar_t*>(读内存数据<uint32_t>(Obj指针) + 名称偏移);
		ObjType_t 物品类型 = 读内存数据<ObjType_t>(读内存数据<uint32_t>(Obj指针) + 类型偏移);
		ObjFaction_t 物品阵营 = 读内存数据<ObjFaction_t>(读内存数据<uint32_t>(Obj指针) + 阵营偏移);
		Coordinate_t 物品坐标 = 读对象对标(Obj指针, 物品类型);
		Object_t obj;
		obj.名称 = 物品名称;
		obj.类型 = 物品类型;
		obj.阵营 = 物品阵营;
		obj.坐标 = 物品坐标;
		房间物品列表.push_back(obj);
	}
	*/
	门状态 = 解密读取(读内存数据<uint32_t>(人物基址, { 地图偏移 }) + 门状态偏移);
}

bool Room::IsDoorOpen()
{
	门状态 = 解密读取(读内存数据<uint32_t>(人物基址, { 地图偏移 }) + 门状态偏移);
	return 门状态 == 0;
}

bool Room::IsBossRoom(Coordinate_t boss)
{
	Coordinate_t curr = 读房间坐标();
	return curr.x == boss.x && curr.y == boss.y;
}

bool Room::hasCampfire()
{
	for (const auto& obj : 房间物品列表) if (obj.类型 == 对象类型_营火) return true;
	return false;
}

void Room::移动物品到脚下() {

}
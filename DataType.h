#pragma once

// 游戏状态
enum GameState_t {
	游戏状态_选择角色 = 0,
	游戏状态_在城镇中,
	游戏状态_选择副本,
	游戏状态_在副本中
};

// 物品类型
enum ObjType_t {
	对象类型_营火			= 4,
	对象类型_建筑			= 33,
	对象类型_角色或人偶	= 273,
	对象类型_金币或材料	= 289,
	对象类型_怪物			= 529,
	对象类型_门或墙		= 4129,
	对象类型_技能			= 61400
};

// 物品阵营
enum ObjFaction_t {
	物品阵营_己方 = 0,
	物品阵营_敌人 = 100,
	物品阵营_建筑 = 200
};

// 坐标数据
struct Coordinate_t {
	int x;
	int y;
	int z;
};

// 物品对象
struct Object_t {
	wchar_t*		名称; 
	ObjType_t		类型;
	ObjFaction_t	阵营;
	Coordinate_t	坐标;
};


struct Map_t {
public:
	Map_t() 
	{
				
	}
	int 宽;
	int 高;
	Coordinate_t BOSS房间坐标;
};

struct Room_t {
	Coordinate_t 坐标;
};

// 方向
enum Direction_t {
	方向_左 = 0,
	方向_右 = 1,
	方向_上 = 2,
	方向_下 = 3
};

enum Key_t {
	KEY_上 = 469,
	KEY_下 = 488,
	KEY_左 = 472,
	KEY_右 = 474
};

struct AStarNode {
	int F;
	int G;
	int H;
	Coordinate_t current;
	Coordinate_t parent;
};
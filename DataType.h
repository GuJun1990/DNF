#pragma once

// ��Ϸ״̬
enum GameState_t {
	��Ϸ״̬_ѡ���ɫ = 0,
	��Ϸ״̬_�ڳ�����,
	��Ϸ״̬_ѡ�񸱱�,
	��Ϸ״̬_�ڸ�����
};

// ��Ʒ����
enum ObjType_t {
	��������_Ӫ��			= 4,
	��������_����			= 33,
	��������_��ɫ����ż	= 273,
	��������_��һ����	= 289,
	��������_����			= 529,
	��������_�Ż�ǽ		= 4129,
	��������_����			= 61400
};

// ��Ʒ��Ӫ
enum ObjFaction_t {
	��Ʒ��Ӫ_���� = 0,
	��Ʒ��Ӫ_���� = 100,
	��Ʒ��Ӫ_���� = 200
};

// ��������
struct Coordinate_t {
	int x;
	int y;
	int z;
};

// ��Ʒ����
struct Object_t {
	wchar_t*		����; 
	ObjType_t		����;
	ObjFaction_t	��Ӫ;
	Coordinate_t	����;
};


struct Map_t {
public:
	Map_t() 
	{
				
	}
	int ��;
	int ��;
	Coordinate_t BOSS��������;
};

struct Room_t {
	Coordinate_t ����;
};

// ����
enum Direction_t {
	����_�� = 0,
	����_�� = 1,
	����_�� = 2,
	����_�� = 3
};

enum Key_t {
	KEY_�� = 469,
	KEY_�� = 488,
	KEY_�� = 472,
	KEY_�� = 474
};

struct AStarNode {
	int F;
	int G;
	int H;
	Coordinate_t current;
	Coordinate_t parent;
};
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
	
	if (����Ϸ״̬() != ��Ϸ״̬_�ڸ�����) return;
	����.x = ���ڴ�����<int>(������, { ʱ���ַ, A��ƫ��3 });
	����.y = ���ڴ�����<int>(������, { ʱ���ַ, A��ƫ��4 });
	/*
	������Ʒ�б�.clear();
	uint32_t Obj��ַ = ���ڴ�����<uint32_t>(���ڴ�����<uint32_t>(�����ַ) + ��ͼƫ��);
	uint32_t ��ָ�� = ���ڴ�����<uint32_t>(Obj��ַ + �׵�ַ);
	uint32_t βָ�� = ���ڴ�����<uint32_t>(Obj��ַ + β��ַ);
	for (uint32_t Objָ�� = ��ָ��; Objָ�� < βָ��; Objָ�� += 4)
	{
		wchar_t* ��Ʒ���� = ���ڴ�����<wchar_t*>(���ڴ�����<uint32_t>(Objָ��) + ����ƫ��);
		ObjType_t ��Ʒ���� = ���ڴ�����<ObjType_t>(���ڴ�����<uint32_t>(Objָ��) + ����ƫ��);
		ObjFaction_t ��Ʒ��Ӫ = ���ڴ�����<ObjFaction_t>(���ڴ�����<uint32_t>(Objָ��) + ��Ӫƫ��);
		Coordinate_t ��Ʒ���� = ������Ա�(Objָ��, ��Ʒ����);
		Object_t obj;
		obj.���� = ��Ʒ����;
		obj.���� = ��Ʒ����;
		obj.��Ӫ = ��Ʒ��Ӫ;
		obj.���� = ��Ʒ����;
		������Ʒ�б�.push_back(obj);
	}
	*/
	��״̬ = ���ܶ�ȡ(���ڴ�����<uint32_t>(�����ַ, { ��ͼƫ�� }) + ��״̬ƫ��);
}

bool Room::IsDoorOpen()
{
	��״̬ = ���ܶ�ȡ(���ڴ�����<uint32_t>(�����ַ, { ��ͼƫ�� }) + ��״̬ƫ��);
	return ��״̬ == 0;
}

bool Room::IsBossRoom(Coordinate_t boss)
{
	Coordinate_t curr = ����������();
	return curr.x == boss.x && curr.y == boss.y;
}

bool Room::hasCampfire()
{
	for (const auto& obj : ������Ʒ�б�) if (obj.���� == ��������_Ӫ��) return true;
	return false;
}

void Room::�ƶ���Ʒ������() {

}
#include "pch.h"
#include "Common.h"
#include <Windows.h>


void дNOPָ��(uint32_t ��ַ, int NOP����)
{
	DWORD old = { 0 };
	char nop = 0x90;
	VirtualProtect((LPVOID)��ַ, NOP����, PAGE_EXECUTE_READWRITE, &old);
	for (int i = 0; i < NOP����; ++i)
	{
		memcpy((void*)(��ַ+i), &nop, NOP����);
	}
	VirtualProtect((LPVOID)��ַ, NOP����, PAGE_EXECUTE_READWRITE, &old);

}

void д�ڴ��ֽ�����(uint32_t ��ַ, BYTE �ֽ�����[], int ����)
{
	DWORD old = { 0 };
	VirtualProtect((LPVOID)��ַ, ����, PAGE_EXECUTE_READWRITE, &old);
	memcpy((PVOID)��ַ, �ֽ�����, ����);
	VirtualProtect((LPVOID)��ַ, ����, PAGE_EXECUTE_READWRITE, &old);
}

void ����(std::wstring txt) 
{
	if (txt.empty()) return;
	std::wstring value = L"[GameHelper]\t";
	value += txt;
	const wchar_t* txtAddr = value.c_str();
	__asm
	{
		PUSH 0;
		PUSH 0;
		PUSH 0;
		PUSH 0;
		PUSH 0;
		PUSH 0x24;						// ������ʾ��λ��
		PUSH 0xFF00;					// ������ʾ��������ɫ
		PUSH txtAddr;					// ������ʾ���ݵ�ַ
		MOV ECX, �̵��ַ
		MOV ECX, [ECX];					
		MOV ECX, [ECX + 0x54];			
		MOV EAX, ���ȹ���;				// ���ȹ���
		CALL EAX;
	}
}

GameState_t ����Ϸ״̬()
{
	return ���ڴ�����<GameState_t>(��Ϸ״̬);
}


Coordinate_t ������Ա�(uint32_t �����ַ, ObjType_t ��������)
{
	Coordinate_t ���� = { 0 };
	uint32_t �����ַ = ���ڴ�����<uint32_t>(�����ַ);
	if (�������� == ��������_��ɫ����ż)
	{
		uint32_t �������� = ���ڴ�����<uint32_t>(�����ַ + ��ż����ƫ��);
		����.x = static_cast<int>(���ڴ�����<float>(�������� + ��żX����ƫ��));
		����.y = static_cast<int>(���ڴ�����<float>(�������� + ��żY����ƫ��));
	}
	else
	{
		uint32_t �������� = ���ڴ�����<uint32_t>(�����ַ + ����ż����ƫ��);
		����.x = static_cast<int>(���ڴ�����<float>(�������� + ����żX����ƫ��));
		����.y = static_cast<int>(���ڴ�����<float>(�������� + ����żY����ƫ��));
	}
	return std::move(����);
}

vector<Object_t> ������ͼ()
{
	vector<Object_t> objects;
	if (����Ϸ״̬() != ��Ϸ״̬_�ڸ�����) return objects;
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
		objects.push_back(obj);
	}
	return move(objects);
}

void ����CALL(Coordinate_t ����)
{
	if (����Ϸ״̬() != ��Ϸ״̬_�ڸ�����) return;
	uint32_t ����ָ�� = ���ڴ�����<uint32_t>(�����ַ);
	__asm
	{
		MOV ESI, ����ָ��;
		MOV EDI, [ESI];
		PUSH(����.z);
		PUSH(����.y);
		PUSH(����.x);
		MOV EAX, [EDI + 0xC4];
		MOV ECX, ESI;
		CALL EAX;
	}
}

/*
03E24817    8BCE            mov ecx,esi
03E24819    8B35 B02F7406   mov esi,dword ptr ds:[0x6742FB0]
03E2481F    C1E1 10         shl ecx,0x10
03E24822    0BCA            or ecx,edx
03E24824    8BD0            mov edx,eax
03E24826    C1EA 10         shr edx,0x10
03E24829    8B5496 24       mov edx,dword ptr ds:[esi+edx*4+0x24]
03E2482D    25 FFFF0000     and eax,0xFFFF
03E24832    5F              pop edi
03E24833    898C82 14210000 mov dword ptr ds:[edx+eax*4+0x2114],ecx
03E2483A    5E              pop esi
03E2483B    5D              pop ebp
03E2483C    C2 0800         retn 0x8
*/
uint32_t ���ܶ�ȡ(uint32_t ��ַ)
{
	uint32_t eax, esi, edx;
	eax = ���ڴ�����<uint32_t>(��ַ);
	esi = ���ڴ�����<uint32_t>(���ܻ�ַ);
	edx = eax;
	edx >>= 0x10;
	edx = ���ڴ�����<uint32_t>(esi + edx * 4 + 0x24);
	eax = eax & 0xFFFF;
	eax = ���ڴ�����<uint32_t>(edx + eax * 4 + 0x2114);
	edx = static_cast<uint16_t>(eax);
	esi = edx;
	esi <<= 0x10;
	esi = esi ^ edx;
	edx = ���ڴ�����<uint32_t>(��ַ + 4);
	eax = esi ^ edx;
	return eax;
}

void ����д��(uint32_t ��ַ, int32_t ����, int ����)
{

}

uint32_t ������()
{
	return ���ܶ�ȡ(���ڴ�����<uint32_t>(���ֻ�ַ) + ����ƫ��);
}


/*
0192C86A    8B0D 88185B06   mov ecx,dword ptr ds:[0x65B1888]         ; �̵��ַ-8
0192C870    51              push ecx
0192C871    E8 8AD1C700     call 025A9A00
0192C876    8BC8            mov ecx,eax
0192C878    E8 63CCC700     call 025A94E0
0192C87D    85C0            test eax,eax
0192C87F    74 72           je short 0192C8F3
0192C881    8D4D DC         lea ecx,dword ptr ss:[ebp-0x24]
0192C884    E8 27A11C01     call 02AF69B0
0192C889    C745 FC 0000000>mov dword ptr ss:[ebp-0x4],0x0
0192C890    8B16            mov edx,dword ptr ds:[esi]
0192C892    8B42 68         mov eax,dword ptr ds:[edx+0x68]
0192C895    8BCE            mov ecx,esi
0192C897    FFD0            call eax
0192C899    85C0            test eax,eax
0192C89B    74 3D           je short 0192C8DA
0192C89D    6A 00           push 0x0
0192C89F    8BCE            mov ecx,esi
0192C8A1    E8 9AEEFFFF     call 0192B740
0192C8A6    40              inc eax
0192C8A7    50              push eax
0192C8A8    83EC 14         sub esp,0x14
0192C8AB    8D55 DC         lea edx,dword ptr ss:[ebp-0x24]
0192C8AE    8BCC            mov ecx,esp
0192C8B0    8965 F0         mov dword ptr ss:[ebp-0x10],esp
0192C8B3    52              push edx
0192C8B4    E8 C7EEB2FF     call 0145B780
0192C8B9    C645 FC 01      mov byte ptr ss:[ebp-0x4],0x1
0192C8BD    8B06            mov eax,dword ptr ds:[esi]
0192C8BF    8B50 68         mov edx,dword ptr ds:[eax+0x68]
0192C8C2    6A 05           push 0x5
0192C8C4    8BCE            mov ecx,esi
0192C8C6    FFD2            call edx
0192C8C8    8BC8            mov ecx,eax
0192C8CA    E8 41BE5B01     call 02EE8710                            ; EAX��Դ�����CALL,��һ����Դ��ʱ���ַ
0192C8CF    C645 FC 00      mov byte ptr ss:[ebp-0x4],0x0
0192C8D3    8BC8            mov ecx,eax
0192C8D5    E8 463B6700     call 01FA0420                            ; ��ͼCALL [������ͼCALL]
*/
void ˳ͼCALL(Direction_t ����)
{
	__asm
	{
		MOV ECX, �̵��ַ
		MOV ECX, [ECX - 8];
		MOV ECX, [ECX + ʱ���ַ];
		MOV ECX, [ECX + 0x8C];
		PUSH(-1);
		PUSH(-1);
		PUSH(0);
		PUSH(0); 
		PUSH(0);
		PUSH(0);
		PUSH(0);
		PUSH(����);
		MOV EAX, ��ͼCALL;
		CALL EAX;
	}
}

Coordinate_t Ѱ�ҹ���(Room& room)
{
	room.UpdateInfo();
	vector<Object_t> ��Ʒ�б� = room.��������Ʒ�б�();
	for (const auto& ��Ʒ : ��Ʒ�б�)
	{
		if (��Ʒ.���� == ��������_���� || (��Ʒ.���� == ��������_��ɫ����ż && ��Ʒ.��Ӫ == ��Ʒ��Ӫ_����))
		{
			return ��Ʒ.����;
		}
	}
}

// ����CALL
void AllocatePacket(int len)
{
	__asm
	{
		PUSH len;
		MOV ECX, ������ַ;
		MOV ECX, [ECX];
		MOV EAX, ����CALL;
		CALL EAX;
	}
}

// ����CALL
void SendPacket() 
{
	__asm
	{
		MOV ECX, ������ַ;
		MOV ECX, [ECX];
		mov EAX, ����CALL;
		CALL EAX;
	}
}

// ����CALL
void EncryptPacket(uint32_t arg, int len) 
{
	uint32_t obj = { 0 };
	switch (len) {
	case 1:
		obj = ����CALL;
		break;
	case 2:
		obj = ����CALL + 48;
		break;
	case 4:
		obj = ����CALL + 96;
		break;
	case 8:
		obj = ����CALL + 144;
		break;
	default:
		break;
	}
	if (obj == 0) return;
	__asm
	{
		PUSH arg;
		MOV ECX, ������ַ;
		MOV ECX, [ECX];
		MOV EAX, obj;
		CALL EAX;
	}
}


void ���ѡͼ()
{
	AllocatePacket(15);
	EncryptPacket(0, 4);
	SendPacket();
}

void ����س�()
{
	AllocatePacket(42);
	SendPacket();
}

void �����ͼ(int ���, int �Ѷ�, bool ����)
{
	if (!����)
	{
		AllocatePacket(16);
		EncryptPacket(���, 4);
		EncryptPacket(�Ѷ�, 1);
		EncryptPacket(0, 2);
		EncryptPacket(0, 1);
		EncryptPacket(0, 1);
		EncryptPacket(65535, 2);
		EncryptPacket(0, 4);
		EncryptPacket(0, 1);
		EncryptPacket(0, 4);
		EncryptPacket(0, 1);
		EncryptPacket(-1, 4);
		SendPacket();
	}
	else
	{
		AllocatePacket(16);
		EncryptPacket(���, 4);
		EncryptPacket(�Ѷ�, 1);
		EncryptPacket(0, 2);
		EncryptPacket(0, 1);
		EncryptPacket(0, 1);
		EncryptPacket(65535, 2);
		EncryptPacket(0, 4);
		EncryptPacket(0, 1);
		EncryptPacket(0, 4);
		EncryptPacket(0, 1);
		EncryptPacket(-1, 4);
		SendPacket();
	}
}

void ��������ƶ�(int ������, int С����, int ����X, int ����Y)
{
	AllocatePacket(36);
	EncryptPacket(������, 1);
	EncryptPacket(С����, 1);
	EncryptPacket(����X, 2);
	EncryptPacket(����Y, 2);
	EncryptPacket(5, 1);
	EncryptPacket(38, 2);
	EncryptPacket(2, 2);
	EncryptPacket(0, 4);
	EncryptPacket(0, 1);
	SendPacket();
}

void �������(int x, int y)
{
	AllocatePacket(69);
	SendPacket();
	AllocatePacket(70);
	SendPacket();
	AllocatePacket(71);
	EncryptPacket(x, 1);
	EncryptPacket(y, 1);
	SendPacket();
}

Direction_t ��ȡ��һ�����䷽��(Coordinate_t curr, Coordinate_t next)
{
	if (curr.x == next.x)
	{
		return next.y > curr.y ? ����_�� : ����_��;
	}
	else
	{
		return next.x > curr.x ? ����_�� : ����_��;
	}
}
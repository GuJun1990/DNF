#include "pch.h"
#include "Common.h"
#include <Windows.h>


void 写NOP指令(uint32_t 地址, int NOP个数)
{
	DWORD old = { 0 };
	char nop = 0x90;
	VirtualProtect((LPVOID)地址, NOP个数, PAGE_EXECUTE_READWRITE, &old);
	for (int i = 0; i < NOP个数; ++i)
	{
		memcpy((void*)(地址+i), &nop, NOP个数);
	}
	VirtualProtect((LPVOID)地址, NOP个数, PAGE_EXECUTE_READWRITE, &old);

}

void 写内存字节数组(uint32_t 地址, BYTE 字节数组[], int 长度)
{
	DWORD old = { 0 };
	VirtualProtect((LPVOID)地址, 长度, PAGE_EXECUTE_READWRITE, &old);
	memcpy((PVOID)地址, 字节数组, 长度);
	VirtualProtect((LPVOID)地址, 长度, PAGE_EXECUTE_READWRITE, &old);
}

void 公告(std::wstring txt) 
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
		PUSH 0x24;						// 公告显示的位置
		PUSH 0xFF00;					// 公告显示的文字颜色
		PUSH txtAddr;					// 公告显示内容地址
		MOV ECX, 商店基址
		MOV ECX, [ECX];					
		MOV ECX, [ECX + 0x54];			
		MOV EAX, 喇叭公告;				// 喇叭公告
		CALL EAX;
	}
}

GameState_t 读游戏状态()
{
	return 读内存数据<GameState_t>(游戏状态);
}


Coordinate_t 读对象对标(uint32_t 对象基址, ObjType_t 对象类型)
{
	Coordinate_t 坐标 = { 0 };
	uint32_t 对象地址 = 读内存数据<uint32_t>(对象基址);
	if (对象类型 == 对象类型_角色或人偶)
	{
		uint32_t 对象坐标 = 读内存数据<uint32_t>(对象地址 + 人偶坐标偏移);
		坐标.x = static_cast<int>(读内存数据<float>(对象坐标 + 人偶X坐标偏移));
		坐标.y = static_cast<int>(读内存数据<float>(对象坐标 + 人偶Y坐标偏移));
	}
	else
	{
		uint32_t 对象坐标 = 读内存数据<uint32_t>(对象地址 + 非人偶坐标偏移);
		坐标.x = static_cast<int>(读内存数据<float>(对象坐标 + 非人偶X坐标偏移));
		坐标.y = static_cast<int>(读内存数据<float>(对象坐标 + 非人偶Y坐标偏移));
	}
	return std::move(坐标);
}

vector<Object_t> 遍历地图()
{
	vector<Object_t> objects;
	if (读游戏状态() != 游戏状态_在副本中) return objects;
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
		objects.push_back(obj);
	}
	return move(objects);
}

void 坐标CALL(Coordinate_t 坐标)
{
	if (读游戏状态() != 游戏状态_在副本中) return;
	uint32_t 人物指针 = 读内存数据<uint32_t>(人物基址);
	__asm
	{
		MOV ESI, 人物指针;
		MOV EDI, [ESI];
		PUSH(坐标.z);
		PUSH(坐标.y);
		PUSH(坐标.x);
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
uint32_t 解密读取(uint32_t 地址)
{
	uint32_t eax, esi, edx;
	eax = 读内存数据<uint32_t>(地址);
	esi = 读内存数据<uint32_t>(解密基址);
	edx = eax;
	edx >>= 0x10;
	edx = 读内存数据<uint32_t>(esi + edx * 4 + 0x24);
	eax = eax & 0xFFFF;
	eax = 读内存数据<uint32_t>(edx + eax * 4 + 0x2114);
	edx = static_cast<uint16_t>(eax);
	esi = edx;
	esi <<= 0x10;
	esi = esi ^ edx;
	edx = 读内存数据<uint32_t>(地址 + 4);
	eax = esi ^ edx;
	return eax;
}

void 加密写入(uint32_t 地址, int32_t 数据, int 类型)
{

}

uint32_t 读评分()
{
	return 解密读取(读内存数据<uint32_t>(评分基址) + 评分偏移);
}


/*
0192C86A    8B0D 88185B06   mov ecx,dword ptr ds:[0x65B1888]         ; 商店基址-8
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
0192C8CA    E8 41BE5B01     call 02EE8710                            ; EAX来源于这个CALL,下一层来源于时间基址
0192C8CF    C645 FC 00      mov byte ptr ss:[ebp-0x4],0x0
0192C8D3    8BC8            mov ecx,eax
0192C8D5    E8 463B6700     call 01FA0420                            ; 过图CALL [正常过图CALL]
*/
void 顺图CALL(Direction_t 方向)
{
	__asm
	{
		MOV ECX, 商店基址
		MOV ECX, [ECX - 8];
		MOV ECX, [ECX + 时间基址];
		MOV ECX, [ECX + 0x8C];
		PUSH(-1);
		PUSH(-1);
		PUSH(0);
		PUSH(0); 
		PUSH(0);
		PUSH(0);
		PUSH(0);
		PUSH(方向);
		MOV EAX, 过图CALL;
		CALL EAX;
	}
}

Coordinate_t 寻找怪物(Room& room)
{
	room.UpdateInfo();
	vector<Object_t> 物品列表 = room.读房间物品列表();
	for (const auto& 物品 : 物品列表)
	{
		if (物品.类型 == 对象类型_怪物 || (物品.类型 == 对象类型_角色或人偶 && 物品.阵营 == 物品阵营_敌人))
		{
			return 物品.坐标;
		}
	}
}

// 缓冲CALL
void AllocatePacket(int len)
{
	__asm
	{
		PUSH len;
		MOV ECX, 发包基址;
		MOV ECX, [ECX];
		MOV EAX, 缓冲CALL;
		CALL EAX;
	}
}

// 发包CALL
void SendPacket() 
{
	__asm
	{
		MOV ECX, 发包基址;
		MOV ECX, [ECX];
		mov EAX, 发包CALL;
		CALL EAX;
	}
}

// 加密CALL
void EncryptPacket(uint32_t arg, int len) 
{
	uint32_t obj = { 0 };
	switch (len) {
	case 1:
		obj = 加密CALL;
		break;
	case 2:
		obj = 加密CALL + 48;
		break;
	case 4:
		obj = 加密CALL + 96;
		break;
	case 8:
		obj = 加密CALL + 144;
		break;
	default:
		break;
	}
	if (obj == 0) return;
	__asm
	{
		PUSH arg;
		MOV ECX, 发包基址;
		MOV ECX, [ECX];
		MOV EAX, obj;
		CALL EAX;
	}
}


void 组包选图()
{
	AllocatePacket(15);
	EncryptPacket(0, 4);
	SendPacket();
}

void 组包回城()
{
	AllocatePacket(42);
	SendPacket();
}

void 组包进图(int 编号, int 难度, bool 任务)
{
	if (!任务)
	{
		AllocatePacket(16);
		EncryptPacket(编号, 4);
		EncryptPacket(难度, 1);
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
		EncryptPacket(编号, 4);
		EncryptPacket(难度, 1);
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

void 组包城镇移动(int 大区域, int 小区域, int 坐标X, int 坐标Y)
{
	AllocatePacket(36);
	EncryptPacket(大区域, 1);
	EncryptPacket(小区域, 1);
	EncryptPacket(坐标X, 2);
	EncryptPacket(坐标Y, 2);
	EncryptPacket(5, 1);
	EncryptPacket(38, 2);
	EncryptPacket(2, 2);
	EncryptPacket(0, 4);
	EncryptPacket(0, 1);
	SendPacket();
}

void 组包翻牌(int x, int y)
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

Direction_t 获取下一个房间方向(Coordinate_t curr, Coordinate_t next)
{
	if (curr.x == next.x)
	{
		return next.y > curr.y ? 方向_下 : 方向_上;
	}
	else
	{
		return next.x > curr.x ? 方向_右 : 方向_左;
	}
}
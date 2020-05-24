// CPage3.cpp: 实现文件
//

#include "pch.h"
#include "GameHelper.h"
#include "CPage3.h"
#include "afxdialogex.h"
#include "Common.h"
#include "Room.h"
#include "Map.h"
#include "Logger.h"

// CPage3 对话框

IMPLEMENT_DYNAMIC(CPage3, CDialogEx)

CPage3::CPage3(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TAG_PAGE3, pParent)
{

}

CPage3::~CPage3()
{
}

void CPage3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_CeditDirection);
}


BEGIN_MESSAGE_MAP(CPage3, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CPage3::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CPage3::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CPage3::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CPage3::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CPage3::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CPage3::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CPage3::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &CPage3::OnBnClickedButton9)
END_MESSAGE_MAP()


// CPage3 消息处理程序

// 过图CALL
void CPage3::OnBnClickedButton1()
{
	BYTE nops[5] = { 0x90, 0x90, 0x90, 0x90, 0x90};
	写内存字节数组(顺图检测, nops, 5);
	// TODO: 在此添加控件通知处理程序代码
	CString value;
	m_CeditDirection.GetWindowText(value);
	Direction_t 方向 = static_cast<Direction_t>(_ttoi(value));
	顺图CALL(方向);
}


void CPage3::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	Room room;
	Coordinate_t 坐标 = 寻找怪物(room);
	坐标CALL(坐标);
}


// 回城
void CPage3::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	组包回城();
}


void CPage3::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	组包进图(40, 1, FALSE);
}


void CPage3::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	组包选图();
}


void CPage3::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	Map map;
	Room room;
	Coordinate_t 当前房间坐标 = room.读房间坐标();
	Coordinate_t BOSS房间坐标 = map.读BOSS房间坐标();
	vector<int> path = map.dijkstra(map.坐标转索引(当前房间坐标), map.坐标转索引(BOSS房间坐标));
	if (!path.empty()) {
		Coordinate_t 下一个房间坐标 = map.索引转坐标(path[0]);
		Direction_t 方向 = 获取下一个房间方向(当前房间坐标, 下一个房间坐标);
		顺图CALL(方向);
	}
}


void CPage3::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	WriteLog(L"写日志测试！");
}


void CPage3::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	Coordinate_t 人物坐标;
	人物坐标.x = (int)读内存数据<float>(0x65B128C);
	人物坐标.y = (int)读内存数据<float>(0x65B1290);
	uint32_t Obj基址 = 读内存数据<uint32_t>(读内存数据<uint32_t>(人物基址) + 地图偏移);
	uint32_t 首指针 = 读内存数据<uint32_t>(Obj基址 + 首地址);
	uint32_t 尾指针 = 读内存数据<uint32_t>(Obj基址 + 尾地址);
	for (uint32_t Obj指针 = 首指针; Obj指针 < 尾指针; Obj指针 += 4)
	{
		ObjType_t 物品类型 = 读内存数据<ObjType_t>(读内存数据<uint32_t>(Obj指针) + 类型偏移);
		Coordinate_t 物品坐标 = 读对象对标(Obj指针, 物品类型);
		Object_t obj;
		obj.坐标 = 物品坐标;
		uint32_t objBaseAddr = 读内存数据<uint32_t>(Obj指针);
		if (物品类型 == 对象类型_金币或材料) {
			写内存数据(读内存数据<int>(objBaseAddr + 非人偶坐标偏移) + 非人偶X坐标偏移, float(人物坐标.x - 2));
			写内存数据(读内存数据<int>(objBaseAddr + 非人偶坐标偏移) + 非人偶Y坐标偏移, float(人物坐标.y - 2));
		}
	}
}

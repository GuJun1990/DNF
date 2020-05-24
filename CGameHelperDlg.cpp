// CGameHelperDlg.cpp: 实现文件
//

#include "pch.h"
#include "GameHelper.h"
#include "CGameHelperDlg.h"
#include "afxdialogex.h"
#include "Common.h"
#include "Map.h"


// CGameHelperDlg 对话框

IMPLEMENT_DYNAMIC(CGameHelperDlg, CDialogEx)

CGameHelperDlg::CGameHelperDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_GAME_HELPER, pParent)
{

}

BOOL CGameHelperDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO: 在此添加额外的初始化代码
	m_tab.InsertItem(0, L"主界面");
	m_tab.InsertItem(1, L"配置项");
	m_tab.InsertItem(2, L"工具项");
	m_tab.InsertItem(3, L"测试项");
	// 创建子窗口
	m_page0.Create(IDD_TAB_PAGE0, GetDlgItem(IDC_TAB));
	m_page1.Create(IDD_TAB_PAGE1, GetDlgItem(IDC_TAB));
	m_page2.Create(IDD_TAB_PAGE2, GetDlgItem(IDC_TAB));
	m_page3.Create(IDD_TAG_PAGE3, GetDlgItem(IDC_TAB));
	// 设置窗体在TAB控件范围内
	CRect rect;
	m_tab.GetClientRect(&rect);
	rect.top += 22;
	m_page0.MoveWindow(&rect);
	m_page1.MoveWindow(&rect);
	m_page2.MoveWindow(&rect);
	m_page3.MoveWindow(&rect);
	// 让page0显示出来
	m_page0.ShowWindow(TRUE);
	m_tab.SetCurSel(0);

	return TRUE;
}

CGameHelperDlg::~CGameHelperDlg()
{
}

void CGameHelperDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB, m_tab);
}


BEGIN_MESSAGE_MAP(CGameHelperDlg, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB, &CGameHelperDlg::OnTcnSelchangeTab)
	ON_BN_CLICKED(IDC_BUTTON1, &CGameHelperDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON4, &CGameHelperDlg::OnBnClickedButton4)
END_MESSAGE_MAP()


// CGameHelperDlg 消息处理程序


void CGameHelperDlg::OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
	switch (m_tab.GetCurSel())
	{
	case 0:
		m_page0.ShowWindow(TRUE);
		m_page1.ShowWindow(FALSE);
		m_page2.ShowWindow(FALSE);
		m_page3.ShowWindow(FALSE);
		break;
	case 1:
		m_page0.ShowWindow(FALSE);
		m_page1.ShowWindow(TRUE);
		m_page2.ShowWindow(FALSE);
		m_page3.ShowWindow(FALSE);
		break;
	case 2:
		m_page0.ShowWindow(FALSE);
		m_page1.ShowWindow(FALSE);
		m_page2.ShowWindow(TRUE);
		m_page3.ShowWindow(FALSE);
		break;
	case 3:
		m_page0.ShowWindow(FALSE);
		m_page1.ShowWindow(FALSE);
		m_page2.ShowWindow(FALSE);
		m_page3.ShowWindow(TRUE);
		break;
	default:
		break;
	}
}


bool 标志_自动刷图 = false;

// 地面上还有木有可以捡的东西
bool HasItemsOnTheGround()
{
	// TODO: 在此添加控件通知处理程序代码
	Coordinate_t 人物坐标;
	人物坐标.x = (int)读内存数据<float>(0x65B128C);
	人物坐标.y = (int)读内存数据<float>(0x65B1290);
	uint32_t Obj基址 = 读内存数据<uint32_t>(读内存数据<uint32_t>(人物基址) + 地图偏移);
	uint32_t 首指针 = 读内存数据<uint32_t>(Obj基址 + 首地址);
	uint32_t 尾指针 = 读内存数据<uint32_t>(Obj基址 + 尾地址);
	bool b = false;
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
			b = true;
		}
	}
	return b;
}


void 跟随怪物() 
{
	uint32_t Obj基址 = 读内存数据<uint32_t>(读内存数据<uint32_t>(人物基址) + 地图偏移);
	uint32_t 首指针 = 读内存数据<uint32_t>(Obj基址 + 首地址);
	uint32_t 尾指针 = 读内存数据<uint32_t>(Obj基址 + 尾地址);
	for (uint32_t Obj指针 = 首指针; Obj指针 < 尾指针; Obj指针 += 4)
	{
		ObjType_t 物品类型 = 读内存数据<ObjType_t>(读内存数据<uint32_t>(Obj指针) + 类型偏移);
		ObjFaction_t 物品阵营 = 读内存数据<ObjFaction_t>(读内存数据<uint32_t>(Obj指针) + 阵营偏移);
		Coordinate_t 物品坐标 = 读对象对标(Obj指针, 物品类型);
		Object_t obj;
		obj.坐标 = 物品坐标;
		uint32_t objBaseAddr = 读内存数据<uint32_t>(Obj指针);
		if (物品类型 == 对象类型_怪物 || (物品类型 == 对象类型_角色或人偶 && 物品阵营 == 物品阵营_敌人))
		{
			坐标CALL(物品坐标);
			return;
		}
	}
}

DWORD WINAPI 半自动刷图(LPARAM lpData)
{
	公告(L"开启自动");
	while (标志_自动刷图) {
		Sleep(500);
		if (读游戏状态() != 游戏状态_在副本中) continue;
		Map map;
		Room room;
		if (room.IsBossRoom(map.读BOSS房间坐标())) continue;
		if (!room.IsDoorOpen()) {
			跟随怪物();
			continue;
		}
		if (HasItemsOnTheGround()) continue;
		vector<int> path = map.dijkstra(map.坐标转索引(room.读房间坐标()), map.坐标转索引(map.读BOSS房间坐标()));
		if (!path.empty()) {
			Coordinate_t next = map.索引转坐标(path[0]);
			Direction_t 方向 = 获取下一个房间方向(room.读房间坐标(), next);
			顺图CALL(方向);
		}
	}
	公告(L"自动退出.");
	return TRUE;
}


void CGameHelperDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	标志_自动刷图 = true;
	::CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)半自动刷图, NULL, 0, 0);
}




void CGameHelperDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	标志_自动刷图 = false;
}

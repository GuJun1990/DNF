// CPage2.cpp: 实现文件
//

#include "pch.h"
#include "GameHelper.h"
#include "CPage2.h"
#include "afxdialogex.h"
#include "Common.h"
#include "Room.h"
#include "Map.h"
#include "Logger.h"

// CPage2 对话框

IMPLEMENT_DYNAMIC(CPage2, CDialogEx)

CPage2::CPage2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TAB_PAGE2, pParent)
{

}

CPage2::~CPage2()
{
}

void CPage2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT, m_edit);
	DDX_Control(pDX, IDC_EDIT1, m_edit1);
	DDX_Control(pDX, IDC_EDIT2, m_edit2);
	DDX_Control(pDX, IDC_EDIT3, m_edit3);
	DDX_Control(pDX, IDC_EDIT4, m_edit4);
}


BEGIN_MESSAGE_MAP(CPage2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CPage2::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CPage2::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CPage2::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CPage2::OnBnClickedButton4)
END_MESSAGE_MAP()


// CPage2 消息处理程序

void CPage2::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	Room room;
	WriteLog(L"初始化房间信息完毕！");
	vector<Object_t> objects = room.读房间物品列表();
	std::wstringstream ws;
	if (!objects.empty())
	{
		for (const auto& obj : objects)
		{
			ws
				<< L"名称：" << obj.名称 << "\t"
				<< L"类型：" << obj.类型 << "\t"
				<< L"阵营：" << obj.阵营 << "\t"
				<< L"坐标: " << obj.坐标.x << L"," << obj.坐标.y
				<< L"\r\n";
		}
	}
	Coordinate_t 房间坐标 = room.读房间坐标();
	ws << L"房间坐标：" << 房间坐标.x << L"," << 房间坐标.y << "\r\n";
	wchar_t* 门状态 = room.IsDoorOpen() ? L"是" : L"否";
	ws << L"门是否打开： " << 门状态 << "\r\n";
	ws << L"评分：" << 读评分() << "\r\n";

	Map map;
	WriteLog(L"初始化地图信息完毕！");
	ws << L"地图高: " << map.读地图高() << L", 地图宽: " << map.读地图宽() << "\r\n";
	ws << L"BOSS房间坐标：" << map.读BOSS房间坐标().x << ", " << map.读BOSS房间坐标().y << "\r\n";
	vector<int> channels = map.读地图通道();
	for (int i = 0; i < channels.size(); ++i) {
		ws << channels[i] << " ";
	}
	ws << "\r\n";

	/*
	vector<vector<int>> 邻接矩阵 = map.获取邻接矩阵();
	for (int i = 0; i < 邻接矩阵.size(); ++i) {
		for (int j = 0; j < 邻接矩阵[0].size(); ++j) {
			ws << 邻接矩阵[i][j] << " ";
		}
		ws << "\r\n";
	}
	*/

	WriteLog(ws.str().c_str());
	CString txt;
	txt.Format(L"起点： %d, 终点: %d", map.坐标转索引(房间坐标), map.坐标转索引(map.读BOSS房间坐标()));
	WriteLog(txt);
	vector<int> path = map.dijkstra(map.坐标转索引(房间坐标), map.坐标转索引(map.读BOSS房间坐标()));
	ws << L"路径： ";
	for (int i = 0; i < path.size(); ++i)
	{
		ws << path[i] << "(" << map.索引转坐标(path[i]).x << "," << map.索引转坐标(path[i]).y << ")" << "\t";
	}
	ws << "\r\n";
	if (!path.empty()) {
		Coordinate_t 下一个房间坐标 = map.索引转坐标(path[0]);
		Direction_t 方向 = 获取下一个房间方向(房间坐标, 下一个房间坐标);
		ws << L"过图方向：" << 方向;
		txt.Format(L"过图方向: %d", 方向);
		顺图CALL(方向);
	}
	
	ws << "\r\n";
	m_edit.Clear();
	m_edit.SetWindowTextW(ws.str().c_str());
}


void CPage2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString value;
	m_edit1.GetWindowTextW(value);
	int param1 = _ttoi(value);
	m_edit2.GetWindowTextW(value);
	int param2 = _ttoi(value);
	坐标CALL({ param1, param2, 0 });
}


void CPage2::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	CString value;
	m_edit1.GetWindowText(value);
	int param1 = _ttoi(value);
	//int val = 解密读取(param1);
	//value.Format(L"%x", val);
	//m_edit2.SetWindowTextW(value);
	顺图CALL(方向_右);
}

void CPage2::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CString value;
	m_edit1.GetWindowTextW(value);
	int param1 = _ttoi(value);
	m_edit2.GetWindowTextW(value);
	int param2 = _ttoi(value);
}

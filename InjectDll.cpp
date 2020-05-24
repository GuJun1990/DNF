#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int InjectDll(const wchar_t* windowName, const char* dllPath)
{
	HWND hwnd = ::FindWindow(NULL, windowName);
	if (hwnd == NULL)
	{
		cerr << L"没有找到[" << windowName << L"]窗口句柄！" << endl;
		return -1;
	}
	DWORD pid;
	::GetWindowThreadProcessId(hwnd, &pid);
	if (pid == 0)
	{
		cerr << L"没有找到[" << windowName << L"]进程ID！" << endl;
		return -2;
	}
	HANDLE hProcess = ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
	if (hProcess == NULL)
	{
		cerr << L"没有找到[" << windowName << L"]进程句柄！" << endl;
		return -3;
	}
	LPDWORD address = (LPDWORD)VirtualAllocEx(hProcess, NULL, 256, MEM_COMMIT, PAGE_READWRITE);
	if (address == NULL)
	{
		cerr << L"申请内存失败！" << endl;
		return -4;
	}
	SIZE_T writeSize;
	WriteProcessMemory(hProcess, address, dllPath, strlen(dllPath) + 1, &writeSize);
	if (writeSize < strlen(dllPath))
	{
		cerr << L"写入DLL路径失败！" << endl;
		return -5;
	}
	HANDLE hThread = CreateRemoteThread(hProcess, NULL, NULL, (LPTHREAD_START_ROUTINE)LoadLibrary, address, NULL, NULL);
	WaitForSingleObject(hThread, 0xFFFFFFF);
	CloseHandle(hThread);
	VirtualFreeEx(hProcess, address, 256, MEM_DECOMMIT);
	CloseHandle(hProcess);
	cout << L"写入DLL成功！" << endl;
	return 0;
}

int main()
{
	char dllDirName[64] = {0};
	GetCurrentDirectoryA(sizeof(dllDirName), dllDirName);
	string dllFullPath(dllDirName);
	dllFullPath.append("\\");
	dllFullPath.append("GameHelper.dll");
	printf("%s\r\n", dllFullPath.c_str());
	int ret = InjectDll(L"地下城与勇士", dllFullPath.c_str());
	if (ret != 0) 
	{
		cerr << L"注入DLL失败！" << endl;
	}
	getchar();
	return ret;
}


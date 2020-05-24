#include "pch.h"
#include <locale.h>

//文件读内容
CString FileReadText(CString strPath)
{
	CFile file(strPath, CFile::modeRead);//只读
	int Lenth = file.GetLength();
	char *read = new char[Lenth];
	file.Read(read, Lenth);
	CString strText(read); //char *->cstring    CString xx(char*);
	file.Close();
	delete[]read;
	return strText;
}
//文件写内容
void FileWriteText(CString strPath, CString text)
{
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	_tsetlocale(LC_CTYPE, _T("chs"));
	CStdioFile mFile;
	if (!mFile.Open(strPath, CFile::modeCreate | CFile::modeNoTruncate | CFile::modeReadWrite | CFile::typeText))

	{
		AfxMessageBox(_T("打开文件失败!"));
		return;
	}
	mFile.SeekToEnd();
	mFile.WriteString(text + L"\r\n");
	mFile.Close();
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
}

void WriteLog(CString content)
{
	FileWriteText(L"c:\\日志.txt", content);
}
// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Users\\jun\\Desktop\\黑客工具\\dm\\7.2002\\dm.dll" no_namespace
// Cdmsoft 包装器类

class Cdmsoft : public COleDispatchDriver
{
public:
	Cdmsoft() {} // 调用 COleDispatchDriver 默认构造函数
	Cdmsoft(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Cdmsoft(const Cdmsoft& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// Idmsoft 方法
public:
	CString Ver()
	{
		CString result;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long SetPath(LPCTSTR path)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, parms, path);
		return result;
	}
	CString Ocr(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color, sim);
		return result;
	}
	long FindStr(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, str, color, sim, x, y);
		return result;
	}
	long GetResultCount(LPCTSTR str)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, str);
		return result;
	}
	long GetResultPos(LPCTSTR str, long index, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, str, index, x, y);
		return result;
	}
	long StrStr(LPCTSTR s, LPCTSTR str)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms, s, str);
		return result;
	}
	long SendCommand(LPCTSTR cmd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms, cmd);
		return result;
	}
	long UseDict(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index);
		return result;
	}
	CString GetBasePath()
	{
		CString result;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long SetDictPwd(LPCTSTR pwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pwd);
		return result;
	}
	CString OcrInFile(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, pic_name, color, sim);
		return result;
	}
	long Capture(long x1, long y1, long x2, long y2, LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, file);
		return result;
	}
	long KeyPress(long vk)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms, vk);
		return result;
	}
	long KeyDown(long vk)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms, vk);
		return result;
	}
	long KeyUp(long vk)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, parms, vk);
		return result;
	}
	long LeftClick()
	{
		long result;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long RightClick()
	{
		long result;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long MiddleClick()
	{
		long result;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long LeftDoubleClick()
	{
		long result;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long LeftDown()
	{
		long result;
		InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long LeftUp()
	{
		long result;
		InvokeHelper(0x16, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long RightDown()
	{
		long result;
		InvokeHelper(0x17, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long RightUp()
	{
		long result;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long MoveTo(long x, long y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x, y);
		return result;
	}
	long MoveR(long rx, long ry)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, rx, ry);
		return result;
	}
	CString GetColor(long x, long y)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x, y);
		return result;
	}
	CString GetColorBGR(long x, long y)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x, y);
		return result;
	}
	CString RGB2BGR(LPCTSTR rgb_color)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, rgb_color);
		return result;
	}
	CString BGR2RGB(LPCTSTR bgr_color)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, bgr_color);
		return result;
	}
	long UnBindWindow()
	{
		long result;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long CmpColor(long x, long y, LPCTSTR color, double sim)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x, y, color, sim);
		return result;
	}
	long ClientToScreen(long hwnd, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y);
		return result;
	}
	long ScreenToClient(long hwnd, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y);
		return result;
	}
	long ShowScrMsg(long x1, long y1, long x2, long y2, LPCTSTR msg, LPCTSTR color)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x23, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, msg, color);
		return result;
	}
	long SetMinRowGap(long row_gap)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_I4, (void*)&result, parms, row_gap);
		return result;
	}
	long SetMinColGap(long col_gap)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x25, DISPATCH_METHOD, VT_I4, (void*)&result, parms, col_gap);
		return result;
	}
	long FindColor(long x1, long y1, long x2, long y2, LPCTSTR color, double sim, long dir, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, color, sim, dir, x, y);
		return result;
	}
	CString FindColorEx(long x1, long y1, long x2, long y2, LPCTSTR color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x27, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color, sim, dir);
		return result;
	}
	long SetWordLineHeight(long line_height)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_I4, (void*)&result, parms, line_height);
		return result;
	}
	long SetWordGap(long word_gap)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_I4, (void*)&result, parms, word_gap);
		return result;
	}
	long SetRowGapNoDict(long row_gap)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, row_gap);
		return result;
	}
	long SetColGapNoDict(long col_gap)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, col_gap);
		return result;
	}
	long SetWordLineHeightNoDict(long line_height)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, line_height);
		return result;
	}
	long SetWordGapNoDict(long word_gap)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, word_gap);
		return result;
	}
	long GetWordResultCount(LPCTSTR str)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x2e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, str);
		return result;
	}
	long GetWordResultPos(LPCTSTR str, long index, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x2f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, str, index, x, y);
		return result;
	}
	CString GetWordResultStr(LPCTSTR str, long index)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x30, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, str, index);
		return result;
	}
	CString GetWords(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0x31, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color, sim);
		return result;
	}
	CString GetWordsNoDict(long x1, long y1, long x2, long y2, LPCTSTR color)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0x32, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color);
		return result;
	}
	long SetShowErrorMsg(long show)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x33, DISPATCH_METHOD, VT_I4, (void*)&result, parms, show);
		return result;
	}
	long GetClientSize(long hwnd, VARIANT * width, VARIANT * height)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x34, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, width, height);
		return result;
	}
	long MoveWindow(long hwnd, long x, long y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x35, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y);
		return result;
	}
	CString GetColorHSV(long x, long y)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x36, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x, y);
		return result;
	}
	CString GetAveRGB(long x1, long y1, long x2, long y2)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x37, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2);
		return result;
	}
	CString GetAveHSV(long x1, long y1, long x2, long y2)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x38, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2);
		return result;
	}
	long GetForegroundWindow()
	{
		long result;
		InvokeHelper(0x39, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetForegroundFocus()
	{
		long result;
		InvokeHelper(0x3a, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetMousePointWindow()
	{
		long result;
		InvokeHelper(0x3b, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetPointWindow(long x, long y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x3c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x, y);
		return result;
	}
	CString EnumWindow(long parent, LPCTSTR title, LPCTSTR class_name, long filter)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x3d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, parent, title, class_name, filter);
		return result;
	}
	long GetWindowState(long hwnd, long flag)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x3e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, flag);
		return result;
	}
	long GetWindow(long hwnd, long flag)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x3f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, flag);
		return result;
	}
	long GetSpecialWindow(long flag)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x40, DISPATCH_METHOD, VT_I4, (void*)&result, parms, flag);
		return result;
	}
	long SetWindowText(long hwnd, LPCTSTR text)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x41, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, text);
		return result;
	}
	long SetWindowSize(long hwnd, long width, long height)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x42, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, width, height);
		return result;
	}
	long GetWindowRect(long hwnd, VARIANT * x1, VARIANT * y1, VARIANT * x2, VARIANT * y2)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x43, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x1, y1, x2, y2);
		return result;
	}
	CString GetWindowTitle(long hwnd)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x44, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd);
		return result;
	}
	CString GetWindowClass(long hwnd)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x45, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd);
		return result;
	}
	long SetWindowState(long hwnd, long flag)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x46, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, flag);
		return result;
	}
	long CreateFoobarRect(long hwnd, long x, long y, long w, long h)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x47, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, w, h);
		return result;
	}
	long CreateFoobarRoundRect(long hwnd, long x, long y, long w, long h, long rw, long rh)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x48, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, w, h, rw, rh);
		return result;
	}
	long CreateFoobarEllipse(long hwnd, long x, long y, long w, long h)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x49, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, w, h);
		return result;
	}
	long CreateFoobarCustom(long hwnd, long x, long y, LPCTSTR pic, LPCTSTR trans_color, double sim)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0x4a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, pic, trans_color, sim);
		return result;
	}
	long FoobarFillRect(long hwnd, long x1, long y1, long x2, long y2, LPCTSTR color)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0x4b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x1, y1, x2, y2, color);
		return result;
	}
	long FoobarDrawText(long hwnd, long x, long y, long w, long h, LPCTSTR text, LPCTSTR color, long align)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x4c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, w, h, text, color, align);
		return result;
	}
	long FoobarDrawPic(long hwnd, long x, long y, LPCTSTR pic, LPCTSTR trans_color)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x4d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, pic, trans_color);
		return result;
	}
	long FoobarUpdate(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	long FoobarLock(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	long FoobarUnlock(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x50, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	long FoobarSetFont(long hwnd, LPCTSTR font_name, long size, long flag)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0x51, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, font_name, size, flag);
		return result;
	}
	long FoobarTextRect(long hwnd, long x, long y, long w, long h)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x52, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, w, h);
		return result;
	}
	long FoobarPrintText(long hwnd, LPCTSTR text, LPCTSTR color)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x53, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, text, color);
		return result;
	}
	long FoobarClearText(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x54, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	long FoobarTextLineGap(long hwnd, long gap)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x55, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, gap);
		return result;
	}
	long Play(LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x56, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file);
		return result;
	}
	long FaqCapture(long x1, long y1, long x2, long y2, long quality, long delay, long time)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x57, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, quality, delay, time);
		return result;
	}
	long FaqRelease(long handle)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x58, DISPATCH_METHOD, VT_I4, (void*)&result, parms, handle);
		return result;
	}
	CString FaqSend(LPCTSTR server, long handle, long request_type, long time_out)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x59, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, server, handle, request_type, time_out);
		return result;
	}
	long Beep(long fre, long delay)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x5a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, fre, delay);
		return result;
	}
	long FoobarClose(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x5b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	long MoveDD(long dx, long dy)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x5c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, dx, dy);
		return result;
	}
	long FaqGetSize(long handle)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x5d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, handle);
		return result;
	}
	long LoadPic(LPCTSTR pic_name)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x5e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pic_name);
		return result;
	}
	long FreePic(LPCTSTR pic_name)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x5f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pic_name);
		return result;
	}
	long GetScreenData(long x1, long y1, long x2, long y2)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x60, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2);
		return result;
	}
	long FreeScreenData(long handle)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x61, DISPATCH_METHOD, VT_I4, (void*)&result, parms, handle);
		return result;
	}
	long WheelUp()
	{
		long result;
		InvokeHelper(0x62, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long WheelDown()
	{
		long result;
		InvokeHelper(0x63, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SetMouseDelay(LPCTSTR type, long delay)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x64, DISPATCH_METHOD, VT_I4, (void*)&result, parms, type, delay);
		return result;
	}
	long SetKeypadDelay(LPCTSTR type, long delay)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x65, DISPATCH_METHOD, VT_I4, (void*)&result, parms, type, delay);
		return result;
	}
	CString GetEnv(long index, LPCTSTR name)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x66, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, index, name);
		return result;
	}
	long SetEnv(long index, LPCTSTR name, LPCTSTR value)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x67, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index, name, value);
		return result;
	}
	long SendString(long hwnd, LPCTSTR str)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x68, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, str);
		return result;
	}
	long DelEnv(long index, LPCTSTR name)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x69, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index, name);
		return result;
	}
	CString GetPath()
	{
		CString result;
		InvokeHelper(0x6a, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long SetDict(long index, LPCTSTR dict_name)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index, dict_name);
		return result;
	}
	long FindPic(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x6c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, pic_name, delta_color, sim, dir, x, y);
		return result;
	}
	CString FindPicEx(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x6d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, pic_name, delta_color, sim, dir);
		return result;
	}
	long SetClientSize(long hwnd, long width, long height)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x6e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, width, height);
		return result;
	}
	__int64 ReadInt(long hwnd, LPCTSTR addr, long type)
	{
		__int64 result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4;
		InvokeHelper(0x6f, DISPATCH_METHOD, VT_I8, (void*)&result, parms, hwnd, addr, type);
		return result;
	}
	float ReadFloat(long hwnd, LPCTSTR addr)
	{
		float result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x70, DISPATCH_METHOD, VT_R4, (void*)&result, parms, hwnd, addr);
		return result;
	}
	double ReadDouble(long hwnd, LPCTSTR addr)
	{
		double result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x71, DISPATCH_METHOD, VT_R8, (void*)&result, parms, hwnd, addr);
		return result;
	}
	CString FindInt(long hwnd, LPCTSTR addr_range, __int64 int_value_min, __int64 int_value_max, long type)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I8 VTS_I8 VTS_I4;
		InvokeHelper(0x72, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, int_value_min, int_value_max, type);
		return result;
	}
	CString FindFloat(long hwnd, LPCTSTR addr_range, float float_value_min, float float_value_max)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_R4 VTS_R4;
		InvokeHelper(0x73, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, float_value_min, float_value_max);
		return result;
	}
	CString FindDouble(long hwnd, LPCTSTR addr_range, double double_value_min, double double_value_max)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_R8 VTS_R8;
		InvokeHelper(0x74, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, double_value_min, double_value_max);
		return result;
	}
	CString FindString(long hwnd, LPCTSTR addr_range, LPCTSTR string_value, long type)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, string_value, type);
		return result;
	}
	__int64 GetModuleBaseAddr(long hwnd, LPCTSTR module_name)
	{
		__int64 result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x76, DISPATCH_METHOD, VT_I8, (void*)&result, parms, hwnd, module_name);
		return result;
	}
	CString MoveToEx(long x, long y, long w, long h)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x77, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x, y, w, h);
		return result;
	}
	CString MatchPicName(LPCTSTR pic_name)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x78, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, pic_name);
		return result;
	}
	long AddDict(long index, LPCTSTR dict_info)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x79, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index, dict_info);
		return result;
	}
	long EnterCri()
	{
		long result;
		InvokeHelper(0x7a, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long LeaveCri()
	{
		long result;
		InvokeHelper(0x7b, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long WriteInt(long hwnd, LPCTSTR addr, long type, __int64 v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4 VTS_I8;
		InvokeHelper(0x7c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, type, v);
		return result;
	}
	long WriteFloat(long hwnd, LPCTSTR addr, float v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_R4;
		InvokeHelper(0x7d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, v);
		return result;
	}
	long WriteDouble(long hwnd, LPCTSTR addr, double v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0x7e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, v);
		return result;
	}
	long WriteString(long hwnd, LPCTSTR addr, long type, LPCTSTR v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4 VTS_BSTR;
		InvokeHelper(0x7f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, type, v);
		return result;
	}
	long AsmAdd(LPCTSTR asm_ins)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x80, DISPATCH_METHOD, VT_I4, (void*)&result, parms, asm_ins);
		return result;
	}
	long AsmClear()
	{
		long result;
		InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	__int64 AsmCall(long hwnd, long mode)
	{
		__int64 result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x82, DISPATCH_METHOD, VT_I8, (void*)&result, parms, hwnd, mode);
		return result;
	}
	long FindMultiColor(long x1, long y1, long x2, long y2, LPCTSTR first_color, LPCTSTR offset_color, double sim, long dir, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x83, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, first_color, offset_color, sim, dir, x, y);
		return result;
	}
	CString FindMultiColorEx(long x1, long y1, long x2, long y2, LPCTSTR first_color, LPCTSTR offset_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x84, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, first_color, offset_color, sim, dir);
		return result;
	}
	CString Assemble(__int64 base_addr, long is_64bit)
	{
		CString result;
		static BYTE parms[] = VTS_I8 VTS_I4;
		InvokeHelper(0x85, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, base_addr, is_64bit);
		return result;
	}
	CString DisAssemble(LPCTSTR asm_code, __int64 base_addr, long is_64bit)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I8 VTS_I4;
		InvokeHelper(0x86, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, asm_code, base_addr, is_64bit);
		return result;
	}
	long SetWindowTransparent(long hwnd, long v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x87, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, v);
		return result;
	}
	CString ReadData(long hwnd, LPCTSTR addr, long len)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4;
		InvokeHelper(0x88, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr, len);
		return result;
	}
	long WriteData(long hwnd, LPCTSTR addr, LPCTSTR data)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x89, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, data);
		return result;
	}
	CString FindData(long hwnd, LPCTSTR addr_range, LPCTSTR data)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0x8a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, data);
		return result;
	}
	long SetPicPwd(LPCTSTR pwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pwd);
		return result;
	}
	long Log(LPCTSTR info)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, info);
		return result;
	}
	CString FindStrE(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0x8d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim);
		return result;
	}
	CString FindColorE(long x1, long y1, long x2, long y2, LPCTSTR color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x8e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color, sim, dir);
		return result;
	}
	CString FindPicE(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x8f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, pic_name, delta_color, sim, dir);
		return result;
	}
	CString FindMultiColorE(long x1, long y1, long x2, long y2, LPCTSTR first_color, LPCTSTR offset_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x90, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, first_color, offset_color, sim, dir);
		return result;
	}
	long SetExactOcr(long exact_ocr)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x91, DISPATCH_METHOD, VT_I4, (void*)&result, parms, exact_ocr);
		return result;
	}
	CString ReadString(long hwnd, LPCTSTR addr, long type, long len)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0x92, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr, type, len);
		return result;
	}
	long FoobarTextPrintDir(long hwnd, long dir)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x93, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, dir);
		return result;
	}
	CString OcrEx(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0x94, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color, sim);
		return result;
	}
	long SetDisplayInput(LPCTSTR mode)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x95, DISPATCH_METHOD, VT_I4, (void*)&result, parms, mode);
		return result;
	}
	long GetTime()
	{
		long result;
		InvokeHelper(0x96, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetScreenWidth()
	{
		long result;
		InvokeHelper(0x97, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetScreenHeight()
	{
		long result;
		InvokeHelper(0x98, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long BindWindowEx(long hwnd, LPCTSTR display, LPCTSTR mouse, LPCTSTR keypad, LPCTSTR public_desc, long mode)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x99, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, display, mouse, keypad, public_desc, mode);
		return result;
	}
	CString GetDiskSerial(long index)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x9a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, index);
		return result;
	}
	CString Md5(LPCTSTR str)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, str);
		return result;
	}
	CString GetMac()
	{
		CString result;
		InvokeHelper(0x9c, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long ActiveInputMethod(long hwnd, LPCTSTR id)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x9d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, id);
		return result;
	}
	long CheckInputMethod(long hwnd, LPCTSTR id)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x9e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, id);
		return result;
	}
	long FindInputMethod(LPCTSTR id)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, id);
		return result;
	}
	long GetCursorPos(VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0xa0, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x, y);
		return result;
	}
	long BindWindow(long hwnd, LPCTSTR display, LPCTSTR mouse, LPCTSTR keypad, long mode)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0xa1, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, display, mouse, keypad, mode);
		return result;
	}
	long FindWindow(LPCTSTR class_name, LPCTSTR title_name)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xa2, DISPATCH_METHOD, VT_I4, (void*)&result, parms, class_name, title_name);
		return result;
	}
	long GetScreenDepth()
	{
		long result;
		InvokeHelper(0xa3, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SetScreen(long width, long height, long depth)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xa4, DISPATCH_METHOD, VT_I4, (void*)&result, parms, width, height, depth);
		return result;
	}
	long ExitOs(long type)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xa5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, type);
		return result;
	}
	CString GetDir(long type)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xa6, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, type);
		return result;
	}
	long GetOsType()
	{
		long result;
		InvokeHelper(0xa7, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long FindWindowEx(long parent, LPCTSTR class_name, LPCTSTR title_name)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0xa8, DISPATCH_METHOD, VT_I4, (void*)&result, parms, parent, class_name, title_name);
		return result;
	}
	long SetExportDict(long index, LPCTSTR dict_name)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0xa9, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index, dict_name);
		return result;
	}
	CString GetCursorShape()
	{
		CString result;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long DownCpu(long rate)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xab, DISPATCH_METHOD, VT_I4, (void*)&result, parms, rate);
		return result;
	}
	CString GetCursorSpot()
	{
		CString result;
		InvokeHelper(0xac, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long SendString2(long hwnd, LPCTSTR str)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0xad, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, str);
		return result;
	}
	long FaqPost(LPCTSTR server, long handle, long request_type, long time_out)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xae, DISPATCH_METHOD, VT_I4, (void*)&result, parms, server, handle, request_type, time_out);
		return result;
	}
	CString FaqFetch()
	{
		CString result;
		InvokeHelper(0xaf, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	CString FetchWord(long x1, long y1, long x2, long y2, LPCTSTR color, LPCTSTR word)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0xb0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color, word);
		return result;
	}
	long CaptureJpg(long x1, long y1, long x2, long y2, LPCTSTR file, long quality)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4;
		InvokeHelper(0xb1, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, file, quality);
		return result;
	}
	long FindStrWithFont(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, LPCTSTR font_name, long font_size, long flag, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_BSTR VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0xb2, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, str, color, sim, font_name, font_size, flag, x, y);
		return result;
	}
	CString FindStrWithFontE(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, LPCTSTR font_name, long font_size, long flag)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xb3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim, font_name, font_size, flag);
		return result;
	}
	CString FindStrWithFontEx(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, LPCTSTR font_name, long font_size, long flag)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xb4, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim, font_name, font_size, flag);
		return result;
	}
	CString GetDictInfo(LPCTSTR str, LPCTSTR font_name, long font_size, long flag)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, str, font_name, font_size, flag);
		return result;
	}
	long SaveDict(long index, LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0xb6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index, file);
		return result;
	}
	long GetWindowProcessId(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb7, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	CString GetWindowProcessPath(long hwnd)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd);
		return result;
	}
	long LockInput(long lock)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb9, DISPATCH_METHOD, VT_I4, (void*)&result, parms, lock);
		return result;
	}
	CString GetPicSize(LPCTSTR pic_name)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xba, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, pic_name);
		return result;
	}
	long GetID()
	{
		long result;
		InvokeHelper(0xbb, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long CapturePng(long x1, long y1, long x2, long y2, LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0xbc, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, file);
		return result;
	}
	long CaptureGif(long x1, long y1, long x2, long y2, LPCTSTR file, long delay, long time)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xbd, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, file, delay, time);
		return result;
	}
	long ImageToBmp(LPCTSTR pic_name, LPCTSTR bmp_name)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xbe, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pic_name, bmp_name);
		return result;
	}
	long FindStrFast(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0xbf, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, str, color, sim, x, y);
		return result;
	}
	CString FindStrFastEx(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0xc0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim);
		return result;
	}
	CString FindStrFastE(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0xc1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim);
		return result;
	}
	long EnableDisplayDebug(long enable_debug)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xc2, DISPATCH_METHOD, VT_I4, (void*)&result, parms, enable_debug);
		return result;
	}
	long CapturePre(LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xc3, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file);
		return result;
	}
	long RegEx(LPCTSTR code, LPCTSTR Ver, LPCTSTR ip)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0xc4, DISPATCH_METHOD, VT_I4, (void*)&result, parms, code, Ver, ip);
		return result;
	}
	CString GetMachineCode()
	{
		CString result;
		InvokeHelper(0xc5, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long SetClipboard(LPCTSTR data)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xc6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, data);
		return result;
	}
	CString GetClipboard()
	{
		CString result;
		InvokeHelper(0xc7, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long GetNowDict()
	{
		long result;
		InvokeHelper(0xc8, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long Is64Bit()
	{
		long result;
		InvokeHelper(0xc9, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetColorNum(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0xca, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, color, sim);
		return result;
	}
	CString EnumWindowByProcess(LPCTSTR process_name, LPCTSTR title, LPCTSTR class_name, long filter)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0xcb, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, process_name, title, class_name, filter);
		return result;
	}
	long GetDictCount(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xcc, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index);
		return result;
	}
	long GetLastError()
	{
		long result;
		InvokeHelper(0xcd, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	CString GetNetTime()
	{
		CString result;
		InvokeHelper(0xce, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long EnableGetColorByCapture(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xcf, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long CheckUAC()
	{
		long result;
		InvokeHelper(0xd0, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SetUAC(long uac)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xd1, DISPATCH_METHOD, VT_I4, (void*)&result, parms, uac);
		return result;
	}
	long DisableFontSmooth()
	{
		long result;
		InvokeHelper(0xd2, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long CheckFontSmooth()
	{
		long result;
		InvokeHelper(0xd3, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SetDisplayAcceler(long level)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xd4, DISPATCH_METHOD, VT_I4, (void*)&result, parms, level);
		return result;
	}
	long FindWindowByProcess(LPCTSTR process_name, LPCTSTR class_name, LPCTSTR title_name)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0xd5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, process_name, class_name, title_name);
		return result;
	}
	long FindWindowByProcessId(long process_id, LPCTSTR class_name, LPCTSTR title_name)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR;
		InvokeHelper(0xd6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, process_id, class_name, title_name);
		return result;
	}
	CString ReadIni(LPCTSTR section, LPCTSTR key, LPCTSTR file)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0xd7, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, section, key, file);
		return result;
	}
	long WriteIni(LPCTSTR section, LPCTSTR key, LPCTSTR v, LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0xd8, DISPATCH_METHOD, VT_I4, (void*)&result, parms, section, key, v, file);
		return result;
	}
	long RunApp(LPCTSTR path, long mode)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0xd9, DISPATCH_METHOD, VT_I4, (void*)&result, parms, path, mode);
		return result;
	}
	long delay(long mis)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xda, DISPATCH_METHOD, VT_I4, (void*)&result, parms, mis);
		return result;
	}
	long FindWindowSuper(LPCTSTR spec1, long flag1, long type1, LPCTSTR spec2, long flag2, long type2)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xdb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, spec1, flag1, type1, spec2, flag2, type2);
		return result;
	}
	CString ExcludePos(LPCTSTR all_pos, long type, long x1, long y1, long x2, long y2)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xdc, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, all_pos, type, x1, y1, x2, y2);
		return result;
	}
	CString FindNearestPos(LPCTSTR all_pos, long type, long x, long y)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xdd, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, all_pos, type, x, y);
		return result;
	}
	CString SortPosDistance(LPCTSTR all_pos, long type, long x, long y)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xde, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, all_pos, type, x, y);
		return result;
	}
	long FindPicMem(long x1, long y1, long x2, long y2, LPCTSTR pic_info, LPCTSTR delta_color, double sim, long dir, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0xdf, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, pic_info, delta_color, sim, dir, x, y);
		return result;
	}
	CString FindPicMemEx(long x1, long y1, long x2, long y2, LPCTSTR pic_info, LPCTSTR delta_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0xe0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, pic_info, delta_color, sim, dir);
		return result;
	}
	CString FindPicMemE(long x1, long y1, long x2, long y2, LPCTSTR pic_info, LPCTSTR delta_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0xe1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, pic_info, delta_color, sim, dir);
		return result;
	}
	CString AppendPicAddr(LPCTSTR pic_info, long addr, long size)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xe2, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, pic_info, addr, size);
		return result;
	}
	long WriteFile(LPCTSTR file, LPCTSTR content)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xe3, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file, content);
		return result;
	}
	long Stop(long id)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xe4, DISPATCH_METHOD, VT_I4, (void*)&result, parms, id);
		return result;
	}
	long SetDictMem(long index, long addr, long size)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xe5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index, addr, size);
		return result;
	}
	CString GetNetTimeSafe()
	{
		CString result;
		InvokeHelper(0xe6, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long ForceUnBindWindow(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xe7, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	CString ReadIniPwd(LPCTSTR section, LPCTSTR key, LPCTSTR file, LPCTSTR pwd)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0xe8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, section, key, file, pwd);
		return result;
	}
	long WriteIniPwd(LPCTSTR section, LPCTSTR key, LPCTSTR v, LPCTSTR file, LPCTSTR pwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0xe9, DISPATCH_METHOD, VT_I4, (void*)&result, parms, section, key, v, file, pwd);
		return result;
	}
	long DecodeFile(LPCTSTR file, LPCTSTR pwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xea, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file, pwd);
		return result;
	}
	long KeyDownChar(LPCTSTR key_str)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xeb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, key_str);
		return result;
	}
	long KeyUpChar(LPCTSTR key_str)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xec, DISPATCH_METHOD, VT_I4, (void*)&result, parms, key_str);
		return result;
	}
	long KeyPressChar(LPCTSTR key_str)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xed, DISPATCH_METHOD, VT_I4, (void*)&result, parms, key_str);
		return result;
	}
	long KeyPressStr(LPCTSTR key_str, long delay)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0xee, DISPATCH_METHOD, VT_I4, (void*)&result, parms, key_str, delay);
		return result;
	}
	long EnableKeypadPatch(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xef, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long EnableKeypadSync(long en, long time_out)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0xf0, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en, time_out);
		return result;
	}
	long EnableMouseSync(long en, long time_out)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0xf1, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en, time_out);
		return result;
	}
	long DmGuard(long en, LPCTSTR type)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0xf2, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en, type);
		return result;
	}
	long FaqCaptureFromFile(long x1, long y1, long x2, long y2, LPCTSTR file, long quality)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4;
		InvokeHelper(0xf3, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, file, quality);
		return result;
	}
	CString FindIntEx(long hwnd, LPCTSTR addr_range, __int64 int_value_min, __int64 int_value_max, long type, long step, long multi_thread, long mode)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I8 VTS_I8 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xf4, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, int_value_min, int_value_max, type, step, multi_thread, mode);
		return result;
	}
	CString FindFloatEx(long hwnd, LPCTSTR addr_range, float float_value_min, float float_value_max, long step, long multi_thread, long mode)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_R4 VTS_R4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xf5, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, float_value_min, float_value_max, step, multi_thread, mode);
		return result;
	}
	CString FindDoubleEx(long hwnd, LPCTSTR addr_range, double double_value_min, double double_value_max, long step, long multi_thread, long mode)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_R8 VTS_R8 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xf6, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, double_value_min, double_value_max, step, multi_thread, mode);
		return result;
	}
	CString FindStringEx(long hwnd, LPCTSTR addr_range, LPCTSTR string_value, long type, long step, long multi_thread, long mode)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xf7, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, string_value, type, step, multi_thread, mode);
		return result;
	}
	CString FindDataEx(long hwnd, LPCTSTR addr_range, LPCTSTR data, long step, long multi_thread, long mode)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xf8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr_range, data, step, multi_thread, mode);
		return result;
	}
	long EnableRealMouse(long en, long mousedelay, long mousestep)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0xf9, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en, mousedelay, mousestep);
		return result;
	}
	long EnableRealKeypad(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xfa, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long SendStringIme(LPCTSTR str)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xfb, DISPATCH_METHOD, VT_I4, (void*)&result, parms, str);
		return result;
	}
	long FoobarDrawLine(long hwnd, long x1, long y1, long x2, long y2, LPCTSTR color, long style, long width)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0xfc, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x1, y1, x2, y2, color, style, width);
		return result;
	}
	CString FindStrEx(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0xfd, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim);
		return result;
	}
	long IsBind(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xfe, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	long SetDisplayDelay(long t)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xff, DISPATCH_METHOD, VT_I4, (void*)&result, parms, t);
		return result;
	}
	long GetDmCount()
	{
		long result;
		InvokeHelper(0x100, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long DisableScreenSave()
	{
		long result;
		InvokeHelper(0x101, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long DisablePowerSave()
	{
		long result;
		InvokeHelper(0x102, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SetMemoryHwndAsProcessId(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x103, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long FindShape(long x1, long y1, long x2, long y2, LPCTSTR offset_color, double sim, long dir, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x104, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, offset_color, sim, dir, x, y);
		return result;
	}
	CString FindShapeE(long x1, long y1, long x2, long y2, LPCTSTR offset_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x105, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, offset_color, sim, dir);
		return result;
	}
	CString FindShapeEx(long x1, long y1, long x2, long y2, LPCTSTR offset_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x106, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, offset_color, sim, dir);
		return result;
	}
	CString FindStrS(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, VARIANT * x, VARIANT * y)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x107, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim, x, y);
		return result;
	}
	CString FindStrExS(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0x108, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim);
		return result;
	}
	CString FindStrFastS(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim, VARIANT * x, VARIANT * y)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x109, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim, x, y);
		return result;
	}
	CString FindStrFastExS(long x1, long y1, long x2, long y2, LPCTSTR str, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8;
		InvokeHelper(0x10a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, str, color, sim);
		return result;
	}
	CString FindPicS(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir, VARIANT * x, VARIANT * y)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x10b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, pic_name, delta_color, sim, dir, x, y);
		return result;
	}
	CString FindPicExS(long x1, long y1, long x2, long y2, LPCTSTR pic_name, LPCTSTR delta_color, double sim, long dir)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_BSTR VTS_R8 VTS_I4;
		InvokeHelper(0x10c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, pic_name, delta_color, sim, dir);
		return result;
	}
	long ClearDict(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x10d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, index);
		return result;
	}
	CString GetMachineCodeNoMac()
	{
		CString result;
		InvokeHelper(0x10e, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long GetClientRect(long hwnd, VARIANT * x1, VARIANT * y1, VARIANT * x2, VARIANT * y2)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x10f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x1, y1, x2, y2);
		return result;
	}
	long EnableFakeActive(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x110, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long GetScreenDataBmp(long x1, long y1, long x2, long y2, VARIANT * data, VARIANT * size)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x111, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, data, size);
		return result;
	}
	long EncodeFile(LPCTSTR file, LPCTSTR pwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x112, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file, pwd);
		return result;
	}
	CString GetCursorShapeEx(long type)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x113, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, type);
		return result;
	}
	long FaqCancel()
	{
		long result;
		InvokeHelper(0x114, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	CString IntToData(__int64 int_value, long type)
	{
		CString result;
		static BYTE parms[] = VTS_I8 VTS_I4;
		InvokeHelper(0x115, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, int_value, type);
		return result;
	}
	CString FloatToData(float float_value)
	{
		CString result;
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x116, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, float_value);
		return result;
	}
	CString DoubleToData(double double_value)
	{
		CString result;
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x117, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, double_value);
		return result;
	}
	CString StringToData(LPCTSTR string_value, long type)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x118, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, string_value, type);
		return result;
	}
	long SetMemoryFindResultToFile(LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x119, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file);
		return result;
	}
	long EnableBind(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x11a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long SetSimMode(long mode)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x11b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, mode);
		return result;
	}
	long LockMouseRect(long x1, long y1, long x2, long y2)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x11c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2);
		return result;
	}
	long SendPaste(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x11d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	long IsDisplayDead(long x1, long y1, long x2, long y2, long t)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x11e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, t);
		return result;
	}
	long GetKeyState(long vk)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x11f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, vk);
		return result;
	}
	long CopyFile(LPCTSTR src_file, LPCTSTR dst_file, long over)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x120, DISPATCH_METHOD, VT_I4, (void*)&result, parms, src_file, dst_file, over);
		return result;
	}
	long IsFileExist(LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x121, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file);
		return result;
	}
	long DeleteFile(LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x122, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file);
		return result;
	}
	long MoveFile(LPCTSTR src_file, LPCTSTR dst_file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x123, DISPATCH_METHOD, VT_I4, (void*)&result, parms, src_file, dst_file);
		return result;
	}
	long CreateFolder(LPCTSTR folder_name)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x124, DISPATCH_METHOD, VT_I4, (void*)&result, parms, folder_name);
		return result;
	}
	long DeleteFolder(LPCTSTR folder_name)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x125, DISPATCH_METHOD, VT_I4, (void*)&result, parms, folder_name);
		return result;
	}
	long GetFileLength(LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x126, DISPATCH_METHOD, VT_I4, (void*)&result, parms, file);
		return result;
	}
	CString ReadFile(LPCTSTR file)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x127, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, file);
		return result;
	}
	long WaitKey(long key_code, long time_out)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x128, DISPATCH_METHOD, VT_I4, (void*)&result, parms, key_code, time_out);
		return result;
	}
	long DeleteIni(LPCTSTR section, LPCTSTR key, LPCTSTR file)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x129, DISPATCH_METHOD, VT_I4, (void*)&result, parms, section, key, file);
		return result;
	}
	long DeleteIniPwd(LPCTSTR section, LPCTSTR key, LPCTSTR file, LPCTSTR pwd)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x12a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, section, key, file, pwd);
		return result;
	}
	long EnableSpeedDx(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x12b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long EnableIme(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x12c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long Reg(LPCTSTR code, LPCTSTR Ver)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x12d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, code, Ver);
		return result;
	}
	CString SelectFile()
	{
		CString result;
		InvokeHelper(0x12e, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	CString SelectDirectory()
	{
		CString result;
		InvokeHelper(0x12f, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long LockDisplay(long lock)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x130, DISPATCH_METHOD, VT_I4, (void*)&result, parms, lock);
		return result;
	}
	long FoobarSetSave(long hwnd, LPCTSTR file, long en, LPCTSTR header)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4 VTS_BSTR;
		InvokeHelper(0x131, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, file, en, header);
		return result;
	}
	CString EnumWindowSuper(LPCTSTR spec1, long flag1, long type1, LPCTSTR spec2, long flag2, long type2, long sort)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x132, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, spec1, flag1, type1, spec2, flag2, type2, sort);
		return result;
	}
	long DownloadFile(LPCTSTR url, LPCTSTR save_file, long timeout)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x133, DISPATCH_METHOD, VT_I4, (void*)&result, parms, url, save_file, timeout);
		return result;
	}
	long EnableKeypadMsg(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x134, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long EnableMouseMsg(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x135, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long RegNoMac(LPCTSTR code, LPCTSTR Ver)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x136, DISPATCH_METHOD, VT_I4, (void*)&result, parms, code, Ver);
		return result;
	}
	long RegExNoMac(LPCTSTR code, LPCTSTR Ver, LPCTSTR ip)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x137, DISPATCH_METHOD, VT_I4, (void*)&result, parms, code, Ver, ip);
		return result;
	}
	long SetEnumWindowDelay(long delay)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x138, DISPATCH_METHOD, VT_I4, (void*)&result, parms, delay);
		return result;
	}
	long FindMulColor(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0x139, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, color, sim);
		return result;
	}
	CString GetDict(long index, long font_index)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x13a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, index, font_index);
		return result;
	}
	long GetBindWindow()
	{
		long result;
		InvokeHelper(0x13b, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long FoobarStartGif(long hwnd, long x, long y, LPCTSTR pic_name, long repeat_limit, long delay)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0x13c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, pic_name, repeat_limit, delay);
		return result;
	}
	long FoobarStopGif(long hwnd, long x, long y, LPCTSTR pic_name)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0x13d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, x, y, pic_name);
		return result;
	}
	long FreeProcessMemory(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x13e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	CString ReadFileData(LPCTSTR file, long start_pos, long end_pos)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0x13f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, file, start_pos, end_pos);
		return result;
	}
	__int64 VirtualAllocEx(long hwnd, __int64 addr, long size, long type)
	{
		__int64 result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4 VTS_I4;
		InvokeHelper(0x140, DISPATCH_METHOD, VT_I8, (void*)&result, parms, hwnd, addr, size, type);
		return result;
	}
	long VirtualFreeEx(long hwnd, __int64 addr)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8;
		InvokeHelper(0x141, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr);
		return result;
	}
	CString GetCommandLine(long hwnd)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x142, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd);
		return result;
	}
	long TerminateProcess(long pid)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x143, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pid);
		return result;
	}
	CString GetNetTimeByIp(LPCTSTR ip)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x144, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ip);
		return result;
	}
	CString EnumProcess(LPCTSTR name)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x145, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, name);
		return result;
	}
	CString GetProcessInfo(long pid)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x146, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, pid);
		return result;
	}
	__int64 ReadIntAddr(long hwnd, __int64 addr, long type)
	{
		__int64 result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4;
		InvokeHelper(0x147, DISPATCH_METHOD, VT_I8, (void*)&result, parms, hwnd, addr, type);
		return result;
	}
	CString ReadDataAddr(long hwnd, __int64 addr, long len)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4;
		InvokeHelper(0x148, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr, len);
		return result;
	}
	double ReadDoubleAddr(long hwnd, __int64 addr)
	{
		double result;
		static BYTE parms[] = VTS_I4 VTS_I8;
		InvokeHelper(0x149, DISPATCH_METHOD, VT_R8, (void*)&result, parms, hwnd, addr);
		return result;
	}
	float ReadFloatAddr(long hwnd, __int64 addr)
	{
		float result;
		static BYTE parms[] = VTS_I4 VTS_I8;
		InvokeHelper(0x14a, DISPATCH_METHOD, VT_R4, (void*)&result, parms, hwnd, addr);
		return result;
	}
	CString ReadStringAddr(long hwnd, __int64 addr, long type, long len)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4 VTS_I4;
		InvokeHelper(0x14b, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr, type, len);
		return result;
	}
	long WriteDataAddr(long hwnd, __int64 addr, LPCTSTR data)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_BSTR;
		InvokeHelper(0x14c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, data);
		return result;
	}
	long WriteDoubleAddr(long hwnd, __int64 addr, double v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_R8;
		InvokeHelper(0x14d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, v);
		return result;
	}
	long WriteFloatAddr(long hwnd, __int64 addr, float v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_R4;
		InvokeHelper(0x14e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, v);
		return result;
	}
	long WriteIntAddr(long hwnd, __int64 addr, long type, __int64 v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4 VTS_I8;
		InvokeHelper(0x14f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, type, v);
		return result;
	}
	long WriteStringAddr(long hwnd, __int64 addr, long type, LPCTSTR v)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4 VTS_BSTR;
		InvokeHelper(0x150, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, type, v);
		return result;
	}
	long Delays(long min_s, long max_s)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x151, DISPATCH_METHOD, VT_I4, (void*)&result, parms, min_s, max_s);
		return result;
	}
	long FindColorBlock(long x1, long y1, long x2, long y2, LPCTSTR color, double sim, long count, long width, long height, VARIANT * x, VARIANT * y)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4 VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0x152, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x1, y1, x2, y2, color, sim, count, width, height, x, y);
		return result;
	}
	CString FindColorBlockEx(long x1, long y1, long x2, long y2, LPCTSTR color, double sim, long count, long width, long height)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x153, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color, sim, count, width, height);
		return result;
	}
	long OpenProcess(long pid)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x154, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pid);
		return result;
	}
	CString EnumIniSection(LPCTSTR file)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x155, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, file);
		return result;
	}
	CString EnumIniSectionPwd(LPCTSTR file, LPCTSTR pwd)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x156, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, file, pwd);
		return result;
	}
	CString EnumIniKey(LPCTSTR section, LPCTSTR file)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x157, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, section, file);
		return result;
	}
	CString EnumIniKeyPwd(LPCTSTR section, LPCTSTR file, LPCTSTR pwd)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x158, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, section, file, pwd);
		return result;
	}
	long SwitchBindWindow(long hwnd)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x159, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd);
		return result;
	}
	long InitCri()
	{
		long result;
		InvokeHelper(0x15a, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SendStringIme2(long hwnd, LPCTSTR str, long mode)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4;
		InvokeHelper(0x15b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, str, mode);
		return result;
	}
	CString EnumWindowByProcessId(long pid, LPCTSTR title, LPCTSTR class_name, long filter)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x15c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, pid, title, class_name, filter);
		return result;
	}
	CString GetDisplayInfo()
	{
		CString result;
		InvokeHelper(0x15d, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	long EnableFontSmooth()
	{
		long result;
		InvokeHelper(0x15e, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	CString OcrExOne(long x1, long y1, long x2, long y2, LPCTSTR color, double sim)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0x15f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, x1, y1, x2, y2, color, sim);
		return result;
	}
	long SetAero(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x160, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long FoobarSetTrans(long hwnd, long trans, LPCTSTR color, double sim)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR VTS_R8;
		InvokeHelper(0x161, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, trans, color, sim);
		return result;
	}
	long EnablePicCache(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x162, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long FaqIsPosted()
	{
		long result;
		InvokeHelper(0x163, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long LoadPicByte(long addr, long size, LPCTSTR name)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0x164, DISPATCH_METHOD, VT_I4, (void*)&result, parms, addr, size, name);
		return result;
	}
	long MiddleDown()
	{
		long result;
		InvokeHelper(0x165, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long MiddleUp()
	{
		long result;
		InvokeHelper(0x166, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long FaqCaptureString(LPCTSTR str)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x167, DISPATCH_METHOD, VT_I4, (void*)&result, parms, str);
		return result;
	}
	long VirtualProtectEx(long hwnd, __int64 addr, long size, long type, long old_protect)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x168, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, size, type, old_protect);
		return result;
	}
	long SetMouseSpeed(long speed)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x169, DISPATCH_METHOD, VT_I4, (void*)&result, parms, speed);
		return result;
	}
	long GetMouseSpeed()
	{
		long result;
		InvokeHelper(0x16a, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long EnableMouseAccuracy(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long SetExcludeRegion(long type, LPCTSTR info)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x16c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, type, info);
		return result;
	}
	long EnableShareDict(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16d, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long DisableCloseDisplayAndSleep()
	{
		long result;
		InvokeHelper(0x16e, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long Int64ToInt32(__int64 v)
	{
		long result;
		static BYTE parms[] = VTS_I8;
		InvokeHelper(0x16f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, v);
		return result;
	}
	long GetLocale()
	{
		long result;
		InvokeHelper(0x170, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SetLocale()
	{
		long result;
		InvokeHelper(0x171, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long ReadDataToBin(long hwnd, LPCTSTR addr, long len)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4;
		InvokeHelper(0x172, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, len);
		return result;
	}
	long WriteDataFromBin(long hwnd, LPCTSTR addr, long data, long len)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4 VTS_I4;
		InvokeHelper(0x173, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, data, len);
		return result;
	}
	long ReadDataAddrToBin(long hwnd, __int64 addr, long len)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4;
		InvokeHelper(0x174, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, len);
		return result;
	}
	long WriteDataAddrFromBin(long hwnd, __int64 addr, long data, long len)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4 VTS_I4;
		InvokeHelper(0x175, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, addr, data, len);
		return result;
	}
	long SetParam64ToPointer()
	{
		long result;
		InvokeHelper(0x176, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetDPI()
	{
		long result;
		InvokeHelper(0x177, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SetDisplayRefreshDelay(long t)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x178, DISPATCH_METHOD, VT_I4, (void*)&result, parms, t);
		return result;
	}
	long IsFolderExist(LPCTSTR folder)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x179, DISPATCH_METHOD, VT_I4, (void*)&result, parms, folder);
		return result;
	}
	long GetCpuType()
	{
		long result;
		InvokeHelper(0x17a, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long ReleaseRef()
	{
		long result;
		InvokeHelper(0x17b, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long SetExitThread(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long GetFps()
	{
		long result;
		InvokeHelper(0x17d, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	CString VirtualQueryEx(long hwnd, __int64 addr, long pmbi)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_I4;
		InvokeHelper(0x17e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, hwnd, addr, pmbi);
		return result;
	}
	__int64 AsmCallEx(long hwnd, long mode, LPCTSTR base_addr)
	{
		__int64 result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0x17f, DISPATCH_METHOD, VT_I8, (void*)&result, parms, hwnd, mode, base_addr);
		return result;
	}
	__int64 GetRemoteApiAddress(long hwnd, __int64 base_addr, LPCTSTR fun_name)
	{
		__int64 result;
		static BYTE parms[] = VTS_I4 VTS_I8 VTS_BSTR;
		InvokeHelper(0x180, DISPATCH_METHOD, VT_I8, (void*)&result, parms, hwnd, base_addr, fun_name);
		return result;
	}
	CString ExecuteCmd(LPCTSTR cmd, LPCTSTR current_dir, long time_out)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x181, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, cmd, current_dir, time_out);
		return result;
	}
	long SpeedNormalGraphic(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x182, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long UnLoadDriver()
	{
		long result;
		InvokeHelper(0x183, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetOsBuildNumber()
	{
		long result;
		InvokeHelper(0x184, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long HackSpeed(double rate)
	{
		long result;
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x185, DISPATCH_METHOD, VT_I4, (void*)&result, parms, rate);
		return result;
	}
	CString GetRealPath(LPCTSTR path)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x186, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, path);
		return result;
	}
	long ShowTaskBarIcon(long hwnd, long is_show)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x187, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, is_show);
		return result;
	}
	long AsmSetTimeout(long time_out, long param)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0x188, DISPATCH_METHOD, VT_I4, (void*)&result, parms, time_out, param);
		return result;
	}
	CString DmGuardParams(LPCTSTR cmd, LPCTSTR sub_cmd, LPCTSTR param)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x189, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, cmd, sub_cmd, param);
		return result;
	}
	long GetModuleSize(long hwnd, LPCTSTR module_name)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x18a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, hwnd, module_name);
		return result;
	}
	long IsSurrpotVt()
	{
		long result;
		InvokeHelper(0x18b, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	CString GetDiskModel(long index)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x18c, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, index);
		return result;
	}
	CString GetDiskReversion(long index)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x18d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, index);
		return result;
	}
	long EnableFindPicMultithread(long en)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x18e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, en);
		return result;
	}
	long GetCpuUsage()
	{
		long result;
		InvokeHelper(0x18f, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long GetMemoryUsage()
	{
		long result;
		InvokeHelper(0x190, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	CString Hex32(long v)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x191, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, v);
		return result;
	}
	CString Hex64(__int64 v)
	{
		CString result;
		static BYTE parms[] = VTS_I8;
		InvokeHelper(0x192, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, v);
		return result;
	}

	// Idmsoft 属性
public:

};

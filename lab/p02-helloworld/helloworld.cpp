#include "helloworld.h"
// Register the window class.

const wchar_t CLASS_NAME[] = L"Sample Window Class";

WNDCLASS wc = {};

// 指向应用程序定义的函数
wc.lpfnWndProc = WindowProc;
// 应用程序实例的句柄
wc.hInstance = hInstance;
// 标识窗口类的字符串
wc.lpszClassName = CLASS_NAME;

RegisterClass(&wc);

HWND hwnd = CreateWindowEx(
	0,
	CLASS_NAME,
	L"Learn to Program Window",
	WS_OVERLAPPENDWINDOW
)
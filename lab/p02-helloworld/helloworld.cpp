#include "helloworld.h"
// Register the window class.

const wchar_t CLASS_NAME[] = L"Sample Window Class";

WNDCLASS wc = {};

// ָ��Ӧ�ó�����ĺ���
wc.lpfnWndProc = WindowProc;
// Ӧ�ó���ʵ���ľ��
wc.hInstance = hInstance;
// ��ʶ��������ַ���
wc.lpszClassName = CLASS_NAME;

RegisterClass(&wc);

HWND hwnd = CreateWindowEx(
	0,
	CLASS_NAME,
	L"Learn to Program Window",
	WS_OVERLAPPENDWINDOW
)
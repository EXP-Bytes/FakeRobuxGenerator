#include <Windows.h>
#include "time.h"

void visual() 
{
	int curx, cury;
	HDC screenDC = GetDC(NULL);
	int x, a{}, b{};
	int w = GetSystemMetrics(SM_CXSCREEN);
	int h = GetSystemMetrics(SM_CYSCREEN);
	int scrW = GetDeviceCaps(screenDC, HORZRES);
	int scrH = GetDeviceCaps(screenDC, VERTRES);
	POINT cursor;
	GetCursorPos(&cursor);
	curx = cursor.x;
	cury = cursor.y;
	HWND upWnd = GetForegroundWindow();
	HDC upHdc = GetDC(upWnd);
	HDC desktop = GetDC(NULL);
	upWnd = GetForegroundWindow();
	upHdc = GetDC(upWnd);
	desktop = GetDC(NULL);
	
	
	
	Sleep(1800000);
	HWND hwnd = GetDesktopWindow();
	HDC hdc = GetWindowDC(hwnd);
	RECT rekt;
	GetWindowRect(hwnd, &rekt);
	BitBlt(hdc, 0, 0, rekt.right - rekt.left, rekt.bottom - rekt.top, hdc, 0, 0, NOTSRCCOPY);
	ReleaseDC(hwnd, hdc);
	
	Sleep(100000);
	int xs = GetSystemMetrics(SM_CXSCREEN);
	int ys = GetSystemMetrics(SM_CYSCREEN);
	int x1 = rand() % (rekt.right - 100);
	int y1 = rand() % (rekt.bottom - 100);
	int x2 = rand() % (rekt.right - 100);
	int y2 = rand() % (rekt.bottom - 100);
	int width = rand() % 600;
	int height = rand() % 600;
	BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
	ReleaseDC(hwnd, hdc);
	
	Sleep(100000);
	BitBlt(hdc, 0, 0, rekt.right - rekt.left, rekt.bottom - rekt.top, hdc, 0, 0, NOTSRCCOPY);
	ReleaseDC(hwnd, hdc);
	BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
	ReleaseDC(hwnd, hdc);
	
	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
	
	Sleep(100000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);
	
	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
	
	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 50, -50, 0x444444);
	
	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
	
	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
	
	Sleep(100000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);
	
	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 50, -50, 0x444444);
	
	Sleep(100000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);
	
	Sleep(300000);
	GetWindowRect(hwnd, &rekt);
	BitBlt(hdc, 0, 0, rekt.right - rekt.left, rekt.bottom - rekt.top, hdc, 0, 0, NOTSRCCOPY);
	ReleaseDC(hwnd, hdc);
	
	Sleep(100000);
	BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
	ReleaseDC(hwnd, hdc);
	
	Sleep(100000);
	BitBlt(hdc, 0, 0, rekt.right - rekt.left, rekt.bottom - rekt.top, hdc, 0, 0, NOTSRCCOPY);
	ReleaseDC(hwnd, hdc);
	BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
	ReleaseDC(hwnd, hdc);
	
	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
	
	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 50, -50, 0x444444);
	
	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
	
	Sleep(100000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);
	
	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
	
	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 50, -50, 0x444444);
	
	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
	
	Sleep(100000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);
	
	//Sleep(300000);
	
	Sleep(100000);
	BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
	ReleaseDC(hwnd, hdc);

	Sleep(100000);
	BitBlt(hdc, 0, 0, rekt.right - rekt.left, rekt.bottom - rekt.top, hdc, 0, 0, NOTSRCCOPY);
	ReleaseDC(hwnd, hdc);
	BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
	ReleaseDC(hwnd, hdc);

	Sleep(300000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);

	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);

	Sleep(100000);
	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);

	Sleep(100000);
	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 50, -50, 0x444444);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x999999);

	Sleep(300000);
	GetWindowRect(hwnd, &rekt);
	BitBlt(hdc, 0, 0, rekt.right - rekt.left, rekt.bottom - rekt.top, hdc, 0, 0, NOTSRCCOPY);
	ReleaseDC(hwnd, hdc);

	Sleep(100000);
	BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
	ReleaseDC(hwnd, hdc);

	Sleep(100000);
	BitBlt(hdc, 0, 0, rekt.right - rekt.left, rekt.bottom - rekt.top, hdc, 0, 0, NOTSRCCOPY);
	ReleaseDC(hwnd, hdc);
	BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
	ReleaseDC(hwnd, hdc);

	Sleep(300000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);

	Sleep(100000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);

	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x999999);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x999999);

	Sleep(300000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x999999);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x999999);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 50, -50, 0x444444);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x999999);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);

	Sleep(100000);
	BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x999999);

	Sleep(300000);
	BitBlt(desktop, -1, 0, w, h, desktop, 50, -50, 0x444444);

	Sleep(100000);
	//BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
	BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
	BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);

	Sleep(300000);
	while(0 == 0) 
	{
		BitBlt(desktop, 32, 41, xs, ys, GetDC(NULL), 7, 7, 0x999999);
		BitBlt(desktop, 14, 62, ys, xs, GetDC(NULL), 4, 4, 0x222222);
		BitBlt(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x444444);
		BitBlt(desktop, -1, 0, w, h, desktop, 0, 0, 0x8b0000);
		BitBlt(hdc, x1, y1, width, height, hdc, x2, y2, SRCCOPY);
		StretchBlt(GetDC(NULL), 2, 2, a - 10, b - -10, GetDC(NULL), 0, 0, a, b, SRCCOPY);
		DrawIcon(hdc, curx, cury, LoadIcon(NULL, IDI_ERROR));
		DrawIcon(hdc, rand() % w, rand() % h, LoadIcon(NULL, IDI_WARNING));
		DrawIcon(hdc, rand() % w, rand() % h, LoadIcon(NULL, IDI_INFORMATION));
		DrawIcon(hdc, rand() % w, rand() % h, LoadIcon(NULL, IDI_QUESTION));
		DrawIcon(hdc, rand() % w, rand() % h, LoadIcon(NULL, IDI_ERROR));
		DrawIcon(hdc, rand() % w, rand() % h, LoadIcon(NULL, IDI_APPLICATION));
	}
}

int main() 
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	time_t t;
	srand((unsigned)time(&t));
	while(1) 
	{
		visual();
	}
}
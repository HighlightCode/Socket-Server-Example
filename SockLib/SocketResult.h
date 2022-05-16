#pragma once

#define WIN32_LEAN_AND_MEAN
#include <WinSock2.h>

namespace SockLib
{
	enum Result
	{
		Sock_Success,
		Sock_NotImplemented
	};
}
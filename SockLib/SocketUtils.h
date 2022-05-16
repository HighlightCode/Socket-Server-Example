#pragma once

#define WIN32_LEAN_AND_MEAN

/*--------------------
*	SOCKET UTILS
--------------------*/
namespace SockLib {
	class SocketUtils
	{
	public:
		static void Init();
		static void Shutdown();
	};
}


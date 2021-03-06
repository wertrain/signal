/**
 * @file SCI.cpp
 * @brief ライブラリ共通
 */
#include <Precompiled.h>

#include <winsock2.h>
#include <SCI/SCI.h>

namespace sci
{

static WSADATA sWsaData;

bool SCIInitialize()
{
    if (int error = WSAStartup(MAKEWORD(2, 0), &sWsaData))
    {
        return false;
    }
    return true;
}

void SCIFinalize()
{
    WSACleanup();
}

}

////////////////////////////////////////////////////////////////////////////////
//  
//  FileName    :   UdpSocket.cpp
//  Version     :   1.0
//  Creater     :   Linsuyi
//  Date        :   2002-01-16  20:13:26
//  Comment     :   Tcp/ip udp socket source file
//  
////////////////////////////////////////////////////////////////////////////////

#include "Stdafx.h"
#include "UdpSocket.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CUdpSocket::CUdpSocket()
{
    m_nSckType = SOCK_DGRAM;
    m_nSckProto = IPPROTO_UDP;
}

CUdpSocket::~CUdpSocket()
{
}

int CUdpSocket::Create()
{
    return CDgmSocket::Create();
}
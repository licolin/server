#ifndef _FRAME_SERVE_H_
#define _FRAME_SERVE_H_

//#include "netbase.h"
#include "IServer.h"
#include "ErrRecord.h"

class CServer : public IServer, public CErrRecord<CServer>
{
public:
	CServer(event_base* a_pEventBase, SOCKET a_Socket = 0);
	CServer(event_base *a_pEventBase, const std::string& a_strName, const std::string& a_strIP, int a_nPort, bool a_bAutoConnect = false);
	~CServer();

	virtual void OnReadCB(void* a_pArg);	//unfinish,a_pArg���ܻ���\0������ת��string���ضϡ�
	virtual void OnWriteCB(void* a_pArg);
	virtual void OnErrorCB(void* a_pArg);

	virtual void OnPackCB(const char *a_pSource, int& a_nLength, char **a_pDest);
	virtual bool OnUnPackCB(const char *a_pSource, int a_nLength, char **a_pDest);

	/*
	* �ɹ���������������֮��Ļص�
	*/
	virtual bool OnConnect(CSession* a_pSession);

private:
	//DEFINE_TYPE_BASE(CSession*, m_pSession, nullptr, GetSession, SetSession);
	DEFINE_TYPE_BASE(int, m_nPort, 1024, GetPort, SetPort);
	DEFINE_TYPE_REFER(std::string, m_strServerName, "", GetServerName, SetServerName);
	DEFINE_TYPE_REFER(std::string, m_strServerIP, "", GetServerIP, SetServerIP);
};

#endif
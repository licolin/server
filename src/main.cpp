//#include <stdio.h>
//#include "base.h"
//#include "event2/event.h"  // libevent core
//#include "minidump.h"
//
//int main(int argc, char* argv[])
//{
//	InitMinDump();
//	InitLog(argv);
//	InitNet();
//
//
//
//	CloseLog();
//	CloseNet();
//
//	return 0;
//}


////��ʱ��ʾ��
//#include <iostream>
//#include <event.h>
//#include <ctime>
//
//void callback(evutil_socket_t fd, short what, void *arg)
//{
//	printf("event ocurrence every 2 seconds.\n");
//	timeval *pTime = (timeval*)&arg;
//	printf("sec: %d. mil:%d\n", pTime->tv_sec, pTime->tv_usec);
//	printf("%s\n", (char*)arg + sizeof(timeval));
//	printf("\n");
//}
//
//int main()
//{
//	WSADATA wsa_data;
//	WSAStartup(MAKEWORD(2, 2), &wsa_data);
//
//	timeval two_sec = { 2, 0 };
//	event_base *base = event_base_new();
//
//	char *pCh = "this is a test message";
//	char* pVoid = new char[sizeof(timeval) + strlen(pCh) + 1];
//	memset(pVoid, 0, sizeof(timeval) + strlen(pCh) + 1);
//	memcpy(pVoid, (void*)&two_sec, sizeof(timeval));
//	memcpy(pVoid + sizeof(timeval), pCh, strlen(pCh) + 1);
//
//	//EV_PERSIST | EV_TIMEOUT ��ʱ�ظ�
//	//event_new()������event������Libevent����
//	event *timeout = event_new(base, -1, EV_PERSIST | EV_TIMEOUT, callback, pVoid);
//	event_add(timeout, &two_sec);
//	event_base_dispatch(base);
//
//	WSACleanup();
//	event_base_free(base);
//
//	getchar();
//	return 0;
//}

//
////�ڶ�����ʱ��ʾ����ʹ�ö����ʱ��
//#include <ctime>
//#include <iostream>
//#include <event.h>
//#include <event_struct.h>
//
//#define TIMECOUNT 10
//#define BUFLEN 100
//
//void callback(evutil_socket_t fd, short what, void *arg)
//{
//	printf("%s\n", (char*)arg);
//}
//
//int main(int argc, char **argv)
//{
//	event_base *pBase = event_base_new();
//	event evTimeout[TIMECOUNT];
//	timeval tTime;
//	evutil_timerclear(&tTime);
//	for (int i = 0; i < TIMECOUNT; ++i)
//	{
//		char bufTmp[BUFLEN] = { 0 };
//		char *buf = new char[BUFLEN];
//		memset(buf, 0, BUFLEN);
//		sprintf(bufTmp, "taskID %d", i + 1);
//		memcpy(buf, bufTmp, BUFLEN);
//		//event_assign()��Ӧ��event�������û�����
//		event_assign(evTimeout + i, pBase, -1, 0, callback, (void*)buf);
//		tTime.tv_sec = i;
//		event_add(evTimeout + i, &tTime);
//	}
//	event_base_dispatch(pBase);
//
//	printf("dispatch OVER\n");
//	event_base_free(pBase);
//
//	getchar();
//	return 0;
//}



////��������ʱ��ʾ������ʹ�÷���������չ��������ڵڶ���д����event_baseʹ��ģʽ��ʽ
//#include <iostream>
//#include "event.h"
//#include "event2/event_compat.h"
//#include "event2/event_struct.h"
//
//using namespace std;
//
//void CallBack(int sock, short event, void* arg)
//{
//	cout << "OVER" << endl;
//	struct timeval tv;
//	tv.tv_sec = 1;
//	tv.tv_usec = 0;
//	//�������Ӷ�ʱ��ʱ�䣬ԭ����ʱ��������Ĭ���Զ�ɾ��
//	event_add((struct event*)arg, &tv);
//}
//
//int main()
//{
//	event_init();
//	struct event evTime;
//	evtimer_set(&evTime, CallBack, &evTime);
//
//	struct timeval tv;
//	tv.tv_sec = 1;
//	tv.tv_usec = 0;
//	event_add(&evTime, &tv);
//	event_dispatch();
//
//	return 0;
//}







//����ʾ��
#include <assert.h>
#include <ctime>
#include <iostream>
#include <fcntl.h>
#include <event.h>
#include <event_struct.h>
#include "event2/event_compat.h"

#pragma comment(lib, "ws2_32.lib")

using namespace std;

unsigned int sockSrv;
struct event_base *g_pEventBase;

void onRead(int a_nClientFD, short a_nEvent, void* a_pArg)
{
	int nLen;
	char buf[1500];
	nLen = recv(a_nClientFD, buf, 1500, 0);
	if (nLen <= 0)
	{
		cout << "Client Close" << endl;
		event* pEvRead = (event*)a_pArg;
		event_del(pEvRead);
		delete pEvRead;
		closesocket(a_nClientFD);
		return;
	}

	buf[nLen] = 0;
	cout << "Client Info: " << buf << endl;
}

void onAccept(int a_nClientFD, short a_nEvent, void *a_pArg)
{
	SOCKADDR_IN ClientAddr;
	int len = sizeof(SOCKADDR);
	SOCKET sockConn = accept(a_nClientFD, (SOCKADDR*)&ClientAddr, &len);
	cout << "New Connect" << endl;

	//����ע��Ϊ���¼�(EV_PERSIST)Ϊ�¼�������Ĭ��ɾ��
	event *pEvRead = new event;
	event_set(pEvRead, sockConn, EV_READ | EV_PERSIST, onRead, pEvRead);
	event_base_set(g_pEventBase, pEvRead);
	event_add(pEvRead, nullptr);
}

int main()
{
	WSADATA wsa_data;
	WSAStartup(MAKEWORD(2, 2), &wsa_data);

	sockSrv = socket(AF_INET, SOCK_STREAM, 0);

	SOCKADDR_IN addrSrv;
	memset(&addrSrv, 0, sizeof(SOCKADDR_IN));
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	addrSrv.sin_port = htons(8888);

	if (bind(sockSrv, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR)) == -1)
		assert(0);

	if (listen(sockSrv, 10) == -1)
		assert(0);
	
	g_pEventBase = event_base_new();


	event *evListen = event_new(g_pEventBase, sockSrv, EV_READ | EV_PERSIST, onAccept, nullptr);
	//����һ�к�����������ͬ�������ͬ��ʽ��������ķ������һ����������дevent_new�ķ���ֵ������ķ������ԴﵽĿ�ġ�
	//struct event evListen;
	//event_set(&evListen, sockSrv, EV_READ | EV_PERSIST, onAccept, nullptr);
	//event_base_set(g_pEventBase, &evListen);

	if (event_add(evListen, nullptr) == -1)
		assert(0);

	event_base_dispatch(g_pEventBase);

	return 0;
}
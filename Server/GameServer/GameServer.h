#pragma once

#include "Resource.h"		// 主符号

//////////////////////////////////////////////////////////////////////////////////

//程序对象
class CGameServerApp : public CWinApp
{
	//函数定义
public:
	//构造函数 
	CGameServerApp();

	//重载函数
public:
	//启动函数
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

//////////////////////////////////////////////////////////////////////////////////

//程序对象
extern CGameServerApp theApp;
//////////////////////////////////////////////////////////////////////////////////

/*
	2017/11/22
	增加WebSocket连线机制

	2017/11/21
	增加全机器人配桌模式
	1.ANDROID_AUTO_PALY 预设 FALSE

*/
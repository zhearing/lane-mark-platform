// LaneMarkPlatform.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CLaneMarkPlatformApp:
// �йش����ʵ�֣������ LaneMarkPlatform.cpp
//

class CLaneMarkPlatformApp : public CWinApp
{
public:
	CLaneMarkPlatformApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CLaneMarkPlatformApp theApp;
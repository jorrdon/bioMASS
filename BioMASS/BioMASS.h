
// BioMASS.h : main header file for the BioMASS application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CBioMASSApp:
// See BioMASS.cpp for the implementation of this class
//

class CBioMASSApp : public CWinApp
{
public:
	CBioMASSApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBioMASSApp theApp;

// SingleLimiting.cpp : implementation file
//

#include "stdafx.h"
#include "BioMASS.h"
#include "SingleLimiting.h"


// SingleLimiting

IMPLEMENT_DYNCREATE(SingleLimiting, CFormView)

SingleLimiting::SingleLimiting()
	: CFormView(SingleLimiting::IDD)
{

}

SingleLimiting::~SingleLimiting()
{
}

void SingleLimiting::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(SingleLimiting, CFormView)
END_MESSAGE_MAP()


// SingleLimiting diagnostics

#ifdef _DEBUG
void SingleLimiting::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void SingleLimiting::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// SingleLimiting message handlers

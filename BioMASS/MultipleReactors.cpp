// MultipleReactors.cpp : implementation file
//

#include "stdafx.h"
#include "BioMASS.h"
#include "MultipleReactors.h"


// MultipleReactors

IMPLEMENT_DYNCREATE(MultipleReactors, CFormView)

MultipleReactors::MultipleReactors()
	: CFormView(MultipleReactors::IDD)
{

}

MultipleReactors::~MultipleReactors()
{
}

void MultipleReactors::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(MultipleReactors, CFormView)
END_MESSAGE_MAP()


// MultipleReactors diagnostics

#ifdef _DEBUG
void MultipleReactors::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void MultipleReactors::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// MultipleReactors message handlers

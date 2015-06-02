// MultipleReagents.cpp : implementation file
//

#include "stdafx.h"
#include "BioMASS.h"
#include "MultipleReagents.h"


// MultipleReagents

IMPLEMENT_DYNCREATE(MultipleReagents, CFormView)

MultipleReagents::MultipleReagents()
	: CFormView(MultipleReagents::IDD)
{

}

MultipleReagents::~MultipleReagents()
{
}

void MultipleReagents::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(MultipleReagents, CFormView)
END_MESSAGE_MAP()


// MultipleReagents diagnostics

#ifdef _DEBUG
void MultipleReagents::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void MultipleReagents::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// MultipleReagents message handlers

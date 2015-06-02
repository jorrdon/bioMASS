// InhibitionModel.cpp : implementation file
//

#include "stdafx.h"
#include "BioMASS.h"
#include "InhibitionModel.h"


// InhibitionModel

IMPLEMENT_DYNCREATE(InhibitionModel, CFormView)

InhibitionModel::InhibitionModel()
	: CFormView(InhibitionModel::IDD)
{

}

InhibitionModel::~InhibitionModel()
{
}

void InhibitionModel::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(InhibitionModel, CFormView)
END_MESSAGE_MAP()


// InhibitionModel diagnostics

#ifdef _DEBUG
void InhibitionModel::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void InhibitionModel::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// InhibitionModel message handlers

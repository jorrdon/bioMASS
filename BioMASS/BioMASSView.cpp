
// BioMASSView.cpp : implementation of the CBioMASSView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "BioMASS.h"
#endif

#include "BioMASSDoc.h"
#include "BioMASSView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBioMASSView

IMPLEMENT_DYNCREATE(CBioMASSView, CView)

BEGIN_MESSAGE_MAP(CBioMASSView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CBioMASSView construction/destruction

CBioMASSView::CBioMASSView()
{
	// TODO: add construction code here

}

CBioMASSView::~CBioMASSView()
{
}

BOOL CBioMASSView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CBioMASSView drawing

void CBioMASSView::OnDraw(CDC* pDC)
{
	CBioMASSDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString str;



	

	str.Format(_T("Welcome to Biological Modelling And Simulation Software.\n\n Please select mode to operate.."));
	_tprintf((LPCTSTR)str);

	CString s = (LPCTSTR)str;   // Returns a CString
	CRect rect;
	GetClientRect(&rect);

	pDC->SetTextAlign(TA_BASELINE | TA_CENTER);
	pDC->TextOut(rect.right / 2, rect.bottom / 4, s, s.GetLength());
	// TODO: add draw code for native data here
}


// CBioMASSView printing

BOOL CBioMASSView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBioMASSView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBioMASSView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CBioMASSView diagnostics

#ifdef _DEBUG
void CBioMASSView::AssertValid() const
{
	CView::AssertValid();
}

void CBioMASSView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBioMASSDoc* CBioMASSView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBioMASSDoc)));
	return (CBioMASSDoc*)m_pDocument;
}
#endif //_DEBUG


// CBioMASSView message handlers

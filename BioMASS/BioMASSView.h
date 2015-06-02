
// BioMASSView.h : interface of the CBioMASSView class
//

#pragma once


class CBioMASSView : public CView
{
protected: // create from serialization only
	CBioMASSView();
	DECLARE_DYNCREATE(CBioMASSView)

// Attributes
public:
	CBioMASSDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CBioMASSView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BioMASSView.cpp
inline CBioMASSDoc* CBioMASSView::GetDocument() const
   { return reinterpret_cast<CBioMASSDoc*>(m_pDocument); }
#endif


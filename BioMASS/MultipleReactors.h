#pragma once



// MultipleReactors form view

class MultipleReactors : public CFormView
{
	DECLARE_DYNCREATE(MultipleReactors)

protected:
	MultipleReactors();           // protected constructor used by dynamic creation
	virtual ~MultipleReactors();

public:
	enum { IDD = IDD_MULTIPLEREACTORS };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};



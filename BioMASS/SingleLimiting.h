#pragma once



// SingleLimiting form view

class SingleLimiting : public CFormView
{
	DECLARE_DYNCREATE(SingleLimiting)

protected:
	SingleLimiting();           // protected constructor used by dynamic creation
	virtual ~SingleLimiting();

public:
	enum { IDD = IDD_SINGLELIMITING };
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



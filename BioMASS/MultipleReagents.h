#pragma once



// MultipleReagents form view

class MultipleReagents : public CFormView
{
	DECLARE_DYNCREATE(MultipleReagents)

protected:
	MultipleReagents();           // protected constructor used by dynamic creation
	virtual ~MultipleReagents();

public:
	enum { IDD = IDD_MULTIPLEREAGENTS };
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



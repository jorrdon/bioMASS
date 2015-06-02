#pragma once
#include "afxcmn.h"


// table dialog

class table : public CDialogEx
{
	DECLARE_DYNAMIC(table)

public:
	table(CWnd* pParent = NULL);   // standard constructor
	virtual ~table();

// Dialog Data
	enum { IDD = IDD_TABLE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_List;
	virtual BOOL OnInitDialog();
};

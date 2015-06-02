// table.cpp : implementation file
//

#include "stdafx.h"
#include "BioMASS.h"
#include "table.h"
#include "afxdialogex.h"
#include "reaction.h"
#include "SimpleBatch.h"


// table dialog

IMPLEMENT_DYNAMIC(table, CDialogEx)

table::table(CWnd* pParent /*=NULL*/)
	: CDialogEx(table::IDD, pParent)
{

}

table::~table()
{
}

void table::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_List);
}


BEGIN_MESSAGE_MAP(table, CDialogEx)
END_MESSAGE_MAP()


// table message handlers
SimpleBatch o;
reaction obr;

BOOL table::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	int nItem;
	CString s;
	CString str;
	m_List.InsertColumn(0, _T("Substrate"), LVCFMT_CENTER, 80);
	m_List.InsertColumn(1, _T("Biomass"), LVCFMT_LEFT, 100);
	m_List.InsertColumn(2, _T("Product"), LVCFMT_LEFT, 80);
	m_List.InsertColumn(3, _T("Time"), LVCFMT_LEFT, 80);


	obr.S[0] = o.Substrate0();
	obr.S[1] = o.Substrate1();
	obr.S[2] = o.Substrate2();
	obr.S[3] = o.Substrate3();
	obr.S[4] = o.Substrate4();
	obr.S[5] = o.Substrate5();
	obr.S[6] = o.Substrate6();
	obr.S[7] = o.Substrate7();
	obr.S[8] = o.Substrate8();
	obr.S[9] = o.Substrate9();
	obr.X[0] = o.biomass0();
	obr.X[1] = o.biomass1();
	obr.X[2] = o.biomass2();
	obr.X[3] = o.biomass3();
	obr.X[4] = o.biomass4();
	obr.X[5] = o.biomass5();
	obr.X[6] = o.biomass6();
	obr.X[7] = o.biomass7();
	obr.X[8] = o.biomass8();
	obr.X[9] = o.biomass9();
	obr.P[0] = o.product0();
	obr.P[1] = o.product1();
	obr.P[2] = o.product2();
	obr.P[3] = o.product3();
	obr.P[4] = o.product4();
	obr.P[5] = o.product5();
	obr.P[6] = o.product6();
	obr.P[7] = o.product7();
	obr.P[8] = o.product8();
	obr.P[9] = o.product9();

	for (int i = 9; i >= 0; i--)
	{

		str.Format(_T("%.2f\n"), obr.S[i]);
		s = (LPCTSTR)str;

		nItem = m_List.InsertItem(0, s);

		str.Format(_T("%.2f\n"), obr.X[i]);
		s = (LPCTSTR)str;
		m_List.SetItemText(nItem, 1, s);

		str.Format(_T("%.2f\n"), obr.P[i]);
		s = (LPCTSTR)str;
		m_List.SetItemText(nItem, 2, s);
	}



	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

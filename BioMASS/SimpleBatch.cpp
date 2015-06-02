// SimpleBatch.cpp : implementation file
//

#include "stdafx.h"
#include "BioMASS.h"
#include "SimpleBatch.h"
#include "reaction.h"
#include "table.h"


// SimpleBatch

IMPLEMENT_DYNCREATE(SimpleBatch, CFormView)

SimpleBatch::SimpleBatch()
	: CFormView(SimpleBatch::IDD)
	, init(0)
	, u(0)
	, yxs(0)
	, yxp(0)
	, b(0)
	, kpng(0)
	, kpg(0)
{

}

SimpleBatch::~SimpleBatch()
{
}

void SimpleBatch::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, init);
	DDX_Text(pDX, IDC_EDIT2, u);
	DDX_Text(pDX, IDC_EDIT3, yxs);
	DDX_Text(pDX, IDC_EDIT4, yxp);
	DDX_Text(pDX, IDC_EDIT5, b);
	DDX_Text(pDX, IDC_EDIT6, kpng);
	DDX_Text(pDX, IDC_EDIT7, kpg);
}

BEGIN_MESSAGE_MAP(SimpleBatch, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &SimpleBatch::OnBnClickedButton1)
END_MESSAGE_MAP()


// SimpleBatch diagnostics

#ifdef _DEBUG
void SimpleBatch::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void SimpleBatch::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// SimpleBatch message handlers

reaction obj;
void SimpleBatch::OnBnClickedButton1()
{
	UpdateData();

	obj.init = init;
	obj.kpg = kpg;
	obj.b = b;
	obj.kpng = kpng;
	obj.yxp = yxp;
	obj.yxs = yxs;
	obj.u = u;

	UpdateData(false);
		GenerateResult();

	//	result oj;
	//oj.set();
	table aboutDlg;
	aboutDlg.DoModal();
}


void SimpleBatch::GenerateResult()
{
	float X[10];
	float S[10];
	float P[10];

	X[0] = obj.init;
	S[0] = obj.init;
	P[0] = 0;
	obj.X[0] = X[0];
	obj.S[0] = S[0];
	obj.P[0] = P[0];
	for (int i = 0; i < 9; i++)
	{
		X[i + 1] = X[i] + ((obj.u - obj.b)*X[i] * .5);
		P[i + 1] = P[i] + ((obj.kpng*X[i]) + (obj.kpg*obj.u*X[i])) * .5;
		S[i + 1] = S[i] - ((obj.u*X[i] / obj.yxs) + (obj.kpng*X[i] * obj.yxp)) * .5;
		obj.X[i+1] = X[i+1];
		obj.S[i + 1] = S[i + 1];
		obj.P[i + 1] = P[i + 1];
	}


}
float SimpleBatch::Substrate0(){
	return obj.S[0];
}
float SimpleBatch::Substrate1(){
	return obj.S[1];
}
float SimpleBatch::Substrate2(){
	return obj.S[2];
}
float SimpleBatch::Substrate3(){
	return obj.S[3];
}
float SimpleBatch::Substrate4(){
	return obj.S[4];
}
float SimpleBatch::Substrate5(){
	return obj.S[5];
}
float SimpleBatch::Substrate6(){
	return obj.S[6];
}
float SimpleBatch::Substrate7(){
	return obj.S[7];
}
float SimpleBatch::Substrate8(){
	return obj.S[8];
}
float SimpleBatch::Substrate9(){
	return obj.S[9];
}
float SimpleBatch::biomass0(){
	return obj.X[0];
}
float SimpleBatch::biomass1(){
	return obj.X[1];
}
float SimpleBatch::biomass2(){
	return obj.X[2];
}
float SimpleBatch::biomass3(){
	return obj.X[3];
}
float SimpleBatch::biomass4(){
	return obj.X[4];
}
float SimpleBatch::biomass5(){
	return obj.X[5];
}
float SimpleBatch::biomass6(){
	return obj.X[6];
}
float SimpleBatch::biomass7(){
	return obj.X[7];
}
float SimpleBatch::biomass8(){
	return obj.X[8];
}
float SimpleBatch::biomass9(){
	return obj.X[9];
}

float SimpleBatch::product0(){
	return obj.P[0];
}
float SimpleBatch::product1(){
	return obj.P[1];
}
float SimpleBatch::product2(){
	return obj.P[2];
}
float SimpleBatch::product3(){
	return obj.P[3];
}
float SimpleBatch::product4(){
	return obj.P[4];
}
float SimpleBatch::product5(){
	return obj.P[5];
}
float SimpleBatch::product6(){
	return obj.P[6];
}
float SimpleBatch::product7(){
	return obj.P[7];
}
float SimpleBatch::product8(){
	return obj.P[8];
}
float SimpleBatch::product9(){
	return obj.P[9];
}


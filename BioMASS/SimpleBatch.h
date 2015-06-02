#pragma once



// SimpleBatch form view

class SimpleBatch : public CFormView
{
	DECLARE_DYNCREATE(SimpleBatch)

protected:
	

public:
	enum { IDD = IDD_SIMPLEBATCH };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	SimpleBatch();           
	   virtual ~SimpleBatch();
	float init;
	float u;
	float yxs;
	float yxp;
	float b;
	float kpng;
	float kpg;
	afx_msg void OnBnClickedButton1();
//	reaction obj;
	void GenerateResult();
	float Substrate0();
	float Substrate1();
	float Substrate2();
	float Substrate3();
	float Substrate4();
	float Substrate5();
	float Substrate6();
	float Substrate7();
	float Substrate8();
	float Substrate9();
	float biomass0();
	float biomass1();
	float biomass2();
	float biomass3();
	float biomass4();
	float biomass5();
	float biomass6();
	float biomass7();
	float biomass8();
	float biomass9();
	float product0();
	float product1();
	float product2();
	float product3();
	float product4();
	float product5();
	float product6();
	float product7();
	float product8();
	float product9();
};



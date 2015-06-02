#pragma once


// reaction

class reaction : public CWnd
{
	DECLARE_DYNAMIC(reaction)

public:
	reaction();
	virtual ~reaction();

protected:
	DECLARE_MESSAGE_MAP()
public:
	float init;
	float u;
	float b;
	float kpng;
	float kpg;
	float yxs;
	float yxp;
	float X[10];
	float S[10];
	float P[10];
};



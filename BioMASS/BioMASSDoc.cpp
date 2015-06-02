
// BioMASSDoc.cpp : implementation of the CBioMASSDoc class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "BioMASS.h"
#endif

#include "MainFrm.h"
#include "SimpleBatch.h"
#include "SingleLimiting.h"
#include "MultipleReactors.h"
#include "MultipleReagents.h"
#include "InhibitionModel.h"
#include "BioMASSDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CBioMASSDoc

IMPLEMENT_DYNCREATE(CBioMASSDoc, CDocument)

BEGIN_MESSAGE_MAP(CBioMASSDoc, CDocument)
	ON_COMMAND(ID_MODE_SIMPLEBATCHREACION, &CBioMASSDoc::OnModeSimplebatchreacion)
	ON_COMMAND(ID_MODE_SINGLELIMITINGREAGENT, &CBioMASSDoc::OnModeSinglelimitingreagent)
	ON_COMMAND(ID_MODE_MULTIPLELIMITINGREAGENTS, &CBioMASSDoc::OnModeMultiplelimitingreagents)
	ON_COMMAND(ID_MODE_MULTIPLEREACTORS, &CBioMASSDoc::OnModeMultiplereactors)
	ON_COMMAND(ID_MODE_INHIBITIONMODEL, &CBioMASSDoc::OnModeInhibitionmodel)
END_MESSAGE_MAP()


// CBioMASSDoc construction/destruction

CBioMASSDoc::CBioMASSDoc()
{
	// TODO: add one-time construction code here

}

CBioMASSDoc::~CBioMASSDoc()
{
}

BOOL CBioMASSDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CBioMASSDoc serialization

void CBioMASSDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void CBioMASSDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void CBioMASSDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data. 
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CBioMASSDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CBioMASSDoc diagnostics

#ifdef _DEBUG
void CBioMASSDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBioMASSDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CBioMASSDoc commands


void CBioMASSDoc::OnModeSimplebatchreacion()
{
	((CMainFrame*)AfxGetMainWnd())->SwitchView(RUNTIME_CLASS(SimpleBatch));
	
}


void CBioMASSDoc::OnModeSinglelimitingreagent()
{
	((CMainFrame*)AfxGetMainWnd())->SwitchView(RUNTIME_CLASS(SingleLimiting));
}


void CBioMASSDoc::OnModeMultiplelimitingreagents()
{
	((CMainFrame*)AfxGetMainWnd())->SwitchView(RUNTIME_CLASS(MultipleReagents));
}


void CBioMASSDoc::OnModeMultiplereactors()
{
	((CMainFrame*)AfxGetMainWnd())->SwitchView(RUNTIME_CLASS(MultipleReactors));

}


void CBioMASSDoc::OnModeInhibitionmodel()
{
	((CMainFrame*)AfxGetMainWnd())->SwitchView(RUNTIME_CLASS(InhibitionModel));

}

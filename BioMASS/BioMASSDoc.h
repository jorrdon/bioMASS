
// BioMASSDoc.h : interface of the CBioMASSDoc class
//


#pragma once


class CBioMASSDoc : public CDocument
{
protected: // create from serialization only
	CBioMASSDoc();
	DECLARE_DYNCREATE(CBioMASSDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CBioMASSDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	afx_msg void OnModeSimplebatchreacion();
	afx_msg void OnModeSinglelimitingreagent();
	afx_msg void OnModeMultiplelimitingreagents();
	afx_msg void OnModeMultiplereactors();
	afx_msg void OnModeInhibitionmodel();
};

#if !defined(AFX_MENU1_H__E91BF5D8_E500_44B6_89EC_B4BCF22C8C8A__INCLUDED_)
#define AFX_MENU1_H__E91BF5D8_E500_44B6_89EC_B4BCF22C8C8A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// menu1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// menu1 view

class menu1 : public CTreeView
{
protected:
	menu1();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(menu1)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(menu1)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~menu1();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(menu1)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENU1_H__E91BF5D8_E500_44B6_89EC_B4BCF22C8C8A__INCLUDED_)

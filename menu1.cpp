// menu1.cpp : implementation file
//

#include "stdafx.h"
#include "Licpolicy.h"
#include "menu1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// menu1

IMPLEMENT_DYNCREATE(menu1, CTreeView)

menu1::menu1()
{
}

menu1::~menu1()
{
}


BEGIN_MESSAGE_MAP(menu1, CTreeView)
	//{{AFX_MSG_MAP(menu1)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// menu1 drawing

void menu1::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// menu1 diagnostics

#ifdef _DEBUG
void menu1::AssertValid() const
{
	CTreeView::AssertValid();
}

void menu1::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// menu1 message handlers

// MAINMDI.cpp : implementation file
//

#include "stdafx.h"
#include "Licpolicy.h"
#include "MAINMDI.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// MAINMDI dialog


MAINMDI::MAINMDI(CWnd* pParent /*=NULL*/)
	: CDialog(MAINMDI::IDD, pParent)
{
menu1 m;
m.GetMenu();
	//{{AFX_DATA_INIT(MAINMDI)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void MAINMDI::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(MAINMDI)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(MAINMDI, CDialog)
	//{{AFX_MSG_MAP(MAINMDI)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// MAINMDI message handlers

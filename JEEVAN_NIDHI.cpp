// JEEVAN_NIDHI.cpp : implementation file
//

#include "stdafx.h"
#include "Licpolicy.h"
#include "JEEVAN_NIDHI.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// JEEVAN_NIDHI dialog


JEEVAN_NIDHI::JEEVAN_NIDHI(CWnd* pParent /*=NULL*/)
	: CDialog(JEEVAN_NIDHI::IDD, pParent)
{
	//{{AFX_DATA_INIT(JEEVAN_NIDHI)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void JEEVAN_NIDHI::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(JEEVAN_NIDHI)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(JEEVAN_NIDHI, CDialog)
	//{{AFX_MSG_MAP(JEEVAN_NIDHI)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// JEEVAN_NIDHI message handlers

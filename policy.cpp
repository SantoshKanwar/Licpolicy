// policy.cpp : implementation file
//

#include "stdafx.h"
#include "Licpolicy.h"
#include "policy.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// policy dialog


policy::policy(CWnd* pParent /*=NULL*/)
	: CDialog(policy::IDD, pParent)
{
	//{{AFX_DATA_INIT(policy)
	m_id = _T("");
	m_name = _T("");
	m_type = _T("");
	m_sid = _T("");
	m_sname = _T("");
	//}}AFX_DATA_INIT
}


void policy::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(policy)
	DDX_Text(pDX, IDC_EDIT1, m_id);
	DDX_Text(pDX, IDC_EDIT2, m_name);
	DDX_Text(pDX, IDC_EDIT3, m_type);
	DDX_Text(pDX, IDC_EDIT4, m_sid);
	DDX_Text(pDX, IDC_EDIT5, m_sname);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(policy, CDialog)
	//{{AFX_MSG_MAP(policy)
	ON_BN_CLICKED(IDC_BUTTON1, Oninsert)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// policy message handlers

void policy::Oninsert() 
{
UpdateData(true);



UpdateData(false);	
}

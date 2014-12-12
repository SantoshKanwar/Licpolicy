#if !defined(AFX_POLICY_H__D17912FF_352C_4822_9BD7_6954CD8D759D__INCLUDED_)
#define AFX_POLICY_H__D17912FF_352C_4822_9BD7_6954CD8D759D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// policy.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// policy dialog

class policy : public CDialog
{
// Construction
public:
	policy(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(policy)
	enum { IDD = IDD_DIALOG7 };
	CString	m_id;
	CString	m_name;
	CString	m_type;
	CString	m_sid;
	CString	m_sname;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(policy)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(policy)
	afx_msg void Oninsert();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_POLICY_H__D17912FF_352C_4822_9BD7_6954CD8D759D__INCLUDED_)

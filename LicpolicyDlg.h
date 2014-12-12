// LicpolicyDlg.h : header file
//

#if !defined(AFX_LICPOLICYDLG_H__2FB9CF96_3339_46DB_9E32_9960F2B322F9__INCLUDED_)
#define AFX_LICPOLICYDLG_H__2FB9CF96_3339_46DB_9E32_9960F2B322F9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CLicpolicyDlg dialog

class CLicpolicyDlg : public CDialog
{
// Construction
public:
	CLicpolicyDlg(CWnd* pParent = NULL);	// standard constructor
	CDatabase db;

// Dialog Data
	//{{AFX_DATA(CLicpolicyDlg)
	enum { IDD = IDD_LICPOLICY_DIALOG };
	CString	m_1;
	CString	m_2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLicpolicyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CLicpolicyDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void Onlogin();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LICPOLICYDLG_H__2FB9CF96_3339_46DB_9E32_9960F2B322F9__INCLUDED_)

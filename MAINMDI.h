#if !defined(AFX_MAINMDI_H__37E7F8E8_7BCF_473E_BDA5_3FB406791CC1__INCLUDED_)
#define AFX_MAINMDI_H__37E7F8E8_7BCF_473E_BDA5_3FB406791CC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MAINMDI.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// MAINMDI dialog

class MAINMDI : public CDialog
{
// Construction
public:
	MAINMDI(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(MAINMDI)
	enum { IDD = IDD_LICPOLICIES_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MAINMDI)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(MAINMDI)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINMDI_H__37E7F8E8_7BCF_473E_BDA5_3FB406791CC1__INCLUDED_)

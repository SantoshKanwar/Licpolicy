// Licpolicy.h : main header file for the LICPOLICY application
//

#if !defined(AFX_LICPOLICY_H__7498A4EB_0AD3_4E41_812B_52A7565A4026__INCLUDED_)
#define AFX_LICPOLICY_H__7498A4EB_0AD3_4E41_812B_52A7565A4026__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CLicpolicyApp:
// See Licpolicy.cpp for the implementation of this class
//

class CLicpolicyApp : public CWinApp
{
public:
	CLicpolicyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLicpolicyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CLicpolicyApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LICPOLICY_H__7498A4EB_0AD3_4E41_812B_52A7565A4026__INCLUDED_)

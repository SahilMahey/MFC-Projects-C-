#pragma once
#include "afxdialogex.h"


// Dimension dialog

class Dimension : public CDialog
{
	DECLARE_DYNAMIC(Dimension)

public:
	Dimension(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Dimension();
	

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString input;
};

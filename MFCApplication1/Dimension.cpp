// Dimension.cpp : implementation file
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "Dimension.h"


// Dimension dialog

IMPLEMENT_DYNAMIC(Dimension, CDialog)

Dimension::Dimension(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
	, input(_T(""))
{

}

Dimension::~Dimension()
{
}

void Dimension::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, input);
}


BEGIN_MESSAGE_MAP(Dimension, CDialog)
END_MESSAGE_MAP()


// Dimension message handlers

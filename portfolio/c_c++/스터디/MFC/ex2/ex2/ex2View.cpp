
// ex2View.cpp : Cex2View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "ex2.h"
#endif

#include "ex2Doc.h"
#include "ex2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cex2View

IMPLEMENT_DYNCREATE(Cex2View, CView)

BEGIN_MESSAGE_MAP(Cex2View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cex2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cex2View ����/�Ҹ�

Cex2View::Cex2View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

Cex2View::~Cex2View()
{
}

BOOL Cex2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// Cex2View �׸���

void Cex2View::OnDraw(CDC* /*pDC*/)
{
	Cex2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// Cex2View �μ�


void Cex2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cex2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void Cex2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void Cex2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void Cex2View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cex2View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cex2View ����

#ifdef _DEBUG
void Cex2View::AssertValid() const
{
	CView::AssertValid();
}

void Cex2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cex2Doc* Cex2View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cex2Doc)));
	return (Cex2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cex2View �޽��� ó����


void Cex2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CString text;
	text.Format(_T(" x = %d , y = %d "), point.x , point.y);
		CClientDC dc(this);
	dc.TextOutW(20,20, text);
	dc.MoveTo( point.x-5 , point.y-5);
	dc.LineTo( point.x+5 , point.y+5 );
	dc.MoveTo( point.x-5 , point.y+5);
	dc.LineTo( point.x+5 , point.y-5 );
	CView::OnLButtonDown(nFlags, point);
}


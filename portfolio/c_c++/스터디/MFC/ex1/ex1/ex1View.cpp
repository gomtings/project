
// ex1View.cpp : Cex1View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "ex1.h"
#endif

#include "ex1Doc.h"
#include "ex1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cex1View

IMPLEMENT_DYNCREATE(Cex1View, CView)

BEGIN_MESSAGE_MAP(Cex1View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cex1View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// Cex1View ����/�Ҹ�

Cex1View::Cex1View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

Cex1View::~Cex1View()
{
}

BOOL Cex1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// Cex1View �׸���

void Cex1View::OnDraw(CDC* pDC)
{
	Cex1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
	CString text;
		int a=150;
		text="���ѹα�";
	pDC->TextOutW(30,30,_T("�츮����"));
	pDC->TextOutW(30,50,text);
	text.Format(_T("%d"),a );
	pDC->TextOutW(30,70,text);
}


// Cex1View �μ�


void Cex1View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cex1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void Cex1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void Cex1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void Cex1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cex1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cex1View ����

#ifdef _DEBUG
void Cex1View::AssertValid() const
{
	CView::AssertValid();
}

void Cex1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cex1Doc* Cex1View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cex1Doc)));
	return (Cex1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cex1View �޽��� ó����

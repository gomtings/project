
// ex3View.cpp : Cex3View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "ex3.h"
#endif

#include "ex3Doc.h"
#include "ex3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cex3View

IMPLEMENT_DYNCREATE(Cex3View, CView)

BEGIN_MESSAGE_MAP(Cex3View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cex3View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cex3View ����/�Ҹ�

Cex3View::Cex3View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	TEXT.Empty();
}

Cex3View::~Cex3View()
{
}

BOOL Cex3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// Cex3View �׸���

void Cex3View::OnDraw(CDC* /*pDC*/)
{
	Cex3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// Cex3View �μ�


void Cex3View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cex3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void Cex3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void Cex3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void Cex3View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cex3View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cex3View ����

#ifdef _DEBUG
void Cex3View::AssertValid() const
{
	CView::AssertValid();
}

void Cex3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cex3Doc* Cex3View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cex3Doc)));
	return (Cex3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cex3View �޽��� ó����

/*void Cex3View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlage)
{
	//TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.,
	CString text;
	text.Format(_T("%c"), nChar);
	TEXT = TEXT+text; //TEXT �� ���ʰ��� ������ �Ѵ�. ����.�Ҹ�
	CClientDC dc(this);
	text.Format(_T("%d"), VAL);//�Է� ���� ���� ���ڿ��� 
	dc.TextOutW(20,20,TEXT);  //�Է� ���ڿ�
	dc.TextOutW(20,40,text);   // ���ڸ� ���ڷ� �ٲ� ��
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
*/

void Cex3View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CString text;
	text.Format(_T("%c"), nChar);
	TEXT = TEXT+text; //TEXT �� ���ʰ��� ������ �Ѵ�. ����.�Ҹ�
	VAL=_tstoi(TEXT);
	CClientDC dc(this);
	text.Format(_T("%d"), VAL);//�Է� ���� ���� ���ڿ��� 
	dc.TextOutW(20,20,TEXT);  //�Է� ���ڿ�
	dc.TextOutW(20,40,text);   // ���ڸ� ���ڷ� �ٲ� ��
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

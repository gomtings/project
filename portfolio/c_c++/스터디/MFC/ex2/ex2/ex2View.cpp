
// ex2View.cpp : Cex2View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cex2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cex2View 생성/소멸

Cex2View::Cex2View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

Cex2View::~Cex2View()
{
}

BOOL Cex2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// Cex2View 그리기

void Cex2View::OnDraw(CDC* /*pDC*/)
{
	Cex2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// Cex2View 인쇄


void Cex2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cex2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void Cex2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void Cex2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
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


// Cex2View 진단

#ifdef _DEBUG
void Cex2View::AssertValid() const
{
	CView::AssertValid();
}

void Cex2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cex2Doc* Cex2View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cex2Doc)));
	return (Cex2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cex2View 메시지 처리기


void Cex2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
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



// ex3View.cpp : Cex3View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cex3View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cex3View 생성/소멸

Cex3View::Cex3View()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	TEXT.Empty();
}

Cex3View::~Cex3View()
{
}

BOOL Cex3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// Cex3View 그리기

void Cex3View::OnDraw(CDC* /*pDC*/)
{
	Cex3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// Cex3View 인쇄


void Cex3View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cex3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void Cex3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void Cex3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
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


// Cex3View 진단

#ifdef _DEBUG
void Cex3View::AssertValid() const
{
	CView::AssertValid();
}

void Cex3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cex3Doc* Cex3View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cex3Doc)));
	return (Cex3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cex3View 메시지 처리기

/*void Cex3View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlage)
{
	//TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.,
	CString text;
	text.Format(_T("%c"), nChar);
	TEXT = TEXT+text; //TEXT 의 최초값을 지워야 한다. 생성.소멸
	CClientDC dc(this);
	text.Format(_T("%d"), VAL);//입력 숫자 값을 문자열로 
	dc.TextOutW(20,20,TEXT);  //입력 문자열
	dc.TextOutW(20,40,text);   // 숫자를 무자로 바꾼 값
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
*/

void Cex3View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CString text;
	text.Format(_T("%c"), nChar);
	TEXT = TEXT+text; //TEXT 의 최초값을 지워야 한다. 생성.소멸
	VAL=_tstoi(TEXT);
	CClientDC dc(this);
	text.Format(_T("%d"), VAL);//입력 숫자 값을 문자열로 
	dc.TextOutW(20,20,TEXT);  //입력 문자열
	dc.TextOutW(20,40,text);   // 숫자를 무자로 바꾼 값
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

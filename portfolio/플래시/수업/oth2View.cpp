
// oth2View.cpp : Coth2View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "oth2.h"
#endif

#include "oth2Doc.h"
#include "oth2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Coth2View

IMPLEMENT_DYNCREATE(Coth2View, CView)

BEGIN_MESSAGE_MAP(Coth2View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Coth2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Coth2View 생성/소멸

Coth2View::Coth2View()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	order =1;
	for (int i=0;i<15;i++)
		for (int j=0;j<15;j++) BLOCK[i][j]=2;
	BLOCK[7][7]=0, BLOCK[8][8]=0;
	BLOCK[8][7]=1, BLOCK[7][8]=1;
}

Coth2View::~Coth2View()
{
}

BOOL Coth2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// Coth2View 그리기

void Coth2View::OnDraw(CDC* /*pDC*/)
{
	Coth2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)		return;
	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	CPoint pp;
	pp.x=7, pp.y=7;
	blkdraw(pp,0);
	pp.x=8, pp.y=8;
	blkdraw(pp,0);
	pp.x=8,pp.y=7;
	blkdraw(pp,1);
	pp.x=7,pp.y=8;
	blkdraw(pp,1);
}


// Coth2View 인쇄


void Coth2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Coth2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void Coth2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void Coth2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void Coth2View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Coth2View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Coth2View 진단

#ifdef _DEBUG
void Coth2View::AssertValid() const
{
	CView::AssertValid();
}

void Coth2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Coth2Doc* Coth2View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Coth2Doc)));
	return (Coth2Doc*)m_pDocument;
}
#endif //_DEBUG
// 위치 pos를 시작점으로 하는 색 q(0=검정, 
// 1= 회색, 2=흰색)로 채워진 사각형 그리기 함수 
void Coth2View :: blkdraw(CPoint pos, int q)
{// 함수의 시작
	RECT rect;
	CClientDC dc(this);
	CBrush br, *old;
	rect.left = pos.x*SIZE+1;
	rect.top = pos.y*SIZE+1;
	rect.right = (pos.x+1)*SIZE-1;
	rect.bottom = (pos.y+1)*SIZE-1;
	int col = q*127;
	br.CreateSolidBrush(RGB(col,col,col));
	old=(CBrush *)dc.SelectObject(&br);
	dc.FillRect(&rect,&br);
	dc.SelectObject(old);
} // 함수의 끝
// Coth2View 메시지 처리기


void Coth2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	if(point.x <15*SIZE && point.y <15*SIZE)
	{
		CPoint pos;
		pos.x = point.x/30, pos.y = point.y/30;
		if (order==1) // 첫번째 클릭
		{
			bool  nor=0;
			clk1=pos;
			
			if(BLOCK[clk1.x][clk1.y]==2)
			{
				CPoint tt=find(pos,nor);
				if(tt.x!=0 || tt.y !=0)
				{
					pos=pos+tt;
					if(find2(pos,tt,order)==true)
					{
						BLOCK[clk1.x][clk1.y]=order;
						blkdraw(clk1,order); // 회색으로 칠함
						order=0;
					}
				}
			}
		}
		else // 두번째 클릭
		{
			bool  nor=1;
			clk2=pos;
			if(BLOCK[clk2.x][clk2.y]==2) 
			{
				CPoint tt=find(pos,nor);
				if(tt.x!=0 || tt.y !=0 )
				{
					pos=pos+tt;
					if(find2(pos,tt,order)==true)
					{
		
						BLOCK[clk2.x][clk2.y]=order;
						blkdraw(clk2,order);  // 검은 색으로 칠함
						order=1;
					}
				}
			}
		}
	}
	CView::OnLButtonDown(nFlags, point);
}
// 위치 pos 주변 4방향으로 or과 다른 색이 있는지 찾는 함수
CPoint Coth2View::find(CPoint pos, bool or)
{
	CPoint tmp;
	tmp.x=0, tmp.y=0;
	if((pos.x-1>=0) &&BLOCK[pos.x-1][pos.y]==or )
	{
		tmp.x--; return tmp;
	}
	if(pos.x+1<15 && BLOCK[pos.x+1][pos.y]==or )
	{
		tmp.x++; return tmp;
	}
	if(pos.y-1>=0 && BLOCK[pos.x][pos.y-1]==or )
	{
		tmp.y--; return tmp;
	}
	if(pos.y+1<15 && BLOCK[pos.x][pos.y+1]==or)
	{
		tmp.y++; return tmp;
	}
	return tmp;
}
bool Coth2View::find2(CPoint pos, CPoint tt, bool or)
{
	CPoint pp=pos;
	while(pp.x>=0 && pp.x<15 && pp.y >=0 &&pp.y<15)
	{
		pp.x=pp.x+tt.x,pp.y=pp.y+tt.y;
		if(BLOCK[pp.x][pp.y]==or) return true;
	}
	return false;
}
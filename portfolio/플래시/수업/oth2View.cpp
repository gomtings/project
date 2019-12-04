
// oth2View.cpp : Coth2View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Coth2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Coth2View ����/�Ҹ�

Coth2View::Coth2View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
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
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// Coth2View �׸���

void Coth2View::OnDraw(CDC* /*pDC*/)
{
	Coth2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)		return;
	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
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


// Coth2View �μ�


void Coth2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Coth2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void Coth2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void Coth2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
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


// Coth2View ����

#ifdef _DEBUG
void Coth2View::AssertValid() const
{
	CView::AssertValid();
}

void Coth2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Coth2Doc* Coth2View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Coth2Doc)));
	return (Coth2Doc*)m_pDocument;
}
#endif //_DEBUG
// ��ġ pos�� ���������� �ϴ� �� q(0=����, 
// 1= ȸ��, 2=���)�� ä���� �簢�� �׸��� �Լ� 
void Coth2View :: blkdraw(CPoint pos, int q)
{// �Լ��� ����
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
} // �Լ��� ��
// Coth2View �޽��� ó����


void Coth2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if(point.x <15*SIZE && point.y <15*SIZE)
	{
		CPoint pos;
		pos.x = point.x/30, pos.y = point.y/30;
		if (order==1) // ù��° Ŭ��
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
						blkdraw(clk1,order); // ȸ������ ĥ��
						order=0;
					}
				}
			}
		}
		else // �ι�° Ŭ��
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
						blkdraw(clk2,order);  // ���� ������ ĥ��
						order=1;
					}
				}
			}
		}
	}
	CView::OnLButtonDown(nFlags, point);
}
// ��ġ pos �ֺ� 4�������� or�� �ٸ� ���� �ִ��� ã�� �Լ�
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

// oth2View.h : Coth2View Ŭ������ �������̽�
//

#pragma once


class Coth2View : public CView
{
protected: // serialization������ ��������ϴ�.
	Coth2View();
	DECLARE_DYNCREATE(Coth2View)

// Ư���Դϴ�.
public:
	Coth2Doc* GetDocument() const;

// �۾��Դϴ�.
public:
	#define SIZE 30    // ���� �ϳ��� ũ��
	void blkdraw(CPoint pos, int q);
	bool order; // ���� �� 0, 1
	CPoint clk1, clk2;// ù��° Ŭ���� �� ��° Ŭ���� ������ ����
	int BLOCK[15][15];
	CPoint find(CPoint pos, bool or);
	bool find2(CPoint pos, CPoint tt, bool or);
// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~Coth2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // oth2View.cpp�� ����� ����
inline Coth2Doc* Coth2View::GetDocument() const
   { return reinterpret_cast<Coth2Doc*>(m_pDocument); }
#endif


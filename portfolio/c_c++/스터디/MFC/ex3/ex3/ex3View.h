
// ex3View.h : Cex3View Ŭ������ �������̽�
//

#pragma once


class Cex3View : public CView
{
protected: // serialization������ ��������ϴ�.
	Cex3View();
	DECLARE_DYNCREATE(Cex3View)

// Ư���Դϴ�.
public:
	Cex3Doc* GetDocument() const;

// �۾��Դϴ�.
public:
	CString TEXT; //Ű���� ���ڿ��� ������ ����
	int VAL;
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
	virtual ~Cex3View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // ex3View.cpp�� ����� ����
inline Cex3Doc* Cex3View::GetDocument() const
   { return reinterpret_cast<Cex3Doc*>(m_pDocument); }
#endif


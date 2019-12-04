
// oth2View.h : Coth2View 클래스의 인터페이스
//

#pragma once


class Coth2View : public CView
{
protected: // serialization에서만 만들어집니다.
	Coth2View();
	DECLARE_DYNCREATE(Coth2View)

// 특성입니다.
public:
	Coth2Doc* GetDocument() const;

// 작업입니다.
public:
	#define SIZE 30    // 격자 하나의 크기
	void blkdraw(CPoint pos, int q);
	bool order; // 순서 값 0, 1
	CPoint clk1, clk2;// 첫번째 클릭과 두 번째 클릭을 저장할 변수
	int BLOCK[15][15];
	CPoint find(CPoint pos, bool or);
	bool find2(CPoint pos, CPoint tt, bool or);
// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~Coth2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // oth2View.cpp의 디버그 버전
inline Coth2Doc* Coth2View::GetDocument() const
   { return reinterpret_cast<Coth2Doc*>(m_pDocument); }
#endif


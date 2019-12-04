
// ex3View.h : Cex3View 클래스의 인터페이스
//

#pragma once


class Cex3View : public CView
{
protected: // serialization에서만 만들어집니다.
	Cex3View();
	DECLARE_DYNCREATE(Cex3View)

// 특성입니다.
public:
	Cex3Doc* GetDocument() const;

// 작업입니다.
public:
	CString TEXT; //키보드 문자열을 저장할 변수
	int VAL;
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
	virtual ~Cex3View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // ex3View.cpp의 디버그 버전
inline Cex3Doc* Cex3View::GetDocument() const
   { return reinterpret_cast<Cex3Doc*>(m_pDocument); }
#endif


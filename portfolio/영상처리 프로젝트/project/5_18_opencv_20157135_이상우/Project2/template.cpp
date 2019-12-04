#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;
/*
int main(int argc, char** argv) {
	Mat img, templ, result;
	const char* image_window = "Source Image";
	const char* result_window = "result window";

	/// Load image and template 

	img = imread(argv[1], 1);
	templ = imread(argv[2], 1);

	///Create windows 
	cv::namedWindow(image_window, CV_WINDOW_AUTOSIZE);
	cv::namedWindow(result_window, CV_WINDOW_AUTOSIZE);

	/// Create the result matrix 
	// 각 템플릿 위치에 대해 일치하는 결과를 저장할 결과 행렬을 만든다.
	// 결과 행렬의 크기를 자세리 관찰한다. (가능한 모든 위치와 일치 함).
	int result_cols = img.cols - templ.cols + 1;
	int result_rows = img.rows - templ.rows + 1;

	result.create(result_rows, result_cols, CV_32FC1);

	/// Do the Matching and Normalize 
	int match_method = CV_TM_CCOEFF;

	// Matching = 1.  CV_TM_CCOEFF 2. CV_TM_CCOEFF_NORMED 3. CV_TM_CCORR  
	           // 4.  CV_TM_CCORR_NORMED 5.CV_TM_CCOEFF  6. CV_TM_CCORR_NORMED

	matchTemplate(img, templ, result, match_method);
	// 템프리트 일치 조작을 수행 한다. 
	// 인수는 입력 이미지 ㅣ 템플릿  T .결과 R 및 match_method(Trachbar에 의해 주어짐 )

	/// Localizing the best match with minMaxLoc 
	//결과를 표준화 
	double minVal, maxVal;
	Point minLoc, maxLoc, matchLoc;

	minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());
	//minMaxLoc를 사용하여 결과 행렬 R 의 최소값과 최대값을 지역화 한다. 
	/*
	 minMaxLoc 인수들 

	 result  : 소스 배열 
	 &minVal, &maxVal : 결과에 최소값과 최대 값을 저장하는 변수 
	 &minLoc, &maxLoc : 배열의 최소값과 최대 값의 위치입니다. 
	 Mat()            : 선택적 마스크  
	*/
	///For SQDIFF and SQDIFF_NORMED, the best matches are 
	// lower values. For all the other method, the higher the better 
	/*
	if (match_method == CV_TM_SQDIFF || match_method == CV_TM_SQDIFF_NORMED) {
		matchLoc = minLoc;
	}
	else {
		matchLoc = maxLoc;
	}
	/* 처음 두 메소드 (CV_TM_SQDIFF ,CV_TM_SQDIFF_NORMED ) 의 경우 가장 일치하는 값(밝은 값)은 가장 낮은값(어두은 값)
	다음 모든 경우에는 값이 높을 수록 일치도가 높아진다. 
	따라서 matchLoc 변수에 해당 값을 저장 한다.
	*/
/*
	/// Show me what you got 
	// 원본 이미지의 복사본을 만든다. 
	Mat img_display;
	img.copyTo(img_display);
	//원본 이미지와 결과 행렬을 표시 가능한 가능 높은 ㅇㄹ치 영역 주위에 사각형을 그린다. 
	rectangle(img_display, matchLoc,
		Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows),
		Scalar::all(0), 2, 8, 0);
	normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());
	rectangle(result, matchLoc,Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows),
		Scalar::all(0), 2, 8, 0);

	imshow(image_window, img_display);
	imshow(result_window, result);

	imshow("template", templ);
	waitKey(0);
	return 0;
}*/

#include "opencv2\highgui\highgui.hpp"
#include "opencv2\imgproc\imgproc.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;

int main(int argc, char *argv[]) {
	Mat img, templ, result;
	const char *image_window = "20157135_이상우1";
	const char *result_window = "20157135_이상우2";

	/// Load image and template

	img = imread(argv[1], 1);
	templ = imread(argv[2], 1);

	/// Create windows
	cv::namedWindow(image_window, CV_WINDOW_AUTOSIZE);
	cv::namedWindow(result_window, CV_WINDOW_AUTOSIZE);

	/// Create windows
	// 각 템플릿 위치에 대해 일치하는 결과를 저장할 결과 행렬을 만든다.
	// 결과 행렬의 크기를 자세히 관찰한다. (가능한 모든 위치와 일치 함)
	int result_cols = img.cols - templ.cols + 1;
	int result_rows = img.rows - templ.rows + 1;

	result.create(result_rows, result_cols, CV_32FC1);

	/// Do the Matching and Normalize
	int match_method = CV_TM_SQDIFF_NORMED;

	// Matching
	matchTemplate(img, templ, result, match_method);
	// 템플릿 일치 조작을 수행한다.
	/// Localizing the best match with minMaxLoc
	//결과를 표준화
	double minVal, maxVal;
	Point minLoc, maxLoc, matchLoc;

	minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());

	if (match_method == CV_TM_SQDIFF || match_method == CV_TM_SQDIFF_NORMED) {
		matchLoc = minLoc;
	}
	else {
		matchLoc = maxLoc;
	}
	/// Show me what you got
	// 원본 이미지의 복사본을 만든다.
	Mat img_display;
	img.copyTo(img_display);
	// 원본 이미지와 결과 행렬을 표시 가능한 가장 높은 일치 영역 주위에 사각형을 그린다.
	rectangle(img_display, matchLoc, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), Scalar::all(0), 2, 8, 0);

	normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());

	rectangle(result, matchLoc, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), Scalar::all(0), 2, 8, 0);

	imshow(image_window, img_display);
	imshow(result_window, result);

	imshow("20157135_이상우", templ);

	waitKey(0);
	return 0;
}

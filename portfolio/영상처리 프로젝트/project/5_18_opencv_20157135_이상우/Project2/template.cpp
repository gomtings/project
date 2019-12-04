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
	// �� ���ø� ��ġ�� ���� ��ġ�ϴ� ����� ������ ��� ����� �����.
	// ��� ����� ũ�⸦ �ڼ��� �����Ѵ�. (������ ��� ��ġ�� ��ġ ��).
	int result_cols = img.cols - templ.cols + 1;
	int result_rows = img.rows - templ.rows + 1;

	result.create(result_rows, result_cols, CV_32FC1);

	/// Do the Matching and Normalize 
	int match_method = CV_TM_CCOEFF;

	// Matching = 1.  CV_TM_CCOEFF 2. CV_TM_CCOEFF_NORMED 3. CV_TM_CCORR  
	           // 4.  CV_TM_CCORR_NORMED 5.CV_TM_CCOEFF  6. CV_TM_CCORR_NORMED

	matchTemplate(img, templ, result, match_method);
	// ������Ʈ ��ġ ������ ���� �Ѵ�. 
	// �μ��� �Է� �̹��� �� ���ø�  T .��� R �� match_method(Trachbar�� ���� �־��� )

	/// Localizing the best match with minMaxLoc 
	//����� ǥ��ȭ 
	double minVal, maxVal;
	Point minLoc, maxLoc, matchLoc;

	minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());
	//minMaxLoc�� ����Ͽ� ��� ��� R �� �ּҰ��� �ִ밪�� ����ȭ �Ѵ�. 
	/*
	 minMaxLoc �μ��� 

	 result  : �ҽ� �迭 
	 &minVal, &maxVal : ����� �ּҰ��� �ִ� ���� �����ϴ� ���� 
	 &minLoc, &maxLoc : �迭�� �ּҰ��� �ִ� ���� ��ġ�Դϴ�. 
	 Mat()            : ������ ����ũ  
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
	/* ó�� �� �޼ҵ� (CV_TM_SQDIFF ,CV_TM_SQDIFF_NORMED ) �� ��� ���� ��ġ�ϴ� ��(���� ��)�� ���� ������(����� ��)
	���� ��� ��쿡�� ���� ���� ���� ��ġ���� ��������. 
	���� matchLoc ������ �ش� ���� ���� �Ѵ�.
	*/
/*
	/// Show me what you got 
	// ���� �̹����� ���纻�� �����. 
	Mat img_display;
	img.copyTo(img_display);
	//���� �̹����� ��� ����� ǥ�� ������ ���� ���� ����ġ ���� ������ �簢���� �׸���. 
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

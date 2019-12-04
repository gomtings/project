#include "opencv/cv.h"
#include "opencv/highgui.h"
#include <iostream>

#include "opencv2\highgui\highgui.hpp"
#include "opencv2\imgproc\imgproc.hpp"
#include <stdio.h>

#define IMAGE_PATH "C:/Users/tkddn/Desktop/OpenCV-CarLicensePlateRecognizer-master/OpenCV-CarLicensePlateRecognizer-master/car_license_plate_images/1.jpg"

using namespace std;
using namespace cv;
int rect=0, digit=0;
int TemplateMatching(IplImage* image, IplImage* templ);

int main(int argc, char *argv[]) {

	const char *image_window = "20157135_�̻��1";
	const char *result_window = "20157135_�̻��2";

	// �̹��� �ε�
	Mat image = imread(IMAGE_PATH) , gray, canny, result;
	Mat img, templ[10];
	imshow("original", image);
	// �׷��� �� ��ȯ
	cvtColor(image, gray, CV_BGR2GRAY);
	imshow("original->gray", gray );
	// canny �˰����� �̿��Ͽ� �������� ����
	Canny(gray , canny, 100, 400);
	imshow("original->gray->Canny", canny);

	// �������� ������
	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;
	findContours(canny, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point());
	vector<vector<Point>> contoursPoly(contours.size());
	vector<Rect> boundRect(contours.size());
	vector<Rect> boundRect2(contours.size());

	for (int i = 0; i < contours.size(); i++) {
		approxPolyDP(Mat(contours[i]), contoursPoly[i], 1, true);
		boundRect[i] = boundingRect(Mat(contoursPoly[i]));
	}

	// ��ȣ�� �ĺ��� ���� ���� ����
	int refineryCount = 0;

	// ������ �� ��ȣ�� �ĺ��� �� �� �ִ� �͸� ���� (����, ���� ���� �� ũ��� �Ǵ�)
	for (int i = 0; i < contours.size(); i++) {
		double widthHeightRatio = (double)boundRect[i].height / boundRect[i].width;

		if (
			widthHeightRatio <= 3.5 &&
			widthHeightRatio >= 0.5 &&
			boundRect[i].area() <= 2000 &&
			boundRect[i].area() >= 300
		) {
			refineryCount++;
			boundRect2[refineryCount] = boundRect[i];
		}
	}

	boundRect2.resize(refineryCount);

	// �߷��� ��ȣ�� �ĺ��� �������� x ��ǥ �������� ����
	for (int i = 0; i < boundRect2.size(); i++) {
		for (int j = 0; j < boundRect2.size() - 1; j++) {
			if (boundRect2[j].tl().x > boundRect2[j + 1].tl().x) {
				Rect tmpRect = boundRect2[j];
				boundRect2[j] = boundRect2[j + 1];
				boundRect2[j + 1] = tmpRect;
			}
		}
	}

	// ��ȣ�� ������ ��ü�� ���� �ε���
	int startIdx = 0;

	// ���� ������ ���� ���� ����
	int adjecentCount = 0;

	// ��ȣ�� ���� ���� ���� ����
	double Width = 0;

	for (int i = 0; i < boundRect2.size(); i++) {
		int count = 0;
		double deltaX = 0.0;

		for (int j = i + 1; j < boundRect2.size(); j++) {
			// ���� �������� x ��ǥ�� �ִ� �Ÿ� ���� �������� x ��ǥ ������ �Ÿ��� ����
			deltaX = abs(boundRect2[j].tl().x - boundRect2[i].tl().x);

			// �Ÿ��� �ʹ� ������ �ִ� ��� �ĺ������� ���� ��Ŵ
			if (deltaX > 300) {
				break;
			}

			// ���⸦ ���� �� 0���� ������ ���� ����
			if (deltaX == 0.0) {
				deltaX = 1.0;
			}

			// ���� �������� y ��ǥ�� �ִ� �Ÿ� ���� �������� y ��ǥ ������ �Ÿ��� ����
			double deltaY = abs(boundRect2[j].tl().y - boundRect2[i].tl().y);

			// ���⸦ ���� �� 0���� ������ ���� ����
			if (deltaY == 0.0) {
				deltaY = 1.0;
			}

			// �� �������� ���⸦ ����
			double gradient = deltaY / deltaX;

			// ���Ⱑ �̼��ϰ� ���̰� �ִ� ��� ���� ���������� �߰�
			if (gradient < 0.1 ) {
				count++;
			}
		}

		// �ִ� ���� ������ ���� ���� ����
		if (count > adjecentCount) {
			startIdx = i;
			adjecentCount = count;
			Width = deltaX;
		}
	}

	result = image(Rect(boundRect2[startIdx].tl().x - 40, boundRect2[startIdx].tl().y - 20, Width - 10, Width * 0.25));
	// Rect()  �Լ��� �̿��ؼ� ���ϴ� ũ�� ��ŭ ��� �Ѵ�. Rect(a,b,c,d) ���� �̸�  a,b ��ǥ���� x��ǥ�� c��ŭ y ��ǥ�� d��ŭ �߶󳽴�.
	imshow("���",result);//  ���â�� ����.

	//=============================================

	/// Load image and template

	img = result ;
	templ[0] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/00.jpg");
	templ[1] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/11.jpg");
	templ[2] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/22.jpg");
	templ[3] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/33.jpg");
	templ[4] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/44.jpg");
	templ[5] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/55.jpg");
	templ[6] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/66.jpg");
	templ[7] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/77.jpg");
	templ[8] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/88.jpg");
	templ[9] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_�̻��/Project2/num/99.jpg");

	/// Create windows
	cv::namedWindow(image_window, CV_WINDOW_AUTOSIZE);
	cv::namedWindow(result_window, CV_WINDOW_AUTOSIZE);

	/// Create windows
	// �� ���ø� ��ġ�� ���� ��ġ�ϴ� ����� ������ ��� ����� �����.
	// ��� ����� ũ�⸦ �ڼ��� �����Ѵ�. (������ ��� ��ġ�� ��ġ ��)

	// ���� �̹����� ���纻�� �����.
	Mat img_display;
	img.copyTo(img_display);

	for (int i = 0; i < 5; i++) { // // for ���� ���� 

    int result_cols = img.cols - templ[i].cols + 1;
	int result_rows = img.rows - templ[i].rows + 1;

	result.create(result_rows, result_cols, CV_32FC1);

	/// Do the Matching and Normalize
	int match_method = CV_TM_SQDIFF_NORMED;

	// Matching
	matchTemplate(img, templ[i], result, match_method);
	// ���ø� ��ġ ������ �����Ѵ�.
	/// Localizing the best match with minMaxLoc
	//����� ǥ��ȭ
	double minVal, maxVal;
	Point minLoc, maxLoc, matchLoc;

	minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());

	if (match_method == CV_TM_SQDIFF || match_method == CV_TM_SQDIFF_NORMED) {
		matchLoc = minLoc;
	}
	else
	{
		matchLoc = maxLoc;
	}
	/// Show me what you got
	// ���� �̹����� ��� ����� ǥ�� ������ ���� ���� ��ġ ���� ������ �簢���� �׸���.
	rectangle(img_display, matchLoc, Point(matchLoc.x + templ[i].cols, matchLoc.y + templ[i].rows), Scalar::all(0), 2, 8, 0);

	normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());

	rectangle(result, matchLoc, Point(matchLoc.x + templ[i].cols, matchLoc.y + templ[i].rows), Scalar::all(0), 2, 8, 0);

	

	imshow(image_window, img_display);
	imshow(result_window, result);

	imshow("20157135_�̻��", templ[i]);
	
	}// for ���� �� 
    
	printf("�ƹ� Ű�� �����ø� �����մϴ�.");

	waitKey(0);

	return 0;
}
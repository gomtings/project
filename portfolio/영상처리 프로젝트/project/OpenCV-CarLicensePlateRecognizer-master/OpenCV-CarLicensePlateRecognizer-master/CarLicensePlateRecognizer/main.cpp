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

	const char *image_window = "20157135_이상우1";
	const char *result_window = "20157135_이상우2";

	// 이미지 로드
	Mat image = imread(IMAGE_PATH) , gray, canny, result;
	Mat img, templ[10];
	imshow("original", image);
	// 그레이 로 변환
	cvtColor(image, gray, CV_BGR2GRAY);
	imshow("original->gray", gray );
	// canny 알고리즘을 이용하여 윤곽선만 남김
	Canny(gray , canny, 100, 400);
	imshow("original->gray->Canny", canny);

	// 윤곽선을 가져옴
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

	// 번호판 후보군 갯수 저장 변수
	int refineryCount = 0;

	// 윤곽선 중 번호판 후보가 될 수 있는 것만 남김 (가로, 세로 비율 및 크기로 판단)
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

	// 추려낸 번호판 후보군 윤곽선을 x 좌표 기준으로 정렬
	for (int i = 0; i < boundRect2.size(); i++) {
		for (int j = 0; j < boundRect2.size() - 1; j++) {
			if (boundRect2[j].tl().x > boundRect2[j + 1].tl().x) {
				Rect tmpRect = boundRect2[j];
				boundRect2[j] = boundRect2[j + 1];
				boundRect2[j + 1] = tmpRect;
			}
		}
	}

	// 번호판 윤곽선 객체의 시작 인덱스
	int startIdx = 0;

	// 인접 윤곽선 갯수 저장 변수
	int adjecentCount = 0;

	// 번호판 가로 길이 저장 변수
	double Width = 0;

	for (int i = 0; i < boundRect2.size(); i++) {
		int count = 0;
		double deltaX = 0.0;

		for (int j = i + 1; j < boundRect2.size(); j++) {
			// 현재 윤곽선의 x 좌표와 최단 거리 인접 윤곽선의 x 좌표 사이의 거리를 구함
			deltaX = abs(boundRect2[j].tl().x - boundRect2[i].tl().x);

			// 거리가 너무 떨어져 있는 경우 후보군에서 제외 시킴
			if (deltaX > 300) {
				break;
			}

			// 기울기를 구할 때 0으로 나누는 예외 방지
			if (deltaX == 0.0) {
				deltaX = 1.0;
			}

			// 현재 윤곽선의 y 좌표와 최단 거리 인접 윤곽선의 y 좌표 사이의 거리를 구함
			double deltaY = abs(boundRect2[j].tl().y - boundRect2[i].tl().y);

			// 기울기를 구할 때 0으로 나누는 예외 방지
			if (deltaY == 0.0) {
				deltaY = 1.0;
			}

			// 두 윤곽선의 기울기를 구함
			double gradient = deltaY / deltaX;

			// 기울기가 미세하게 차이가 있는 경우 인접 윤곽선으로 추가
			if (gradient < 0.1 ) {
				count++;
			}
		}

		// 최대 인접 윤곽선 갯수 상태 저장
		if (count > adjecentCount) {
			startIdx = i;
			adjecentCount = count;
			Width = deltaX;
		}
	}

	result = image(Rect(boundRect2[startIdx].tl().x - 40, boundRect2[startIdx].tl().y - 20, Width - 10, Width * 0.25));
	// Rect()  함수를 이용해서 원하는 크기 만큼 출력 한다. Rect(a,b,c,d) 형식 이며  a,b 좌표에서 x좌표로 c만큼 y 좌표로 d만큼 잘라낸다.
	imshow("결과",result);//  결과창을 띄운다.

	//=============================================

	/// Load image and template

	img = result ;
	templ[0] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/00.jpg");
	templ[1] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/11.jpg");
	templ[2] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/22.jpg");
	templ[3] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/33.jpg");
	templ[4] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/44.jpg");
	templ[5] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/55.jpg");
	templ[6] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/66.jpg");
	templ[7] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/77.jpg");
	templ[8] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/88.jpg");
	templ[9] = imread("C:/Users/tkddn/Desktop/5_18_opencv_20157135_이상우/Project2/num/99.jpg");

	/// Create windows
	cv::namedWindow(image_window, CV_WINDOW_AUTOSIZE);
	cv::namedWindow(result_window, CV_WINDOW_AUTOSIZE);

	/// Create windows
	// 각 템플릿 위치에 대해 일치하는 결과를 저장할 결과 행렬을 만든다.
	// 결과 행렬의 크기를 자세히 관찰한다. (가능한 모든 위치와 일치 함)

	// 원본 이미지의 복사본을 만든다.
	Mat img_display;
	img.copyTo(img_display);

	for (int i = 0; i < 5; i++) { // // for 문의 시작 

    int result_cols = img.cols - templ[i].cols + 1;
	int result_rows = img.rows - templ[i].rows + 1;

	result.create(result_rows, result_cols, CV_32FC1);

	/// Do the Matching and Normalize
	int match_method = CV_TM_SQDIFF_NORMED;

	// Matching
	matchTemplate(img, templ[i], result, match_method);
	// 템플릿 일치 조작을 수행한다.
	/// Localizing the best match with minMaxLoc
	//결과를 표준화
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
	// 원본 이미지와 결과 행렬을 표시 가능한 가장 높은 일치 영역 주위에 사각형을 그린다.
	rectangle(img_display, matchLoc, Point(matchLoc.x + templ[i].cols, matchLoc.y + templ[i].rows), Scalar::all(0), 2, 8, 0);

	normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());

	rectangle(result, matchLoc, Point(matchLoc.x + templ[i].cols, matchLoc.y + templ[i].rows), Scalar::all(0), 2, 8, 0);

	

	imshow(image_window, img_display);
	imshow(result_window, result);

	imshow("20157135_이상우", templ[i]);
	
	}// for 문의 끝 
    
	printf("아무 키나 누르시면 종료합니다.");

	waitKey(0);

	return 0;
}
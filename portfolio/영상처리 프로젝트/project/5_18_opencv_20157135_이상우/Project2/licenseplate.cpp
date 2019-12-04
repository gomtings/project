#include<opencv2/opencv.hpp>
#include<iostream>
#include<cstdlib> 

#define IMG "C:/Users/tkddn/Desktop/OpenCV-CarLicensePlateRecognizer-master/OpenCV-CarLicensePlateRecognizer-master/car_license_plate_images/1.jpg"

using namespace cv;
using namespace std;
/*
int main() {

	Mat img, img2, img3, img4;

	Rect rect, temp_rect;
	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;

	double ratio, delta_x, delta_y, drawing; 
	int select, plate_width, count, friend_count=0 , refinery_count = 0;

	img = imread(IMG);

	imshow("original",img);
	cvtColor(img, img2, CV_BGR2GRAY); \
		imshow("original->gray", img2);
	Canny(img2, img3, 100,300,3);
	imshow("original->gray->canny", img3);

	// finding contours . 
	findContours(img3, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point());
	vector<vector<Point>> contoursPoly(contours.size());
	vector<Rect> boundRect(contours.size());
	vector<Rect> boundRect2(contours.size());

	// Bind rectangle to every rectangle  
	for (int i = 0; i < contours.size(); i++) {
		approxPolyDP(Mat(contours[i]), contoursPoly[i], 1, true);
		boundRect[i] = boundingRect(Mat(contoursPoly[i]));
	}

	for (int i = 0; i < contours.size(); i++) {
		ratio = (double) boundingRect[i].height / boundRect[i].width;
	}



	waitKey(0);

}
*/
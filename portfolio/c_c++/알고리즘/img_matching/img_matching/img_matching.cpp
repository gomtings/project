#include <core.hpp>
#include <iostream>
#include <imgcodecs.hpp>
#include <highgui.hpp>
#include <imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <String>
#include <thread>
#define  standard 0.92
#define SCALE 0.2

using namespace cv;
using namespace std;
using std::thread;

int flag = 0, index, thread_index = 0, idx1 = 0, idx2 = 0;
int func1_flag = 0, func2_flag = 0, func1_add = 0, func2_add=2;
double duration; //변수 설정
String filename; 
Mat input;
Mat srcImage[3];

Mat hist_0[2];
Mat hist_1[2];
vector<String> filenames;
const char* path = "references\\*.png";

Mat graph(Mat img[],int inx);
void display(int name);
void img_Load();

void func1() {
	for (idx1=0; idx1 < thread_index; idx1++) {
		filename = filenames[idx1];
		input = imread(filename);

		srcImage[1] = imread(filename, IMREAD_GRAYSCALE);

		//Initialize parameters
		int histSize = 256;
		float range[] = { 0, 255 };
		const float* ranges[] = { range };

		//Calculate histogram

		calcHist(&srcImage[0], 1, 0, Mat(), hist_0[0], 1, &histSize, ranges);
		calcHist(&srcImage[1], 1, 0, Mat(), hist_0[1], 1, &histSize, ranges);

		//히스토그램 비교
		double dCorrel = compareHist(hist_0[0], hist_0[1], HISTCMP_CORREL);
		if (dCorrel > standard) {
			printf("t1 과 0000%d 는 같은 이미지 입니다. \n", (idx1 + 1));
			printf("두 이미지의 유사도 = %lf\n", dCorrel);
			String titie;
			titie += string("Histogram") + string(to_string(idx1));
			imshow(titie, srcImage[1]); // master 이미지와 동일하다 판단된 이미지를 출력 합니다.
			display((idx1 + 1));
		}
		else {
			//	printf("t1 과 0000%d 는 다른 이미지 입니다. \n", (idx + 1));
		}
		//printf("두 이미지의 유사도 = %lf\n", dCorrel);
		++func1_add;
		if (func1_add == (thread_index - 1)) {
			func1_flag = 1;
			cout << "func1_종료!" << endl;
		}
	}
}
void func2() {
	for (idx2= thread_index; idx2 < index; idx2++) {
		filename = filenames[idx2];
		input = imread(filename);

		srcImage[2] = imread(filename, IMREAD_GRAYSCALE);
		
		//Initialize parameters
		int histSize = 256;
		float range[] = { 0, 255 };
		const float* ranges[] = { range };

		//Calculate histogram
		
		calcHist(&srcImage[0], 1, 0, Mat(), hist_1[0], 1, &histSize, ranges);
		calcHist(&srcImage[2], 1, 0, Mat(), hist_1[1], 1, &histSize, ranges);

		//히스토그램 비교
		double dCorrel = compareHist(hist_1[0], hist_1[1], HISTCMP_CORREL);
		if (dCorrel > standard) {
			printf("t1 과 0000%d 는 같은 이미지 입니다. \n", (idx2 + 1));
			printf("두 이미지의 유사도 = %lf\n", dCorrel);
			String titie;
			titie += string("Histogram") + string(to_string(idx2));
			imshow(titie, srcImage[2]); // master 이미지와 동일하다 판단된 이미지를 출력 합니다.
			display((idx2 + 1));
		}
		else {
			//	printf("t1 과 0000%d 는 다른 이미지 입니다. \n", (idx + 1));
		}
		//printf("두 이미지의 유사도 = %lf\n", dCorrel);
		++func2_add;
		if (func2_add== (index-1)) {
			func2_flag = 1;
			cout << "func2_종료!" << endl;
		}
	}
}
int main() {
	img_Load(); // 이미지를 불러옵니다. 

	thread t1(func1);
	thread t2(func2);
	t1.join();
    t2.join();
	if (func1_flag == 1 && func2_flag == 1) {
		t1.detach();
		t2.detach();
	}

	duration = static_cast<double>(cv::getTickCount()) - duration;  //함수 내용 지난담에 시간과 초기시간 빼기
	duration /= cv::getTickFrequency();                                //ms 단위 경과 시간
	printf("경과 시간은 : %f ms\n",duration);
	waitKey(0);
	destroyAllWindows();
}

Mat graph(Mat img[], int inx) {
		Mat inputImg;
		Mat greyImg;
		inputImg = img[inx];
	//	resize(inputImg, inputImg, Size(), SCALE, SCALE, CV_INTER_AREA);
		// inputImg를 gray영상(greyImg)으로 변환한다.
	//	cvtColor(inputImg, greyImg, CV_BGR2GRAY);

		MatND histogram;
		const int* channel_numbers = { 0 };
		float channel_range[] = { 0.0, 255.0 };
		const float* channel_ranges = channel_range;
		int number_bins = 255;

		calcHist(&inputImg, 1, channel_numbers, Mat(), histogram, 1, &number_bins, &channel_ranges);

		// Plot the histogram
		int hist_w = 512; int hist_h = 400;
		int bin_w = cvRound((double)hist_w / number_bins);

		Mat histImage(hist_h, hist_w, CV_8UC1, Scalar(0, 0, 0));
		normalize(histogram, histogram, 0, histImage.rows, NORM_MINMAX, -1, Mat());

		for (int i = 1; i < number_bins; i++)
		{
			line(histImage, Point(bin_w * (i - 1), hist_h - cvRound(histogram.at<float>(i - 1))),
				Point(bin_w * (i), hist_h - cvRound(histogram.at<float>(i))),
				Scalar(255, 0, 0), 2, 8, 0);
		}
		/*
		namedWindow("Histogram2");
		moveWindow("Histogram2", 120, 120);
		imshow("Histogram2", histImage);
		*/
		return histImage;
}
void display(int name) {
	String titie;
	titie += string("Histogram") + string(to_string(name));
	namedWindow(titie);
	moveWindow(titie, 120, 120);
	imshow(titie, graph(srcImage, 1));
}
void img_Load() {
	cout << "검색할 이미지 갯수를 입력해 주세요. 0 입력시 전체를 검색 합니다." << endl;
	cin >> index;
	duration = static_cast<double>(cv::getTickCount());//초기 시작 시간 설정
	//히스토그램 비교로 유사한 영상 찾기
	glob(path, filenames, true /* recursive */);

	if(index == 0) {
		index = filenames.size(); // 1178
		cout << "전체를 검색 합니다." << endl;
	}
	srcImage[0] = imread("t1.PNG", IMREAD_GRAYSCALE);
	thread_index = index / 2;
	if (flag == 0) {
		String titie;
		titie += string("master");
		imshow(titie, srcImage[0]); // master 이미지와 동일하다 판단된 이미지를 출력 합니다.
		display(0);
		flag = 1;
	}
}
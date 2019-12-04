#define _CRT_SECURE_NO_WARNINGS
#include <opencv/cv.h>
#include <opencv2/opencv.hpp>
#include <opencv/cxcore.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>
#include <iostream>
#include <ctime>

void video_capture(void);
int face_detect(int, char **);
void _face_detect_and_draw(IplImage *);
void color(IplImage *);

static CvMemStorage *storage = 0; // 계산하기 위한 메모리 공간 생성 
static CvHaarClassifierCascade *cascade = 0; // HaarClassifier 생성 
/*
int main(int argc, char **argv) {
	//basic menu implementaion 
	int menu = 0;
	printf("function select :face_detect\n");
		face_detect(argc, argv);
}
*/
void video_capture(void) {
	IplImage *img;
	CvCapture *capture;
	CvVideoWriter *writer;
	int key;

	cvNamedWindow("학번_이름_Video", CV_WINDOW_AUTOSIZE);
	capture = cvCaptureFromCAM(0); // detecting cam;
	img = cvQueryFrame(capture); // query a frame from the cam 

	writer = cvCreateVideoWriter("Result.avi", CV_FOURCC('D', 'I', 'V', 'X'), 30, cvSize(img->width, img->height), 1);
	                            //  비디오 출력기 생성 함수    FPS Frame size  1= 컬러 2= 그래이 
	                            //  저장 파일명 코덱 DIVX = MPEG-4
	while (!0) {
		img = cvQueryFrame(capture);
		cvShowImage("20157135_이상우_video", img);
		cvWriteFrame(writer, img);
		key = cvWaitKey(30);
		if (key == (char)27)
			break;
	}
	cvReleaseVideoWriter(&writer);
	cvReleaseCapture(&capture);
	cvDestroyWindow("20157135_이상우_video");
	return;
}
int face_detect(int argc, char **argv) {
	CvCapture *capture=0;
	IplImage *frame;
	int optlen = strlen("--cascade=");
	const char *input_name;
	const char *cascade_name;

	//cascade file including 
	// 1. user define 
	// 2. using default cascade xml files 
	if (argc > 1 && strncmp(argv[1], "--cascade=", optlen) == 0) {
		cascade_name = argv[1] + optlen;
		input_name = argc > 2 ? argv[2] : 0;
	}
	else {
		cascade_name = "C:/data/haarcascades/haarcascade_frontalface_alt2.xml";
		input_name = argc > 2 ? argv[2] : 0;
	}
	// open cascade file and check validation 
	if (!(cascade = (CvHaarClassifierCascade *)cvLoad(cascade_name, 0, 0, 0))) { // 학습된 결과 인식기는 xml에 저장 된다.
		fprintf(stderr, "ERROR: Couldn't load classifier cascade\n");
		fprintf(stderr, "Usage : facedetect --cascade=\n ""<cascade_path\" [filenamelcamera_index]\n");
		return -1;
	}
	// prepare to acception a input images from files or videos(cam);
	storage = cvCreateMemStorage(0);
	if (!input_name || (isdigit(input_name[0]) && input_name[1] == '\0'))
		capture = cvCaptureFromCAM(!input_name ? 0 : input_name[0] - '0');
	else
		capture = cvCaptureFromCAM(0);

	cvNamedWindow("20157135_이상우_Result",1);

	while (!0) {
		if (!(frame = cvQueryFrame(capture)))
			break;
		 _face_detect_and_draw(frame);
		if(cvWaitKey(10) >=10){
			break;
	   }
	}
	cvReleaseCapture(&capture);
	cvDestroyWindow("20157135_이상우_video");
	return 0;
}

void _face_detect_and_draw(IplImage *img) {
	IplImage *img2;
	char str[100] = "E:/영상처리/";
	char years[5];
	char months[5];
	char days[5];
	char hours[5];
	char minutes[5];
	char seconds[5];
	time_t tt;        time(&tt);

	tm  local = *(localtime(&tt));

	int year, month, day;
	year = 1900 + local.tm_year;
	month = 1 + local.tm_mon;
	day = local.tm_mday;
	itoa(year, years, 10);
	itoa(month, months, 10);
	itoa(day, days, 10);
	unsigned int hour, minute, second, fs;
	hour = local.tm_hour;
	minute = local.tm_min;
	second = local.tm_sec;
	itoa(hour, hours, 10);
	itoa(minute, minutes, 10);
	itoa(second, seconds, 10);

	strcat(str, years);
	strcat(str, "_");
	strcat(str, months);
	strcat(str, "_");
	strcat(str, days);
	strcat(str, "_");
	strcat(str, hours);
	strcat(str, "_");
	strcat(str, minutes);
	strcat(str, "_");
	strcat(str, seconds);
	strcat(str,".jpg");

	int radius;
	static CvScalar colors[] = { { { 0,0,255}},{{0,128,255}},{{0,255,255}},{{0,255,0}},
	{{255,128,0}},{{255,255,0}},{{255,0,0}},{{255,0,255}} };

	double scale = 2.0; // 계산 속도 빠르게 하기위하여 영상을 축소해서 처리.

	IplImage *gray = cvCreateImage(cvSize(img->width, img->height), 8, 1);
	IplImage *small_Img = cvCreateImage(cvSize(cvRound(img->width / scale), cvRound(img->height / scale)), 8, 1);

	cvCvtColor(img, gray, CV_BGR2GRAY); // 흑백 영상으로 
	cvResize(gray, small_Img, CV_INTER_LINEAR);// 영상 축소 
	cvClearMemStorage(storage); // 메모리 초기화 

	if (cascade) {
		double t = (double)cvGetTickCount(); // 수행시간 얻기 위해 현재시간을 가져온다.
		//얼굴 검출. 여러개 있을수 있음으로 결과를 시퀸스에 저장함.
		CvSeq *faces = cvHaarDetectObjects(small_Img, cascade, storage, 1.1, 2, 0, cvSize(30, 30), cvSize(300, 300));
		t = (double)cvGetTickCount() - t; // 수행 시간계산 
		printf("Detection tiem : %gms\n", t / ((double)cvGetTickFrequency() * 1000));
		for (int i = 0; i < (faces ? faces->total : 0); i++) {
			CvRect *r = (CvRect *)cvGetSeqElem(faces, i);
			CvPoint center;
			center.x = cvRound((r->x + r->width*0.5)*scale);
			center.y = cvRound((r->y + r->width*0.5)*scale);
			radius = cvRound((r->width + r->height)*0.25*scale);
			cvCircle(img, center, radius, colors[i & 8], 3, 8, 0);
			if (radius > 0) {
				cvSaveImage(str, img);//처리 결과 파일에 저장 
			}
		}
	}
	cvShowImage("20157135_이상우_Result", img);
	cvReleaseImage(&gray);
	cvReleaseImage(&small_Img);
	
}
void color(IplImage *img) {
	IplImage *srcImage1, *srcImage2, *resultImage = 0;

	srcImage1 = cvLoadImage("D:/study/Lena.jpg", -1);
	srcImage2 = cvLoadImage("D:/study/background.jpg", -1);



	//두영상의 덧셈, 뺄셈, 곱셈, 나눗셈을 이용하여 이미지 합성이나 특수효과가 가능하다
	//이미지객체 생성
	resultImage = cvCreateImage(cvGetSize(srcImage1), IPL_DEPTH_8U, 3);
	//cvAdd(첫번째 소스이미지, 두번째 소스이미지, 결과이미지, 마스크) : 두 이미지 더하기
	cvAdd(srcImage1, srcImage2, resultImage, NULL);



	//create window
	cvNamedWindow("source image", CV_WINDOW_AUTOSIZE);
	cvNamedWindow("background image", CV_WINDOW_AUTOSIZE);
	cvNamedWindow("result image", CV_WINDOW_AUTOSIZE);
	//show window
	cvShowImage("source image", srcImage1);
	cvShowImage("background image", srcImage2);
	cvShowImage("result image", resultImage);

	cvWaitKey(0);

	//release image
	cvReleaseImage(&srcImage1);
	cvReleaseImage(&srcImage2);
	cvReleaseImage(&resultImage);
}
/*
for (int i = 0; i < (faces ? faces->total : 0); i++) {
CvRect *r = (CvRect *)cvGetSeqElem(faces, i);
CvPoint center;
center.x = cvRound((r->x + r->width*0.5)*scale);
center.y = cvRound((r->y + r->width*0.5)*scale);
radius = cvRound((r->width + r->height)*0.25*scale);
cvCircle(img, center, radius, colors[i & 8], 3, 8, 0);
if (radius > 0) {
cvSaveImage(str, img);//처리 결과 파일에 저장
}
}
*/
/*
for (int i = 0; i < (faces ? faces->total : 0); i++) {
CvRect *r = (CvRect *)cvGetSeqElem(faces, i);
CvPoint pt1 = { r->x, r->y };
CvPoint pt2 = { r->x + r->width,r->y + r->height };
cvRectangle(img, pt1, pt2, colors[i & 8], 3, 8, 0);
//if (radius > 0) {
//cvSaveImage(str, img);//처리 결과 파일에 저장
//}
*/
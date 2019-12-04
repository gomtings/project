#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>

int gCameraFlag = 0;
char ch;
char file[200];
void mouseHandlerFunc(int, int, int, int, void *);
/*
int main(int argc, char *argv[]) {
	const char *winNameln = "original image";
	int c, param = 3;
	IplImage *pImgIpI = 0;
	CvCapture *pCamera;

	if (!(pCamera = cvCaptureFromCAM(0))) {
		printf("can 't connect CAM\n");
		return -1;
	}
	cvNamedWindow(winNameln, CV_WINDOW_AUTOSIZE);
	cvSetMouseCallback(winNameln, mouseHandlerFunc, &param);
	char str[100] = "E:/영상처리/";char name[50];
	while (!0) {
		if (gCameraFlag) {
			pImgIpI = cvQueryFrame(pCamera);
			cvShowImage(winNameln, pImgIpI);
		}
		c = cvWaitKey(10);
		if ((char)c == 27) {
			break;
		}
		if ((int)c == 67 || (int)c == 99) {
			printf("file name \n");
			scanf("%s", name);
			strcat(str, name);
			strcat(str,".jpg");
			cvSaveImage(str, pImgIpI);// 영상 처리 결과 파일에 저장
			printf("저장 하였습니다.");
		}
	}
	cvReleaseCapture(&pCamera);
	cvDestroyWindow(winNameln);

	return 0;
}
void mouseHandlerFunc(int event, int x, int y, int flags, void *param) {
	switch (event) {
	case CV_EVENT_LBUTTONDOWN :
		printf("L-button clicked, start capture \n");
		gCameraFlag = 1;
		break;
	case CV_EVENT_RBUTTONDOWN :
		printf("R-button clicked, end capture \n");
		gCameraFlag = 0;
		break;
	}
}
*/
/*
scanf("%c", ch);
if (ch == 'c' || ch == 'C') {
printf("file name \n");
scanf("%s", str);
cvSaveImage("E:/영상처리/camera.jpg", pImgIpI);// 영상 처리 결과 파일에 저장
}
*/
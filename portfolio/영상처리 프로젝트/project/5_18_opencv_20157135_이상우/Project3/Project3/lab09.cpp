#include <opencv\cv.h>
#include <opencv\cxcore.h>
#include <opencv\cvaux.h>
#include <opencv\highgui.h>

int gCameraFlag = 0;

void mouseHandlerFunc(int, int, int, int, void *);
/*
int cameraSet() {
	char captureName[20];
	char saveDir[50];

	const char *winNameIn = "original image";
	int c, param = 3;
	IplImage *pImgIpl = 0;
	CvCapture *pCamera;

	if (!(pCamera = cvCaptureFromCAM(0))) {
		printf("can't connect CAM\n");
		return -1;
	}

	cvNamedWindow(winNameIn, CV_WINDOW_AUTOSIZE);
	cvSetMouseCallback(winNameIn, mouseHandlerFunc, &param);

	while (!0) {
		if (gCameraFlag) {
			pImgIpl = cvQueryFrame(pCamera);
			cvShowImage(winNameIn, pImgIpl);
		}
		c = cvWaitKey(10);
		if ((char)c == 'c') {
			printf("Save Image name : ");
			scanf("%s", captureName);
			sprintf(saveDir, "C:/Users/hallym/Desktop/%s.jpg", captureName);
			cvSaveImage(saveDir, pImgIpl);
			printf("Capture Success!");
		}
		if ((char)c == 27) break;
	}

	cvReleaseCapture(&pCamera);
	cvDestroyWindow(winNameIn);

	return 0;
}

void mouseHandlerFunc(int event, int x, int y, int flags, void *param)
{
	switch (event) {
	case CV_EVENT_LBUTTONDOWN:
		printf("L-button clicked, start capture\n");
		gCameraFlag = 1;
		break;
	case CV_EVENT_RBUTTONDOWN:
		printf("R-button clicked, end capture\n");
		gCameraFlag = 0;
		break;
	}
}

//int main(int argc, char *argv[]) {
	//cameraSet();
//}
*/
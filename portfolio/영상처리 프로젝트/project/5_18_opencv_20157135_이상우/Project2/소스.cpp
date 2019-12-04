//OpenCV incldes

#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>
/*
int main(int argc, char *argv[]) {
	IplImage *pImgIpI = cvCreateImage(cvSize(640, 840), IPL_DEPTH_8U, 3);
	cvNamedWindow("20157135", CV_WINDOW_AUTOSIZE);
	cvMoveWindow("SANGWOO", 100, 100);

	//drawing -rectangle 
	cvRectangle(pImgIpI, cvPoint(100, 100), cvPoint(200, 200), cvScalar(255, 0, 0), 2);

	//drawing -circle
	cvCircle(pImgIpI, cvPoint(300, 300),100, cvScalar(0, 255, 0),2);

	//drawing -ellipse

	cvEllipse(pImgIpI, cvPoint(300, 300), cvSize(200, 100), 45, 0, 360, cvScalar(0, 0, 255), 2, 6);

	//drawing -line

	cvLine(pImgIpI, cvPoint(100, 100), cvPoint(300, 300), cvScalar(0, 255, 0), 2);


	//drawing -polygon 
	CvPoint curval1[] = { 100,100,200,100,100,200,0,100 };
	CvPoint curval2[] = { 200,200,400,200,400,400,500,500,300,300 };
	CvPoint* curveArr[] = { curval1 ,curval2 };
	int nCurvePts[2] = { sizeof(curval1) / sizeof(CvPoint),sizeof(curval2) / sizeof(CvPoint) };
	int nCurves = 2;
	int isCurveClosed = 1;
	int lineWith = 3;
	cvPolyLine(pImgIpI, curveArr, nCurvePts, nCurves, isCurveClosed, cvScalar(0, 255, 255), lineWith);

	CvPoint poly1[] = { 50,50,100,50,100,100 };
	CvPoint poly2[] = { 200,200,250,200,250,250 };
	CvPoint* polyArr[] = { poly1 ,poly2 };
	int nPolyPts[] = { sizeof(poly1) / sizeof(CvPoint),sizeof(poly1) / sizeof(CvPoint) };
	int nPoly = 2;
	cvFillPoly(pImgIpI, polyArr, nPolyPts, nPoly, cvScalar(0, 255, 0));

	//show -font

	CvFont font;
	double hScale = 1.0, vScale = 2.0;
	cvInitFont(&font, CV_FONT_HERSHEY_SIMPLEX | CV_FONT_ITALIC, hScale, vScale, 1.0, lineWith);
	cvPutText(pImgIpI, "Hello OpenCV ? ", cvPoint(320, 240), &font, cvScalar(255, 100, 100));

	// show image to window 
	cvShowImage("20157135_sangwoo", pImgIpI);

	// wating keyboard input
	cvWaitKey(0);

	//freeing image 
	cvReleaseImage(&pImgIpI);

	//close window 

	cvDestroyWindow("20157135 SANGWOO");

	return 0;

}



*/
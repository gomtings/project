//OpenCV incldes

#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>

/*
int main(int argc, char *argv[]) {
	const char * img_file_name = "E:/영상처리/tiger.jpg";
	const char * win_name_in = "Original image";
	const char * win_name_out = "Processed image";
	const char * win_name_out2 = "Processed image2";
	const char * win_name_out3 = "Processed image3";
	IplImage *pImgIpI_in = 0, *pImgIpI_out, *pImgIpI_out2, *pImgIpI_out3;
	//load the original image 
	if ((pImgIpI_in = cvLoadImage(img_file_name)) == NULL) { //영상 이미지 불러오기 
		printf("Can 't load the image : %s\n", img_file_name);
		return -1;

	}
	//copy image 
	pImgIpI_out = cvCloneImage(pImgIpI_in);
	pImgIpI_out2 = cvCloneImage(pImgIpI_in);
	pImgIpI_out3 = cvCloneImage(pImgIpI_in);

	//create window 

	cvNamedWindow(win_name_in, CV_WINDOW_AUTOSIZE);
	cvNamedWindow(win_name_out, CV_WINDOW_AUTOSIZE);
	cvNamedWindow(win_name_out2, CV_WINDOW_AUTOSIZE);
	cvNamedWindow(win_name_out3, CV_WINDOW_AUTOSIZE);

	//reverse image 

	cvFlip(pImgIpI_in, pImgIpI_out, 0);
	cvFlip(pImgIpI_in, pImgIpI_out2, 1);
	cvFlip(pImgIpI_in, pImgIpI_out3, -1);

	//show image
	cvShowImage(win_name_in, pImgIpI_in);
	cvShowImage(win_name_out, pImgIpI_out);
	cvShowImage(win_name_out2, pImgIpI_out2);
	cvShowImage(win_name_out3, pImgIpI_out3);

	//waiting keyboard input
	cvWaitKey(0);

	// save image 

	cvSaveImage("E:/영상처리/Processed.jpg", pImgIpI_out);// 영상 처리 결과 파일에 저장 

	// freeing image 

	cvReleaseImage(&pImgIpI_in);
	cvReleaseImage(&pImgIpI_out);
	cvReleaseImage(&pImgIpI_out2);
	cvReleaseImage(&pImgIpI_out3);

	// close the window

	cvDestroyWindow(win_name_in);
	cvDestroyWindow(win_name_out);
	cvDestroyWindow(win_name_out2);
	cvDestroyWindow(win_name_out3);

	return 0;
}
*/
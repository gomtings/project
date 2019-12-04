#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>
/*
int main(int argc, char *argv[]) {
	IplImage *pImgIpI_in = 0, *pImgIpI_out, *pImgIpI_out2, *pImgIpI_out3;
	const char * img_file_name = "E:/영상처리/tiger.jpg";
	const char * win_name_in = "20157135 Origin image";
	const char * win_name_out = "20157135 Separation_Blue";
	const char * win_name_out2 = "20157135 Separation_Green";
	const char * win_name_out3 = "20157135 Separation_Red";
	if ((pImgIpI_in = cvLoadImage(img_file_name)) == NULL) { //영상 이미지 불러오기 
		printf("Can 't load the image : %s\n", img_file_name);
		return -1;
	}
	pImgIpI_out = cvCloneImage(pImgIpI_in); // 초기화
	pImgIpI_out2 = cvCloneImage(pImgIpI_in);
	pImgIpI_out3 = cvCloneImage(pImgIpI_in);

	cvNamedWindow(win_name_in, CV_WINDOW_AUTOSIZE);
	cvNamedWindow(win_name_out, CV_WINDOW_AUTOSIZE);
	cvNamedWindow(win_name_out2, CV_WINDOW_AUTOSIZE);
	cvNamedWindow(win_name_out3, CV_WINDOW_AUTOSIZE);

	int step = pImgIpI_in->widthStep;
	int channels = pImgIpI_in->nChannels;
	int numrow = pImgIpI_in->height;
	int numcol = pImgIpI_in->width;
	unsigned char *pImgData1 = (unsigned char *)pImgIpI_out->imageData; // 정렬 되지 않은 전체에 대한 포인터 
	unsigned char *pImgData2 = (unsigned char *)pImgIpI_out2->imageData; // 정렬 되지 않은 전체에 대한 포인터
	unsigned char *pImgData3 = (unsigned char *)pImgIpI_out3->imageData; // 정렬 되지 않은 전체에 대한 포인터
	
	for (int r = 0;r < numrow;r++) {
		for (int c = 0;c < numcol;c++) {
			pImgData1[r * step + c * channels] = pImgData1[r * step + c * channels];
			pImgData1[r * step + c * channels + 1] = 0; //2 ,4 == 그린
			pImgData1[r * step + c * channels + 2] = 0; 
		}
	}
	for (int r = 0;r < numrow;r++) {
		for (int c = 0;c < numcol;c++) {
			pImgData2[r * step + c * channels] = pImgData2[r * step + c * channels];
			pImgData2[r * step + c * channels + 0] = 0;
			pImgData2[r * step + c * channels + 2] = 0; //2 ,4 == 그린
		}
	}
	for (int r = 0;r < numrow;r++) {
		for (int c = 0;c < numcol;c++) {
			pImgData3[r * step + c * channels] = pImgData3[r * step + c * channels];
			pImgData3[r * step + c * channels + 0] = 0;
			pImgData3[r * step + c * channels + 4] = 0;
		}
	}

	cvShowImage(win_name_in, pImgIpI_in);
	cvShowImage(win_name_out, pImgIpI_out);
	cvShowImage(win_name_out2, pImgIpI_out2);
	cvShowImage(win_name_out3, pImgIpI_out3);

	cvWaitKey(0);

	cvSaveImage("E:/영상처리/Separation_Blue.jpg", pImgIpI_out);// 영상 처리 결과 파일에 저장
	cvSaveImage("E:/영상처리/Separation_Green.jpg", pImgIpI_out2);// 영상 처리 결과 파일에 저장
	cvSaveImage("E:/영상처리/Separation_Red.jpg", pImgIpI_out3);// 영상 처리 결과 파일에 저장

	cvReleaseImage(&pImgIpI_in);  // 메모리 해제 
	cvReleaseImage(&pImgIpI_out);
	cvReleaseImage(&pImgIpI_out2);
	cvReleaseImage(&pImgIpI_out3);

	cvDestroyWindow(win_name_in);  // 윈도우 해제 
	cvDestroyWindow(win_name_out);
	cvDestroyWindow(win_name_out2);
	cvDestroyWindow(win_name_out3);

	return 0;

}*/
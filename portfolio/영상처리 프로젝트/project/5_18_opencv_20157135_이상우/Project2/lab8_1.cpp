#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>
/*
int main(int argc, char *argv[]) {
	IplImage *pImgIpI_in = 0, *pImgIpI_out;
	const char * img_file_name = "E:/����ó��/tiger.jpg";
	const char * win_name_in = "20157135 Origin image";
	const char * win_name_out = "20157135 Reverse image";
	if ((pImgIpI_in = cvLoadImage(img_file_name)) == NULL) { //���� �̹��� �ҷ����� 
		printf("Can 't load the image : %s\n", img_file_name);
		return -1;
	}
	pImgIpI_out = cvCloneImage(pImgIpI_in);

	cvNamedWindow(win_name_in, CV_WINDOW_AUTOSIZE);
	cvNamedWindow(win_name_out, CV_WINDOW_AUTOSIZE);

	int step = pImgIpI_out->widthStep;
	int channels = pImgIpI_out->nChannels;
	int numrow = pImgIpI_out->height;
	int numcol = pImgIpI_out->width;
	unsigned char *pImgData = (unsigned char *)pImgIpI_out->imageData; // ���� ���� ���� ��ü�� ���� ������ 

	for (int r = 0;r < numrow;r++)
		for (int c = 0;c < numcol;c++)
			for (int k = 0;k < channels;k++)
				pImgData[r*step + c*channels + k] = 255 - pImgData[r*step + c*channels + k];

	cvShowImage(win_name_in, pImgIpI_in);
	cvShowImage(win_name_out, pImgIpI_out);

	cvWaitKey(0);

	cvSaveImage("E:/����ó��/imageReverse.jpg", pImgIpI_out);// ���� ó�� ��� ���Ͽ� ���� 

	cvReleaseImage(&pImgIpI_in);
	cvReleaseImage(&pImgIpI_out);

	cvDestroyWindow(win_name_in);
	cvDestroyWindow(win_name_out);

	return 0;

}*/
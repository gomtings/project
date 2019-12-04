#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>
/*
int main(int argc, char *argv[]) {
	IplImage *pImgIpI_in = 0, *pImgIpI_out, *pImgIpI_out2, *pImgIpI_out3;
	const char * img_file_name = "E:/����ó��/tiger.jpg";
	const char * win_name_in = "20157135 Origin image";
	const char * win_name_out = "20157135 Separation_Blue";
	const char * win_name_out2 = "20157135 Separation_Green";
	const char * win_name_out3 = "20157135 Separation_Red";
	if ((pImgIpI_in = cvLoadImage(img_file_name)) == NULL) { //���� �̹��� �ҷ����� 
		printf("Can 't load the image : %s\n", img_file_name);
		return -1;
	}
	pImgIpI_out = cvCloneImage(pImgIpI_in); // �ʱ�ȭ
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
	unsigned char *pImgData1 = (unsigned char *)pImgIpI_out->imageData; // ���� ���� ���� ��ü�� ���� ������ 
	unsigned char *pImgData2 = (unsigned char *)pImgIpI_out2->imageData; // ���� ���� ���� ��ü�� ���� ������
	unsigned char *pImgData3 = (unsigned char *)pImgIpI_out3->imageData; // ���� ���� ���� ��ü�� ���� ������
	
	for (int r = 0;r < numrow;r++) {
		for (int c = 0;c < numcol;c++) {
			pImgData1[r * step + c * channels] = pImgData1[r * step + c * channels];
			pImgData1[r * step + c * channels + 1] = 0; //2 ,4 == �׸�
			pImgData1[r * step + c * channels + 2] = 0; 
		}
	}
	for (int r = 0;r < numrow;r++) {
		for (int c = 0;c < numcol;c++) {
			pImgData2[r * step + c * channels] = pImgData2[r * step + c * channels];
			pImgData2[r * step + c * channels + 0] = 0;
			pImgData2[r * step + c * channels + 2] = 0; //2 ,4 == �׸�
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

	cvSaveImage("E:/����ó��/Separation_Blue.jpg", pImgIpI_out);// ���� ó�� ��� ���Ͽ� ����
	cvSaveImage("E:/����ó��/Separation_Green.jpg", pImgIpI_out2);// ���� ó�� ��� ���Ͽ� ����
	cvSaveImage("E:/����ó��/Separation_Red.jpg", pImgIpI_out3);// ���� ó�� ��� ���Ͽ� ����

	cvReleaseImage(&pImgIpI_in);  // �޸� ���� 
	cvReleaseImage(&pImgIpI_out);
	cvReleaseImage(&pImgIpI_out2);
	cvReleaseImage(&pImgIpI_out3);

	cvDestroyWindow(win_name_in);  // ������ ���� 
	cvDestroyWindow(win_name_out);
	cvDestroyWindow(win_name_out2);
	cvDestroyWindow(win_name_out3);

	return 0;

}*/
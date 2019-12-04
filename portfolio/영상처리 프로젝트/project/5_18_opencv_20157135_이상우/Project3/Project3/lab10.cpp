#include <opencv\cv.h>
#include <opencv\cxcore.h>
#include <opencv\cvaux.h>
#include <opencv\highgui.h>

void video_capture(void);
int face_detect(int, char **);
void _face_detect_and_draw(IplImage *);

static CvMemStorage *storage = 0;
static CvHaarClassifierCascade *cascade = 0;

/*
int main(int argc, char *argv[]) {
// basic menu implementaion
int menu = 0;
printf("function select : \n1. video capture\n2. face_detect\n");
scanf("%d", &menu);

switch (menu) {
case 1:
video_capture();
break;
case 2:
face_detect(argc, argv);
break;
default:
printf("what?");
break;
}
return 0;
}
*/

void video_capture(void)
{
	IplImage *img;
	CvCapture *capture;
	CvVideoWriter *writer;
	int key;

	cvNamedWindow("20165156_捞清快_Video", CV_WINDOW_AUTOSIZE);
	capture = cvCaptureFromCAM(0);
	img = cvQueryFrame(capture);

	writer = cvCreateVideoWriter("Result.avi", CV_FOURCC('D', 'I', 'V', 'X'), 30, cvSize(img->width, img->height), 1);

	while (!0) {
		img = cvQueryFrame(capture);
		cvShowImage("20165156_捞清快_Video", img);
		cvWriteFrame(writer, img);
		key = cvWaitKey(30);
		if (key == (char)27) {
			break;
		}
	}

	cvReleaseVideoWriter(&writer);
	cvReleaseCapture(&capture);
	cvDestroyWindow("20165156_捞清快_Video");
}

int face_detect(int argc, char **argv)
{
	CvCapture *capture = 0;		// for video capture
	IplImage *frame;
	int optlen = strlen("--cascade=");
	const char *input_name;
	const char *cascade_name;

	// cascade file including
	// 1. user define
	// 2. using default cascade xml files
	if (argc > 1 && strncmp(argv[1], "--cascade=", optlen) == 0) {
		cascade_name = argv[1] + optlen;
		input_name = argc > 2 ? argv[2] : 0;
	}
	else {
		cascade_name = "C:/data/haarcascades/haarcascade_frontalface_alt2.xml";
		input_name = argc > 1 ? argv[1] : 0;
	}

	// open cascade files and check validation
	if (!(cascade = (CvHaarClassifierCascade *)cvLoad(cascade_name, 0, 0, 0))) {
		fprintf(stderr, "ERROR: Could'n load classifier cascade\n");
		fprintf(stderr, "Usage: facedetect --cascade=\"<cascade_path>\" [filename|camera_index]\n");
	}

	storage = cvCreateMemStorage(0);
	if (!input_name || (isdigit(input_name[0]) && input_name[1] == '\0')) {
		capture = cvCaptureFromCAM(!input_name ? 0 : input_name[0] - '0');
	}
	else {
		capture = cvCaptureFromCAM(0);
	}

	cvNamedWindow("20165156_捞清快_Result", 1);

	while (!0) {
		if (!(frame = cvQueryFrame(capture))) {
			break;
		}
		_face_detect_and_draw(frame);
		if (cvWaitKey(10) >= 0) {
			break;
		}
	}

	cvReleaseCapture(&capture);
	cvDestroyWindow("20165156_捞清快_Result");
	return 0;
}
void _face_detect_and_draw(IplImage *img) {
	static CvScalar colors[] = { {{0, 0, 255}}, {{0, 128, 255}}, {{0, 255, 255}}, {{0, 255, 0}}, {{255, 128, 0}}, {{255, 255, 0}}, {{255, 0, 0}}, {{255, 0, 255}} };
	double scale = 2.0;

	IplImage *gray = cvCreateImage(cvSize(img->width, img->height), 8, 1);
	IplImage *small_Img = cvCreateImage(cvSize(cvRound(img->width / scale), cvRound(img->height / scale)), 8, 1);

	cvCvtColor(img, gray, CV_BGR2GRAY);
	cvResize(gray, small_Img, CV_INTER_LINEAR);
	cvClearMemStorage(storage);

	if (cascade) {
		double t = (double)cvGetTickCount();
		CvSeq *faces = cvHaarDetectObjects(small_Img, cascade, storage, 1.1, 2, 0, cvSize(30, 30), cvSize(300, 300));
		t = (double)cvGetTickCount() - t;
		printf("Detection time : %gms\n", t / ((double)cvGetTickFrequency() * 1000));
		for (int i = 0; i < (faces ? faces->total : 0); i++) {
			CvRect *r = (CvRect *)cvGetSeqElem(faces, i);
			CvPoint center;
			center.x = cvRound((r->x + r->width * 0.5) * scale);
			center.y = cvRound((r->y + r->width * 0.5) * scale);
			int radius = cvRound((r->width + r->height) * 0.25 * scale);
			cvCircle(img, center, radius, colors[i & 8], 3, 8, 0);
		}
	}

	cvShowImage("20165156_捞清快_Result", img);
	cvReleaseImage(&gray);
	cvReleaseImage(&small_Img);
}
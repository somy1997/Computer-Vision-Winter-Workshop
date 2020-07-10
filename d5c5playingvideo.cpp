#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <math.h>
#define krnl 3
#define THRESHOLD 127
#define max 100

using namespace cv;
using namespace std;

/*void d(String windowname, Mat image)
{
	namedWindow(windowname, CV_WINDOW_AUTOSIZE);
	imshow(windowname, image);
}

Mat r(String filename, int type = 1)
{
	if (type)
		return imread(filename);
	else
		return imread(filename, CV_LOAD_IMAGE_GRAYSCALE);
}

Mat hgs(Mat img)
{
	Mat imggs1(img.rows, img.cols, CV_8UC1, 255);  //human eye
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			imggs1.at<uchar>(i, j) = img.at<Vec3b>(i, j)[0] * 0.114 + img.at<Vec3b>(i, j)[1] * 0.587 + img.at<Vec3b>(i, j)[2] * 0.299;
		}
	}
	return imggs1;
}

int main()
{
	Mat frame;
	namedWindow("Video");
	VideoCapture vid("vid.mp4");
	cout << vid.get(CV_CAP_PROP_FRAME_COUNT) << endl;
	for (; vid.get(CV_CAP_PROP_POS_FRAMES) < vid.get(CV_CAP_PROP_FRAME_COUNT); )
	{
		vid >> frame;
		cout << vid.get(CV_CAP_PROP_POS_FRAMES) << endl;
		Mat temp = hgs(frame);
		d("Video", temp);
		int ikey = waitKey(2);
		if (ikey == 27)
			break;
	}
	VideoCapture vid1("vid.mp4");
	cout << vid1.get(CV_CAP_PROP_FRAME_COUNT) << endl;
	while(1)
	{
		if (&vid1 == NULL)
			break;
		vid1 >> frame;
		cout << vid1.get(CV_CAP_PROP_POS_FRAMES) << endl;
		Mat temp = hgs(frame);
		d("Video", temp);
		int ikey = waitKey(2);
		if (ikey == 27)
			break;
	}
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
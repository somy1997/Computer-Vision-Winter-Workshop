#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>

using namespace cv;
using namespace std;

/*Mat img;

void d(String windowname, Mat image)
{
	namedWindow(windowname, CV_WINDOW_NORMAL);
	imshow(windowname, image);
}

Mat r(String filename)
{
	return imread(filename);
}

Mat hgs(Mat img)
{
	Mat img1(img.rows, img.cols, CV_8UC1, 255);  //human eye
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			img1.at<uchar>(i, j) = img.at<Vec3b>(i, j)[0] * 0.114 + img.at<Vec3b>(i, j)[1] * 0.587 + img.at<Vec3b>(i, j)[2] * 0.299;
		}
	}
	return img1;
}

int threshod(Mat img1)
{
	int A[256];
	int n = img1.rows*img1.cols, temp = 0;
	for (int k = 0; k < 256; k++)
	{
		A[k] = 0;
		for (int i = 0; i < img1.rows; i++)
		for (int j = 0; j < img1.cols; j++)
		if (k == img1.at<uchar>(i, j))
			A[k]++;
		temp += A[k];
		if (temp >= n / 2)
			return k;
	}
}

void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
	if (event == EVENT_LBUTTONDOWN)
	{
		int r = img.at<Vec3b>(y, x)[2];
		int g = img.at<Vec3b>(y, x)[1];
		int b = img.at<Vec3b>(y, x)[0];
		cout << r << endl << g << endl << b << endl << b*0.114 + g*0.587 + r*0.299 << endl;
	}

}

void displayRGB()
{
	namedWindow("Display RGB", CV_WINDOW_AUTOSIZE);
	d("Display RGB", img);
	setMouseCallback("Display RGB", CallBackFunc, NULL);
	cvWaitKey(0);
}

int main()
{
	img = r("PS2.jpg");
	displayRGB();
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
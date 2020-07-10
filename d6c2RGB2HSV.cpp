#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>

using namespace cv;
using namespace std;

/*void d(String windowname, Mat image)
{
	namedWindow(windowname, CV_WINDOW_AUTOSIZE);
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

void binary(Mat img)
{
	Mat img1(img.rows, img.cols, CV_8UC3, 255);
	Mat img2(img.rows, img.cols, CV_8UC1, 255);
	cvtColor(img, img1, CV_RGB2HSV);
	int hmax=0,hmin=0,smax=0,smin=0,vmax=0,vmin=0;
	d("Original Image", img);
	namedWindow("Binary Image", CV_WINDOW_AUTOSIZE);
	createTrackbar("HMAX", "Binary Image", &hmax, 180);
	createTrackbar("HMIN", "Binary Image", &hmin, 180);
	createTrackbar("SMAX", "Binary Image", &smax, 255);
	createTrackbar("SMIN", "Binary Image", &smin, 255);
	createTrackbar("VMAX", "Binary Image", &vmax, 255);
	createTrackbar("VMIN", "Binary Image", &vmin, 255);
	while (1)
	{
		for (int i = 0; i < img1.rows; i++)
		{
			for (int j = 0; j < img1.cols; j++)
			{
				if (img1.at<Vec3b>(i, j)[0]>=hmin && img1.at<Vec3b>(i, j)[0]<=hmax)
				if (img1.at<Vec3b>(i, j)[1]>=smin && img1.at<Vec3b>(i, j)[1]<=smax)
				if (img1.at<Vec3b>(i, j)[2] >= vmin && img1.at<Vec3b>(i, j)[2] <= vmax)
				{
					img2.at<uchar>(i, j) = 255;
					continue;
				}
				img2.at<uchar>(i, j) = 0;
			}
		}
		d("Binary Image", img2);
		int ikey = waitKey(50);
		if (ikey == 27)
			break;
	}
}

int main()
{
	Mat img = r("car.jpg");
	binary(img);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
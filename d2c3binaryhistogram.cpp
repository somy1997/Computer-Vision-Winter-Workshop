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
	int n = img1.rows*img1.cols,temp=0;
	for (int k = 0; k < 256; k++)
	{
		A[k] = 0;
		for (int i = 0; i < img1.rows;i++)
		for (int j = 0; j < img1.cols;j++)
		if (k == img1.at<uchar>(i, j))
			A[k]++;
		temp += A[k];
		if (temp >= n / 2)
			return k;
	}
}

Mat binary(Mat img1)
{
	Mat img2(img1.rows, img1.cols, CV_8UC1, 255);  //avg
	int THRESHOLD = threshod(img1);
	for (int i = 0; i < img1.rows; i++)
	{
		for (int j = 0; j < img1.cols; j++)
		{
			if (img1.at<uchar>(i, j)>THRESHOLD)
				img2.at<uchar>(i, j) = 255;
			else
				img2.at<uchar>(i, j) = 0;
		}
	}
	return img2;
}

int main()
{
	Mat img = r("img.jpg");
	Mat img1 = hgs(img);
	Mat img2 = binary(img1);
	d("RGB image", img);
	d("Gray scale image", img1);
	d("Binary image", img2);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
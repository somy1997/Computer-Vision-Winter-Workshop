#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <math.h>
#define krnl 3

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

int count(Mat img1,int k)
{
	int A = 0;
	for (int i = 0; i < img1.rows; i++)
	for (int j = 0; j < img1.cols; j++)
	if (k == img1.at<uchar>(i, j))
		A++;
	return A;
}

Mat histogram(Mat img)
{
	int maxrows = 0;
	Mat img1(img.rows*img.cols,256,CV_8UC1,255);
	for (int j = 0; j < img1.cols; j++)
	{
		int i;
		int A = count(img, j);
		if (maxrows < A)
			maxrows = A;
		for (i = 0; i < A ; i++)
			img1.at<uchar>(img1.rows - 1 - i, j) = 0;
		for (; i < img1.rows;i++)
			img1.at<uchar>(img1.rows - 1 - i, j) = 255;
	}
	if (maxrows <= 720)
	{
		Mat img2(maxrows, 256, CV_8UC1, 255);
		for (int j = 0; j < img2.cols; j++)
		{
			for (int i = 0; i < img2.rows; i++)
				img2.at<uchar>(img2.rows - 1 - i, j) = img1.at<uchar>(img1.rows - 1 - i, j);
		}
		return img2;
	}
	else
	{
		Mat img2(maxrows/100, 256, CV_8UC1, 255);
		for (int j = 0; j < img2.cols; j++)
		{
			int temp = 0,i;
			for (i = 0; i < img1.rows; i++)
			if (img1.at<uchar>(img1.rows - 1 - i, j) == 0)
				temp++;
			else
				break;
			for (i = 0; i < temp/100; i++)
				img2.at<uchar>(img2.rows - 1 - i, j) = 0;
			for (; i < img2.rows; i++)
				img2.at<uchar>(img2.rows - 1 - i, j) = 255;
		}
		return img2;
	}
}

int main()
{
	int th = 127;
	Mat img = r("img.jpg");
	d("Original image", img);
	Mat img1 = hgs(img);
	d("Grey Scale Image for Human Eye",img1);
	Mat img2 = histogram(img1);
	d("Histogram for Image",img2);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
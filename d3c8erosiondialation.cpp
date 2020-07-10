#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <math.h>
#define THRESHOLD 127
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
	namedWindow("Grey Scale Image for human eye", CV_WINDOW_AUTOSIZE);
	imshow("Grey Scale Image for human eye", imggs1);
	return imggs1;
}

Mat binary(Mat img1)
{
	Mat imggs2(img1.rows, img1.cols, CV_8UC1, 255);  //avg
	for (int i = 0; i < img1.rows; i++)
	{
		for (int j = 0; j < img1.cols; j++)
		{
			if (img1.at<uchar>(i, j)>THRESHOLD)
				imggs2.at<uchar>(i, j) = 255;
			else
				imggs2.at<uchar>(i, j) = 0;
		}
	}
	d("Binary Image", imggs2);
	return imggs2;
}

int erosionpt(Mat img, int i, int j)
{
	if (img.at<uchar>(i, j) == 255)
	{
		for (int i1 = i - krnl / 2; i1 <= i + krnl / 2; i1++)
		{
			for (int j1 = j - krnl / 2; j1 <= j + krnl / 2; j1++)
			{
				if (i1 < 0 || i1 >= img.rows || j1 < 0 || j1 >= img.cols)
					continue;
				if (img.at<uchar>(i1, j1) == 0)
					return 0;
			}
		}
	}
	return img.at<uchar>(i, j);
}

Mat erosion(Mat img)
{
	Mat img1 = img.clone();
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<uchar>(i, j) = erosionpt(img, i, j);
	}
	return img1;
}

int dialationpt(Mat img, int i, int j)
{
	if (img.at<uchar>(i, j) == 0)
	{
		for (int i1 = i - krnl / 2; i1 <= i + krnl / 2; i1++)
		{
			for (int j1 = j - krnl / 2; j1 <= j + krnl / 2; j1++)
			{
				if (i1 < 0 || i1 >= img.rows || j1 < 0 || j1 >= img.cols)
					continue;
				if (img.at<uchar>(i1, j1) == 255)
					return 255;
			}
		}
	}
	return img.at<uchar>(i, j);
}

Mat dialation(Mat img)
{
	Mat img1 = img.clone();
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<uchar>(i, j) = dialationpt(img, i, j);
	}
	return img1;
}

int checkbackBorW(Mat img)
{
	int sum = 0;
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		if (img.at<uchar>(i, j) == 0)
			sum++;
	}
	if (sum >= img.rows*img.cols / 2)
		return 0;
	return 255;
}

int main()
{
	Mat img = r("img.jpg");
	d("Original image", img);
	Mat img1 = hgs(img);
	Mat img2 = binary(img1);
	if (!checkbackBorW(img2))
	{
		Mat img3 = erosion(img2);
		d("1.After Erosion", img3);
		Mat img4 = dialation(img3);
		d("2.After Dialation", img4);
	}
	else
	{
		Mat img3 = dialation(img2);
		d("1.After Dialation", img3);
		Mat img4 = erosion(img3);
		d("2.After Erosion", img4);
	}
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
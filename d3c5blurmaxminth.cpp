#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
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

int ptedgedet(Mat img, int i, int j,int th)
{
	int max = 0, min = 255;
	for (int i1 = i - krnl / 2; i1 <= i + krnl / 2; i1++)
	{
		for (int j1 = j - krnl / 2; j1 <= j + krnl / 2; j1++)
		if (i1 < 0 || i1 >= img.rows || j1 < 0 || j1 >= img.cols)
			continue;
		else
		{
			if (img.at<uchar>(i1, j1)>max)
				max = img.at<uchar>(i1, j1);
			if (img.at<uchar>(i1, j1)<min)
				min = img.at<uchar>(i1, j1);
		}
	}
	if (max - min < th)
		return 0;
	else 
		return 255;
}

Mat edgedet(Mat img,int th)
{
	Mat img1 = img.clone();
	d("Original Image", img);
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<uchar>(i, j) = ptedgedet(img, i, j, th);
	}
	d("Edge Detection Image", img1);
	return img1;
}

int main()
{
	Mat img = r("img.jpg",0);
	Mat img1 = img.clone();
	int th = 0;
	namedWindow("Edge Detection Image", CV_WINDOW_AUTOSIZE);
	createTrackbar("Tolerance", "Edge Detection Image", &th, 255);
	while (1)
	{
		img1=edgedet(img,th);
		int ikey = waitKey(50);
		if (ikey == 27)
			break;
	}
	imwrite("img1.jpg", img1);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
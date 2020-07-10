#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#define krnl 3

using namespace cv;
using namespace std;

/*int *G;

void d(String windowname, Mat image)
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

int blurptswted(Mat img, int i, int j)
{
	int n = 0;
	float sum = 0;
	for (int i1 = i - krnl / 2; i1 <= i + krnl / 2; i1++)
	{
		for (int j1 = j - krnl / 2; j1 <= j + krnl / 2; j1++, n++)
		if (i1 < 0 || i1 >= img.rows || j1 < 0 || j1 >= img.cols)
			continue;
		else
		{
			sum += img.at<uchar>(i1, j1) * G[n];
		}
	}
	if (sum < 0)
		sum = 0;
	else if (sum>255)
		sum = 255;
	return sum;
}

void blurswted(Mat img)
{
	Mat img1 = img.clone();
	d("Original Image", img);
	int G1[9] = { -1, -2, -1, 0, 0, 0, 1, 2, 1 };
	G = G1;
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<uchar>(i, j) = blurptswted(img, i, j);
	}
	d("Sobel Y Weighted Blurred Image", img1);
	int G2[9] = { -1, 0, 1, -2, 0, 2, -1, 0, 1 };
	G = G2;
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
	img1.at<uchar>(i, j) = blurptswted(img, i, j);
	}
	d("Sobel X Weighted Blurred Image", img1);
}

int main()
{
	Mat img = r("img.jpg",0);
	blurswted(img);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
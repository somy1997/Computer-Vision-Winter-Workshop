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

int blurptmean(Mat img, int i, int j, int a,int krnl)
{
	int n = 0, sum = 0;
	for (int i1 = i - krnl / 2; i1 <= i + krnl / 2; i1++)
	if (i1 < 0 || i1 >= img.rows)
		continue;
	else
	{
		for (int j1 = j - krnl / 2; j1 <= j + krnl / 2; j1++)
		if (j1 < 0 || j1 >= img.cols)
			continue;
		else
		{
			n++;
			sum += img.at<Vec3b>(i1, j1)[a];
		}
	}
	return sum / n;
}

void blurmean(Mat img,int krnl)
{
	Mat img1 = img.clone();
	d("Original Image", img);
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<Vec3b>(i, j)[0] = blurptmean(img, i, j, 0,krnl);
		img1.at<Vec3b>(i, j)[1] = blurptmean(img, i, j, 1,krnl);
		img1.at<Vec3b>(i, j)[2] = blurptmean(img, i, j, 2,krnl);
	}
	d("Mean Blurred Image", img1);
}

int blurptmedian(Mat img, int i, int j, int a,int krnl)
{
	int n = 0, min, pivot, A[21*21];
	for (int i1 = i - krnl / 2; i1 <= i + krnl / 2; i1++)
	if (i1 < 0 || i1 >= img.rows)
		continue;
	else
	{
		for (int j1 = j - krnl / 2; j1 <= j + krnl / 2; j1++)
		if (j1 < 0 || j1 >= img.cols)
			continue;
		else
		{
			A[n++] = img.at<Vec3b>(i1, j1)[a];
		}
	}
	for (int i1 = 0; i1 <= n / 2; i1++)
	{
		min = A[i1];
		pivot = i1;
		for (int j1 = i1 + 1; j1 < n; j1++)
		{
			if (A[j1] < min)
			{
				min = A[j1];
				pivot = j1;
			}
		}
		A[pivot] = A[i1];
		A[i1] = min;
	}
	return A[n / 2];
}

void blurmedian(Mat img,int krnl)
{
	Mat img1 = img.clone();
	d("Original Image", img);
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<Vec3b>(i, j)[0] = blurptmedian(img, i, j, 0,krnl);
		img1.at<Vec3b>(i, j)[1] = blurptmedian(img, i, j, 1,krnl);
		img1.at<Vec3b>(i, j)[2] = blurptmedian(img, i, j, 2,krnl);
	}
	d("Median Blurred Image", img1);
}

int main()
{
	Mat img = r("img.jpg");
	int a = 0, b = 0;
	namedWindow("Mean Blurred Image", CV_WINDOW_AUTOSIZE);
	namedWindow("Median Blurred Image", CV_WINDOW_AUTOSIZE);
	createTrackbar("Tolerance", "Mean Blurred Image", &a, 10);
	createTrackbar("Tolerance", "Median Blurred Image", &b, 10);
	while (1)
	{
		blurmean(img, 2*a+1);
		blurmedian(img, 2*b+1);
		int ikey = waitKey(50);
		if (ikey == 27)
			break;
	}
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
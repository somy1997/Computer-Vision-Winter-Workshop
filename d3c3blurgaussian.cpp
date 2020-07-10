#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#define krnl 3

using namespace cv;
using namespace std;

/*float G[9] = {0.0625,0.125,0.0625,0.125,0.250,0.125,0.0625,0.125,0.0625};

void d(String windowname, Mat image)
{
	namedWindow(windowname, CV_WINDOW_AUTOSIZE);
	imshow(windowname, image);
}

Mat r(String filename,int type=1)
{
	if (type)
		return imread(filename);
	else
		return imread(filename, CV_LOAD_IMAGE_GRAYSCALE);
}

int blurptgwted(Mat img, int i, int j, int a)
{
	int n = 0; 
	float sum = 0, sumwt = 0;
	for (int i1 = i - krnl / 2; i1 <= i + krnl / 2; i1++)
	{
		for (int j1 = j - krnl / 2; j1 <= j + krnl / 2; j1++,n++)
		if (i1 < 0 || i1>=img.rows || j1 < 0 || j1 >= img.cols)
			continue;
		else
		{
			sum += img.at<Vec3b>(i1, j1)[a]*G[n];
			sumwt += G[n];
		}
	}
	return (int)(sum / sumwt);
}

void blurgwted(Mat img)
{
	Mat img1 = img.clone();
	d("Original Image", img);
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<Vec3b>(i, j)[0] = blurptgwted(img, i, j, 0);
		img1.at<Vec3b>(i, j)[1] = blurptgwted(img, i, j, 1);
		img1.at<Vec3b>(i, j)[2] = blurptgwted(img, i, j, 2);
	}
	d("Gaussian Weighted Blurred Image", img1);
}

int main()
{
	Mat img = r("img.jpg");
	blurgwted(img);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
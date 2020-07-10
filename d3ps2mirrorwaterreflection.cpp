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

Mat fun1(Mat img)
{
	Mat img1 = img.clone();
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<Vec3b>(img.rows - 1 - i, j)[0] = img.at<Vec3b>(i, j)[0];
		img1.at<Vec3b>(img.rows - 1 - i, j)[1] = img.at<Vec3b>(i, j)[1];
		img1.at<Vec3b>(img.rows - 1 - i, j)[2] = img.at<Vec3b>(i, j)[2];
	}
	return img1;
}

Mat fun2(Mat img)
{
	Mat img1 = img.clone();
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		img1.at<Vec3b>(i, img.cols - 1 - j)[0] = img.at<Vec3b>(i, j)[0];
		img1.at<Vec3b>(i, img.cols - 1 - j)[1] = img.at<Vec3b>(i, j)[1];
		img1.at<Vec3b>(i, img.cols - 1 - j)[2] = img.at<Vec3b>(i, j)[2];
	}
	return img1;
}

int main()
{
	int th = 127;
	Mat img = r("img.jpg");
	d("Original image", img);
	Mat img1 = fun1(img);
	d("Water Reflection image", img1);
	Mat img2 = fun2(img);
	d("Mirror Reflection image", img2);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
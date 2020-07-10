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

void resize(Mat img)
{
	Mat img1(2 * img.rows, 2 * img.cols, CV_8UC3, 255), img2(img.rows / 2, img.cols / 2, CV_8UC3, 255);
	d("Original Image", img);
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
	{
		int a = img.at<Vec3b>(i, j)[2];
		int b = img.at<Vec3b>(i, j)[1];
		int c = img.at<Vec3b>(i, j)[0];
		img1.at<Vec3b>(2 * i, 2 * j)[2] = img1.at<Vec3b>(2 * i + 1, 2 * j)[2] = img1.at<Vec3b>(2 * i, 2 * j + 1)[2] = img1.at<Vec3b>(2 * i + 1, 2 * j + 1)[2] = a;
		img1.at<Vec3b>(2 * i, 2 * j)[1] = img1.at<Vec3b>(2 * i + 1, 2 * j)[1] = img1.at<Vec3b>(2 * i, 2 * j + 1)[1] = img1.at<Vec3b>(2 * i + 1, 2 * j + 1)[1] = b;
		img1.at<Vec3b>(2 * i, 2 * j)[0] = img1.at<Vec3b>(2 * i + 1, 2 * j)[0] = img1.at<Vec3b>(2 * i, 2 * j + 1)[0] = img1.at<Vec3b>(2 * i + 1, 2 * j + 1)[0] = c;
	}
	d("Double sized image", img1);
	for (int i = 0; i < img2.rows; i++)
	for (int j = 0; j < img2.cols; j++)
	{
		int a = img.at<Vec3b>(2 * i, 2 * j)[2] + img.at<Vec3b>(2 * i + 1, 2 * j)[2] + img.at<Vec3b>(2 * i, 2 * j + 1)[2] + img.at<Vec3b>(2 * i + 1, 2 * j + 1)[2];
		int b = img.at<Vec3b>(2 * i, 2 * j)[1] + img.at<Vec3b>(2 * i + 1, 2 * j)[1] + img.at<Vec3b>(2 * i, 2 * j + 1)[1] + img.at<Vec3b>(2 * i + 1, 2 * j + 1)[1];
		int c = img.at<Vec3b>(2 * i, 2 * j)[0] + img.at<Vec3b>(2 * i + 1, 2 * j)[0] + img.at<Vec3b>(2 * i, 2 * j + 1)[0] + img.at<Vec3b>(2 * i + 1, 2 * j + 1)[0];
		img2.at<Vec3b>(i, j)[2] = a / 4;
		img2.at<Vec3b>(i, j)[1] = b / 4;
		img2.at<Vec3b>(i, j)[0] = c / 4;
	}
	d("Half sized image", img2);
}

int main()
{
	Mat img = r("img.jpg");
	resize(img);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
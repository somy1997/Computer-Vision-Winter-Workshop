#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>

using namespace cv;
using namespace std;

/*void displayimage(Mat image, String windowname)
{
	imshow(windowname, image);
}

Mat readimage(String filename)
{
	return imread(filename);
}

void hgs(Mat img)
{
	Mat imggs1(img.rows, img.cols, CV_8UC1, 255);  //human eye
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			imggs1.at<uchar>(i, j) = img.at<Vec3b>(i, j)[0] * 0.114 + img.at<Vec3b>(i, j)[1] * 0.587 + img.at<Vec3b>(i, j)[2] * 0.299;
		}
	}
	namedWindow("Grey Scale for human eye", CV_WINDOW_AUTOSIZE);
	imshow("Grey Scale for human eye", imggs1);
}

void ags(Mat img)
{
	Mat imggs2(img.rows, img.cols, CV_8UC1, 255);  //avg
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			imggs2.at<uchar>(i, j) = (img.at<Vec3b>(i, j)[0] + img.at<Vec3b>(i, j)[1] + img.at<Vec3b>(i, j)[2]) / 3;
		}
	}
	namedWindow("Average Grey Scale", CV_WINDOW_AUTOSIZE);
	imshow("Average Grey Scale", imggs2);
}

int main()
{
	Mat img = imread("img.jpg", 1);
	namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
	imshow("Original Image", img);
	hgs(img);
	ags(img);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
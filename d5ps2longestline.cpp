#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <math.h>
#define krnl 3
#define THRESHOLD 40
#define pi 3.14

using namespace cv;
using namespace std;

/*vector<Point> b;

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

int isval(int i, int j, Mat img)
{
	if (i < 0 || i >= img.rows || j < 0 || j >= img.cols)
		return 0;
	return 1;
}

void putpt(int y, int x, Mat &img)
{
	for (int deg = 0; deg < 360; deg++)
	{
		float deg1 = deg*pi / 180;
		int r = x*cos(deg1) + y*sin(deg1);
		if (isval(r, deg, img))
		{
			if (img.at<uchar>(r, deg) < 255)
				img.at<uchar>(r, deg)++;
		}
	}
}

Mat rgraph(Mat img)
{
	Mat img1(sqrt(img.rows*img.rows + img.cols*img.cols), 360, CV_8UC1, 255);
	for (int i = 0; i < img1.rows; i++)
	{
		for (int j = 0; j < img1.cols; j++)
		{
			img1.at<uchar>(i, j) = 0;
		}
	}
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			if (img.at<uchar>(i, j) == 255)
			{
				putpt(i, j, img1);
			}
		}
	}
	return img1;
}

void recievept(int r, int deg, Mat img1,Mat img3)
{
	vector<Point> a;
	for (int y = 0; y < img3.rows; y++)
	{
		for (int x = 0; x < img3.cols; x++)
		{
			if (img1.at<uchar>(y, x) == 255)
			{
				float deg1 = deg*pi / 180;
				int r1 = x*cos(deg1) + y*sin(deg1);
				if (r1 == r)
				{
					Point p(x,y);
					a.push_back(p);
				}
			}
		}
	}
	if (b.size() < a.size())
	{
		b.clear();
		for (int i = 0; i < a.size(); i++)
		{
			b.push_back(a[i]);
		}
	}
	a.clear();
}

Mat linedetmax(Mat img1, Mat img2, int th)
{
	Mat img3 = img1.clone();
	for (int i = 0; i < img3.rows; i++)
	{
		for (int j = 0; j < img3.cols; j++)
		{
			img3.at<uchar>(i, j) = 0;
		}
	}
	for (int r = 0; r < img2.rows; r++)
	{
		for (int deg = 0; deg < img2.cols; deg++)
		{
			if (img2.at<uchar>(r, deg) > th)
			{
				recievept(r, deg, img1, img3);
			}
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		img3.at<uchar>(b[i].y, b[i].x) = 255;
	}
	return img3;
}

int main()
{
	Mat img = r("img.jpg");
	d("img", img);
	Mat img1;
	namedWindow("Canny Edge Detection Image");
	int min = 0, max = 0;
	createTrackbar("Lower Threshold", "Canny Edge Detection Image", &min, 255);
	createTrackbar("Upper Threshold", "Canny Edge Detection Image", &max, 255);
	while (1)
	{
		Canny(img, img1, min, max, krnl);
		d("Canny Edge Detection Image", img1);
		int ikey = waitKey(50);
		if (ikey == 27)
			break;
	}
	Mat img2 = rgraph(img1);
	d("R Graph", img2);
	namedWindow("Line Detection Image");
	int th = 40;
	createTrackbar("Threshold", "Line Detection Image", &th, 255);
	while (1)
	{
		Mat img3 = linedetmax(img1, img2, th);
		d("Line Detection Image", img3);
		int ikey = waitKey(50);
		if (ikey == 27)
			break;
	}
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
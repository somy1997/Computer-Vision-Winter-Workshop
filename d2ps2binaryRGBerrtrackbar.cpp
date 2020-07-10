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

void binary(Mat img, Mat img1)
{
	Mat img2(img1.rows, img1.cols, CV_8UC1, 255);  //avg
	int a = 0, b = 0, c = 0, e = 0;
	d("Original Image", img);
	d("Human Eye Gray Scale Image", img1);
	namedWindow("Search Colour", CV_WINDOW_AUTOSIZE);
	createTrackbar("Red", "Search Colour", &a, 255);
	createTrackbar("Green", "Search Colour", &b, 255);
	createTrackbar("Blue", "Search Colour", &c, 255);
	createTrackbar("Error", "Search Colour", &e, 255);
	while (1)
	{
		for (int i = 0; i < img.rows; i++)
		{
			for (int j = 0; j < img.cols; j++)
			{
				if ((a - e) <= img.at<Vec3b>(i, j)[2] && img.at<Vec3b>(i, j)[2] <= (a + e))
				if ((b - e) <= img.at<Vec3b>(i, j)[1] && img.at<Vec3b>(i, j)[1] <= (b + e))
				if ((c - e) <= img.at<Vec3b>(i, j)[0] && img.at<Vec3b>(i, j)[0] <= (c + e))
				{
					img2.at<uchar>(i, j) = 255;
					continue;
				}
				img2.at<uchar>(i, j) = 0;
			}
		}
		cout << a << endl << b << endl << c << endl << e << endl;
		d("Search Colour", img2);
		int ikey = waitKey(50);
		if (ikey == 27)
			break;
	}
}

int main()
{
	Mat img = r("img.jpg");
	Mat img1 = hgs(img);
	binary(img, img1);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
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

int main()
{
	Mat img = r("img.jpg");
	d("img", img);
	Mat img1;
	Canny(img, img1, 65, 105);
	d("img1", img1);
	vector<vector<Point>> cnt;
	vector<Vec4i> hrc;
	findContours(img1, cnt, hrc, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));
	for (int i = 0; i < cnt.size(); i++)
	{
		vector<Point> d;
		approxPolyDP(cnt[i], d, 3, 1);
		cout << d.size()<<endl;
	}
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
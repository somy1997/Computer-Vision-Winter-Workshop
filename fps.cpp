#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <math.h>

#define THRESHOLD 127
#define rbr 254
#define rbg 0
#define rbb 0
#define rdr 152
#define rdg 0
#define rdb 0
#define gbr 0
#define gbg 255
#define gbb 1
#define gdr 77
#define gdg 189
#define gdb 51

using namespace cv;
using namespace std;

/*long int xrb, yrb, crb, xrd, yrd, crd, xgb, ygb, cgb, xgd, ygd, cgd;

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



int main()
{
	VideoCapture vid("fps.avi");
	Mat img = imread("fps.jpg");
	vid >> img;
	d("img", img);
	Mat frame = img;
	Mat img1;
	Canny(img, img1, 65, 105);
	d("img1", img1);
	vector<vector<Point>> cnt;
	vector<Vec4i> hrc;
	vector<Point> cent;
	findContours(img1, cnt, hrc, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));
	for (int i = 0; i < cnt.size(); i++)
	{
		vector<Point> d;
		approxPolyDP(cnt[i], d, 3, 1);
		if (d.size>2)
		{
			cout << d.size() << endl;
			int isum = 0,jsum=0;
			for (int p = 0; p < d.size(); p++)
			{
				isum += d[p].y;
				jsum += d[p].x;
			}
			isum = isum / d.size();
			jsum = jsum / d.size();
			cent.push_back(Point(jsum,isum));
			i++;
		}
		//cout << d.size() << endl;
	}
	int n[12] = {0};
	d("Video", frame);
	for (; vid.get(CV_CAP_PROP_POS_FRAMES) < vid.get(CV_CAP_PROP_FRAME_COUNT);)
	{
		vid >> frame;
		d("Video", frame);
		for (int j = 0; j < frame.cols; j++)
		{
			if ()
		}
		waitKey(10);
	}
	while (1)
	{
		int iKey = waitKey(50);
		if (iKey == 27)
			break;
	}
	waitKey(0);
	return 0;
}*/
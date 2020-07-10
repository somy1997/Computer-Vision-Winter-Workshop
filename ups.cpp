#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <math.h>
#define krnl 3
#define THRESHOLD 127
#define maxdim 100

using namespace cv;
using namespace std;

/*int ctr = 0;
Point c[5];
Point ft, lt, rt, ct;

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

Mat hgs(Mat img)
{
	Mat imggs1(img.rows, img.cols, CV_8UC1, 255);  //human eye
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			imggs1.at<uchar>(i, j) = img.at<Vec3b>(i, j)[0] * 0.114 + img.at<Vec3b>(i, j)[1] * 0.587 + img.at<Vec3b>(i, j)[2] * 0.299;
		}
	}
	return imggs1;
}

Mat binary(Mat img1,int th)
{
	Mat img2(img1.rows, img1.cols, CV_8UC1, 255);  //avg
	for (int i = 0; i < img1.rows; i++)
	{
		for (int j = 0; j < img1.cols; j++)
		{
			if (img1.at<uchar>(i, j)>th)
				img2.at<uchar>(i, j) = 255;
			else
				img2.at<uchar>(i, j) = 0;
		}
	}
	return img2;
}

Mat binary2(Mat img1, int th)
{
	Mat img2(img1.rows, img1.cols, CV_8UC1, 255);  //avg
	for (int i = 0; i < img1.rows; i++)
	{
		for (int j = 0; j < img1.cols; j++)
		{
			if (img1.at<uchar>(i, j)<th)
				img2.at<uchar>(i, j) = 0;
			else
				img2.at<uchar>(i, j) = 255;
		}
	}
	return img2;
}

void blobptdetdfsr(int i, int j, Mat img, Mat &aux)
{
	aux.at<uchar>(i, j) = ctr;
	for (int i1 = i - krnl / 2; i1 <= i + krnl / 2; i1++)
	{
		for (int j1 = j - krnl / 2; j1 <= j + krnl / 2; j1++)
		{
			if (i1 < 0 || i1 >= img.rows || j1 < 0 || j1 >= img.cols)
				continue;
			if (img.at<uchar>(i1, j1) == 255 && aux.at<uchar>(i1, j1) == 0)
			{
				blobptdetdfsr(i1, j1, img, aux);
			}
		}
	}
}

void blobdetdfsr(Mat img, Mat &aux)
{
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			if (img.at<uchar>(i, j) == 255 && aux.at<uchar>(i, j) == 0)
			{
				ctr++;
				blobptdetdfsr(i, j, img, aux);
			}
		}
	}
}

void init(Mat img)
{
	for (int i = 0; i < img.rows; i++)
	for (int j = 0; j < img.cols; j++)
		img.at<uchar>(i, j) = 0;
}

void printarr(Mat img)
{
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			cout << (int)img.at<uchar>(i, j);
		}
		cout << endl;
	}
}

void centblob(Mat aux)  //storing centroids of blobs
{
	for (int k = 1; k <= ctr; k++)
	{
		int isum = 0, jsum = 0, n = 0;
		for (int i = 0; i < aux.rows; i++)
		{
			for (int j = 0; j < aux.cols; j++)
			{
				if (aux.at<uchar>(i, j) == k)
				{
					isum += i;
					jsum += j;
					n++;
				}
			}
		}
		cout << "Centroid for Blob " << k << " is at rows = " << isum / n + 1 << " and cols = " << jsum / n + 1 << endl;
		c[k].y = isum / n + 1;
		c[k].x = jsum / n + 1;
	}
}

void idencent()  //identify centroids
{
	int max = 0;
	int flagrl[5] = {0};
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			if (c[i].x - c[j].x > max)
			{
				for (int k = 1; k <= 4; k++)
				{
					flagrl[k] = 0;
				}
				max = c[i].x - c[j].x;
				rt.x = c[i].x;
				rt.y = c[i].y;
				lt.x = c[j].x;
				lt.y = c[j].y;
				flagrl[i] = 1;
				flagrl[j] = 1;
			}
		}
	}
	int flagfs[3] = { 0,0,0 },ctr=0;
	for (int i = 1; i <= 4; i++)
	{
		if (flagrl[i] == 0)
		{
			flagfs[++ctr] = i;
		}
	}
	if (c[flagfs[1]].y > c[flagfs[2]].y)
	{
		ct.x = c[flagfs[1]].x;
		ct.y = c[flagfs[1]].y;
		ft.x = c[flagfs[2]].x;
		ft.y = c[flagfs[2]].y;
	}
	else
	{
		ft.x = c[flagfs[1]].x;
		ft.y = c[flagfs[1]].y;
		ct.x = c[flagfs[2]].x;
		ct.y = c[flagfs[2]].y;
	}
}

void printcom(Mat img2)
{
	if (img2.at<uchar>(ct.y, ct.x) > 120)
		cout << (int)img2.at<uchar>(ct.y, ct.x)<< "STOP" << endl;
	if (img2.at<uchar>(ft.y, ft.x) > 140)
		cout << "MOVE FORWARD" << endl;
	if (img2.at<uchar>(lt.y, lt.x) >140)
		cout << "MOVE LEFT" << endl;
	if (img2.at<uchar>(rt.y, rt.x) >140)
		cout << "MOVE RIGHT" << endl;
}

Mat diffback(Mat img2)
{
	int back[3] = { img2.at<Vec3b>(0, 0)[0], img2.at<Vec3b>(0, 0)[1], img2.at<Vec3b>(0, 0)[2] };
	for (int i = 0; i < img2.rows; i++)
	{
		for (int j = 0; j < img2.cols; j++)
		{
			if (img2.at<Vec3b>(i, j)[0] == back[0] && img2.at<Vec3b>(i, j)[1] == back[1]&&img2.at<Vec3b>(i, j)[2] == back[2])
			{
				img2.at<Vec3b>(i, j)[0] = 0;
				img2.at<Vec3b>(i, j)[1] = 0;
				img2.at<Vec3b>(i, j)[2] = 0;
			}
		}
	}
	return img2;
}

Mat redsize(Mat img)
{
	if (img.rows<=maxdim && img.cols<=maxdim)
		return img;
	Mat img2(img.rows / 2, img.cols / 2, CV_8UC1, 255);
	for (int i = 0; i < img2.rows; i++)
	for (int j = 0; j < img2.cols; j++)
	{
		int a = img.at<uchar>(2 * i, 2 * j);
		img2.at<uchar>(i, j) = a / 4;
	}
	if (img2.rows>maxdim || img2.cols>maxdim)
		return redsize(img2);
	else
		return img2;
}

int main()
{
	Mat img1 = r("PS2_1.jpg");
	d("1.Original image", img1);
	waitKey(0);

	Mat img2 = diffback(img1);
	d("2.Black background", img2);
	waitKey(0);

	Mat img3 = hgs(img2);
	d("3.Grey Scale Image for Human Eye", img3);
	waitKey(0);

	Mat img4 = binary(img3, 0);
	d("4.Binary Image", img4);
	waitKey(0);

	Mat img5 = redsize(img4);
	d("5.Reduced Image", img5);
	waitKey(0);

	Mat img = binary2(img5, 255);
	d("6.Binary Image", img);
	waitKey(0);

	Mat aux = img.clone();
	init(aux);
	blobdetdfsr(img, aux);
	printarr(aux);
	centblob(aux);
	waitKey(0);

	idencent();
	waitKey(0);

	printcom(img3);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <math.h>
#define krnl 3
#define THRESHOLD 127
#define inf 1000
#define max 100
#define conmax 10

using namespace cv;
using namespace std;

/*int help[max][max];
int con[conmax][conmax];
int conv[conmax];
int ctr = 0;

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

Mat binary(Mat img1)
{
	Mat img2(img1.rows, img1.cols, CV_8UC1, 255);  //avg
	for (int i = 0; i < img1.rows; i++)
	{
		for (int j = 0; j < img1.cols; j++)
		{
			if (img1.at<uchar>(i, j)>THRESHOLD)
				img2.at<uchar>(i, j) = 255;
			else
				img2.at<uchar>(i, j) = 0;
		}
	}
	return img2;
}

int ptval(int i, int j)
{
	return help[i][j];
}

int isvalid(int i,int j,Mat img)
{
	if (i < 0 || i >= img.rows || j < 0 || j >= img.cols)
		return 0;
	return 1;
}

int minm(int p, int q)
{
	return p < q ? p : q;
}

int blobptdet( int i, int j,Mat img)
{
	int t[3],n=0;
	if (isvalid(i - 1, j - 1,img))
	if (ptval(i - 1, j - 1)!=inf)
		t[n++] = ptval(i - 1, j - 1);
	if (isvalid(i - 1, j,img))
	if (ptval(i - 1, j) != inf)
		t[n++] = ptval(i - 1, j);
	if (isvalid(i, j - 1,img))
	if (ptval(i, j - 1) != inf)
		t[n++] = ptval(i, j - 1);
	if (n)
	{
		int min = inf;
		for (int i = 0; i < n; i++)
		{
			if (t[i] < min)
			{
				min = t[i];
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << t[i] << '\t' << t[j] << '\t';
				con[t[i]][t[j]] = 1;
				cout << con[t[i]][t[j]] << endl;
			}
		}
		return min;
	}
	return ++ctr;
}

void blobdet(Mat img)
{
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			if (img.at<uchar>(i, j) == 255)
				help[i][j] = blobptdet(i, j,img);
		}
	}
	for (int i = 1; i <= ctr; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << con[i][j] << '\t' << conv[i] << endl;
			if (con[i][j])
			{
				conv[i] = j;
				cout << conv[i] << endl;
				break;
			}
		}
	}
	for (int i = 1; i <= ctr; i++)
	{
		int j = i;
		while (1)
		{
			if (conv[j] == j)
				break;
			else
				j = conv[j];
		}
		conv[i] = j;
	}
	int flag = 1;
	for (int i = 1; i <= ctr; i++)
	{
		if (conv[i] < flag)
			continue;
		int t = conv[i];
		for (int j = i; j <= ctr; j++)
		{
			if (conv[j] == t)
			{
				conv[j] = flag;
			}
		}
		flag++;
	}
	for (int k = 1; k <= ctr; k++)
	{
		for (int i = 0; i < img.rows; i++)
		{
			for (int j = 0; j < img.cols; j++)
			{
				if (help[i][j] == k)
					help[i][j] = conv[k];
			}
		}
	}
}

void init()
{
	for (int i = 0; i < conmax;i++)
	for (int j = 0; j < conmax; j++)
		con[i][j] = 0;
	for (int i = 0; i < max; i++)
	for (int j = 0; j < max; j++)
		help[i][j] = inf;
}

void printarr(Mat img)
{
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			if (help[i][j] == inf)
				help[i][j]=0;
			cout << help[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int th = 127;
	init();
	Mat img1 = r("img.jpg");
	d("Original image", img1);
	Mat img2 = hgs(img1);
	d("Grey Scale Image for Human Eye", img2);
	Mat img = binary(img2);
	blobdet(img);
	printarr(img);
	d("Binary Image", img);
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
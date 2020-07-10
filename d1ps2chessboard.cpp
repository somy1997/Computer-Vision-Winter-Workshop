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

void createimagesampe()
{
	Mat temp2(400, 400, CV_8UC1, 255);
	int a = 255, b, c;
	b = temp2.rows / 8;
	while (b <= temp2.rows)
	{
		for (int i = b - temp2.rows / 8; i < b; i++)
		{
			c = temp2.cols / 8;
			while (c <= temp2.cols)
			{
				for (int j = c - temp2.cols / 8; j < c; j++)
				{
					temp2.at<uchar>(i, j) = a;
				}
				a = 255 - a;
				c += temp2.cols / 8;
			}
		}
		b += temp2.rows / 8;
		a = 255 - a;
	}
	displayimage(temp2, "PS2 : chessboard");
}

int main()
{
	createimagesampe();
	int iKey = waitKey(50);
	waitKey(0);
	return 0;
}*/
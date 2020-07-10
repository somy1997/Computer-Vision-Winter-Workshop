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

/*

using namespace cv;
using namespace std;

long int xrb, yrb, crb, xrd, yrd, crd, xgb, ygb, cgb, xgd, ygd, cgd;

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
	VideoCapture vid("PS2.avi");
	Mat frame=imread("PS2_1.jpg");
	for (; vid.get(CV_CAP_PROP_POS_FRAMES) < vid.get(CV_CAP_PROP_FRAME_COUNT);)
	{
		vid >> frame;
		d("Video", frame);
		waitKey(10);
		crb = crd = cgb = cgd = 0;
		xrb = xrd = xgb = xgd = 0;
		yrb = yrd = ygb = ygd = 0;
		for (long int i = 0; i < frame.rows; i++)
		{
			for (long int j = 0; j < frame.cols; j++)
			{
				if (frame.at<Vec3b>(i, j)[2] == rbr && frame.at<Vec3b>(i, j)[1]==rbg && frame.at<Vec3b>(i, j)[0]==rbb)
				{
					xrb += j;
					yrb += i;
					crb++;
				}
				if (frame.at<Vec3b>(i, j)[2] == rdr && frame.at<Vec3b>(i, j)[1] == rdg && frame.at<Vec3b>(i, j)[0] == rdb)
				{
					xrd += j;
					yrd += i;
					crd++;
				}
				if (frame.at<Vec3b>(i, j)[2] == gbr && frame.at<Vec3b>(i, j)[1] == gbg && frame.at<Vec3b>(i, j)[0] == gbb)
				{
					//cout << j << endl << i << endl << endl;
					//waitKey(0);
					xgb += j;
					ygb += i;
					cgb++;
				}
				if (frame.at<Vec3b>(i, j)[2] == gdr && frame.at<Vec3b>(i, j)[1] == gdg && frame.at<Vec3b>(i, j)[0] == gdb)
				{
					xgd += j;
					ygd += i;
					cgd++;
				}
			}
		}
		//cout << xgb/cgb << endl << ygb/cgb << endl << xrd/crd << endl << yrd/crd << endl;
		if (crb)
		{
			xrb = xrb / crb;
			yrb = yrb / crb;
		}
		if (crd)
		{
			xrd = xrd / crd;
			yrd = yrd / crd;
		}
		if (cgb)
		{
			xgb = xgb / cgb;
			ygb = ygb / cgb;
		}
		if (cgd)
		{
			xgd = xgd / cgd;
			ygd = ygd / cgd;
		}
		if (crb > crd)
			//cout << crb <<endl<< crd<<endl<< "STOP" << endl;
			cout << "STOP" << endl;
		else if ((yrd - ygb) > abs(xrd - xgb))
			//cout << yrd <<endl<< ygb<<endl << xrd<<endl<<xgb<<endl<< "Move Forward" << endl;
			cout << "Move Forward" << endl;
		else if ((xgb - xrd) > abs(ygb - yrd))
			cout << "Turn Right" << endl;
		else if ((xrd - xgb) > abs(ygb - yrd))
			cout << "Turn Left" << endl;
		else
			cout << "Remain in the same state" << endl;
		waitKey(5);
	}
	while (1)
	{
		int iKey = waitKey(50);
		if (iKey == 27)
			break;
	}
	waitKey(0);
	return 0;
}

*/
#include "stdafx.h"
#include "avi_processing.h"

int main()
{
	IplImage *Frame_in=NULL;
	CvCapture *capture=NULL;
	if(!capture)
	{
		//读取指定地址的视频文件
		capture=cvCreateFileCapture("F:\\aha.avi");
	}

		else
		{
			cvNamedWindow("avi");
		}
	
	while(1)
	{
		Frame_in=cvQueryFrame(capture);
		if (Frame_in==NULL)
		{
			break;
		}
		cvShowImage("avi",Frame_in);
		char c=cvWaitKey(33);
		if (c==27)
		{
			break;
		}
	}
	cvDestroyWindow("avi");
	cvReleaseImage(&Frame_in);
	cvReleaseCapture(&capture);

}
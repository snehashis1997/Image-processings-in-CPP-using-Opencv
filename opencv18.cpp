//#include "stdafx.h"
#include <cv.h>
#include <highgui.h>

int main()
{
        //display the original image
        IplImage* img = cvLoadImage("C:/MyPic.jpg");
        cvNamedWindow("MyWindow");
        cvShowImage("MyWindow", img);

        //invert and display the inverted image
        cvNot(img, img);
        cvNamedWindow("Inverted");
        cvShowImage("Inverted", img);

        cvWaitKey(0);

        //cleaning up
        cvDestroyWindow("MyWindow");
        cvDestroyWindow("Inverted");
        cvReleaseImage(&img);

        return 0;
}

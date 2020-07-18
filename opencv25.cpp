#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
     if ( flags == (EVENT_FLAG_CTRLKEY + EVENT_FLAG_LBUTTON) )
     {
          cout << "Left mouse button is clicked while pressing CTRL key - position (" << x << ", " << y << ")" << endl;
     }
     else if ( flags == (EVENT_FLAG_RBUTTON + EVENT_FLAG_SHIFTKEY) )
     {
          cout << "Right mouse button is clicked while pressing SHIFT key - position (" << x << ", " << y << ")" << endl;
     }
     else if ( event == EVENT_MOUSEMOVE && flags == EVENT_FLAG_ALTKEY)
     {
          cout << "Mouse is moved over the window while pressing ALT key - position (" << x << ", " << y << ")" << endl;
     }
}

int main(int argc, char** argv)
{
     // Read image from file
     Mat img = imread("MyPic.JPG");

     //if fail to read the image
     if ( img.empty() )
     {
          cout << "Error loading the image" << endl;
          return -1;
     }

     //Create a window
     namedWindow("My Window", 1);

     //set the callback function for any mouse event
     setMouseCallback("My Window", CallBackFunc, NULL);

     //show the image
     imshow("My Window", img);

     // Wait until user press some key
     waitKey(0);

     return 0;
}

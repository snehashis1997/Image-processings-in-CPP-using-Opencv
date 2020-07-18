//Uncomment the following line if you are compiling this code in Visual Studio
//#include "stdafx.h"

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
 // Read the image file
 Mat image = imread("C:/Users/user/Pictures/photolab1.jpeg");

 // Check for failure
 if (image.empty())
 {
  cout << "Could not open or find the image" << endl;
  cin.get(); //wait for any key press
  return -1;
 }

 /*
 Make changes to the image as necessary
 e.g.
  1. Change brightness/contrast of the image
  2. Smooth/Blur image
  3. Crop the image
  4. Rotate the image
  5. Draw shapes on the image
 */

 bool isSuccess = imwrite("C:/Users/user/Pictures/photolab123.jpeg", image); //write the image to a file as JPEG
 //bool isSuccess = imwrite("D:/MyImage.png", image); //write the image to a file as PNG
 if (isSuccess == false)
 {
  cout << "Failed to save the image" << endl;
  cin.get(); //wait for a key press
  return -1;
 }

 cout << "Image is succusfully saved to a file" << endl;

 String windowName = "The Saved Image"; //Name of the window
 namedWindow(windowName); // Create a window
 imshow(windowName, image); // Show our image inside the created window.

 waitKey(0); // Wait for any keystroke in the window

 destroyWindow(windowName); //destroy the created window

 return 0;
}

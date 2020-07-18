#include <opencv2/opencv.hpp>
//Take a image from user defined path and show it in a window name
using namespace cv;

int main( int argc, char** argv )
{
  std::string image_path = "C:/Users/user/Pictures/photolab1.jpeg";
  cv::Mat img = cv::imread(image_path);
  if( img.empty() ) return -1;
  cv::namedWindow( "Example1", cv::WINDOW_AUTOSIZE );
  cv::imshow( "Example1", img );
  cv::waitKey( 0 );
  cv::destroyWindow( "Example1" );
  return 0;
}

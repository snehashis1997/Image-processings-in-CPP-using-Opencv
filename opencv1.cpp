#include <opencv2/opencv.hpp>
//Include file for every supported OpenCV function
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

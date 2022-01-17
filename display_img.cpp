#include<iostream>
#include<opencv2/opencv.hpp>


int main(){
  cv::Mat img = cv::imread("../lena.jpg");

  cv::imshow("image", img);
  cv::waitKey(0);
 }

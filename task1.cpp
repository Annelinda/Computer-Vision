#include <opencv2/highgui.hpp>
#include <iostream>
int main()
{
    cv::Mat image = cv::imread("robocup.jpg");
    if (image.empty())
    {
        std::cout << "Error: Could not open image file." << std::endl;
        return 1;
    }
    cv::namedWindow("Image");
    cv::imshow("Image", image);
    cv::waitKey(0);
    cv::destroyWindow("Image");
     return 0;
}

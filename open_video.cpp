#include <opencv2/opencv.hpp>
#include <iostream>
int main(int argc, char** argv) {
    cv::VideoCapture cap(argv[1]);
    double fps = cap.get(cv::CAP_PROP_FPS);
    cv::namedWindow("视频播放", cv::WINDOW_AUTOSIZE);
    while (true) {
        cv::Mat frame;
        cap >> frame;
        if (frame.empty()) {
            std::cout << "视频播放结束" << std::endl;
            break;
        }
        cv::imshow("视频播放", frame);
        cv::waitKey(1000 / fps);
    }
    cap.release();
    cv::destroyAllWindows();
    return 0;
}
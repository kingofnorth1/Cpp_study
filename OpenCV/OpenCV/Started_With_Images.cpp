#include<opencv2/core.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>

#include<iostream>

//using namespace cv;
int ReadImg() {
	std::string image_path = cv::samples::findFile("D://pictures//test.jpg");
	cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);
	if (img.empty()) {
		std::cout << "无法读取图像：" << image_path << "";
		return 1;
	}
	cv::imshow("显示窗口：", img);
	int  k = cv::waitKey(0);   // 等待窗口中的按键 
	if (k == 's'){
		cv::imwrite("D://pictures//test.png", img);
	}
	return 1;
}

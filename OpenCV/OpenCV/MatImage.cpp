#include<opencv2/core.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>

#include<iostream>

using namespace cv;

int MatImage() {
	std::string image_path = samples::findFile("D://pictures//test.png");
	Mat A = imread(image_path, IMREAD_COLOR);
	Mat D(A, Rect(300, 300, 300, 300));
	imshow("œ‘ æÕº∆¨£∫", D);
	int k = waitKey(0);
	Mat E = A(Range::all(), Range(1, 3));
	imshow("œ‘ æÕº∆¨£∫", E);
	k = waitKey(0);

	Mat F = A.clone();
	Mat G;
	A.copyTo(G);

	Mat M(2, 2, CV_8UC3, Scalar(0, 0, 255));
	std::cout << "M = " << std::endl << " " << M << std::endl << std::endl;
	M.create(4, 4, CV_8UC(1));
	std::cout << "M = " << std::endl << " " << M << std::endl << std::endl;
	return 1;
}
#include<opencv2/core.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>

#include<iostream>

using namespace cv;

int MatImage() {
	std::string image_path = samples::findFile("D://pictures//test.png");
	Mat A = imread(image_path, IMREAD_COLOR);
	Mat D(A, Rect(150, 150, 150, 150));
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

	Mat P = Mat::eye(4, 4, CV_64F);
	std::cout << "P = " << std::endl << " " << P << std::endl << std::endl;
	Mat O = Mat::ones(2, 2, CV_32F);
	std::cout << "O = " << std::endl << " " << O << std::endl << std::endl;
	Mat Z = Mat::zeros(3, 3, CV_8UC1);
	std::cout << "Z = " << std::endl << " " << Z << std::endl << std::endl;

	Mat C = (Mat_<double>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
	std::cout << "C = " << std::endl << " " << C << std::endl << std::endl;
	C = (Mat_<double>({ 0, -1, 0, -1, 5, -1, 0, -1, 0 })).reshape(3);
	std::cout << "C = " << std::endl << " " << C << std::endl << std::endl;
	return 1;
}
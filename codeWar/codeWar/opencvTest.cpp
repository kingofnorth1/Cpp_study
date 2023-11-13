//#include <opencv2/opencv.hpp>
//using namespace cv;// 省去函数前面加cv::的必要性
//
//int main()
//{
//    char imageName[] = "D:/picture/test.jpg";
//    Mat M = imread(imageName, IMREAD_COLOR);   // 读入图片 
//
//    if (M.empty())     // 判断文件是否正常打开  
//    {
//        fprintf(stderr, "Can not load image %s\n", imageName);
//        waitKey(6000);  // 等待6000 ms后窗口自动关闭   
//        return -1;
//    }
//
//    imshow("image", M);  // 显示图片 
//    waitKey();
//    return 0;
//}

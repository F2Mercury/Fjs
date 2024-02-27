#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;

void main() {
		VideoCapture cap(0);
		Mat frame;
		int img_size = 100;
		while (true) {
			cap >> frame;
			resize(frame, frame, Size(img_size, img_size));
			imshow("frame",frame);
			int key = waitKey(0);
			if (key == 'q')
				break;
			if (key == '+')
				img_size += 20;
			if (key == '-')
				img_size -= 20;
		}
}
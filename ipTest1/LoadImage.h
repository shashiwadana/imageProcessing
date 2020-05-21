#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;
int LoadImage() {

	Mat image = imread("F:/image processing/test1/cat.jpg");
	//give path to your image
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}
	String windowName = "Cat"; //Name of the window
	namedWindow(windowName); // Create a window
	imshow(windowName, image); // Show image inside the created window.
	waitKey(0); // Wait for any keystroke in the window
	destroyWindow(windowName); //destroy the created window
	return 0;
};
#pragma once

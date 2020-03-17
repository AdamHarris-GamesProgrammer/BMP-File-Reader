#include "Structures.h"
#include <iostream>

int main() {
	//Read an image from disk, modify and write it back
	BMP bmp("Shapes.bmp");
	bmp.Write("Shapes_copy.bmp");

	//Create a BMP in memory
	BMP bmp2(800, 600);

	//modify the pixel data


	//save the image
	bmp2.Write("test.bmp");

	//Create a 24bit per pixel image (RGB) and save it
	BMP bmp3(209, 203, false);
	bmp3.Write("test_24bits.bmp");
}
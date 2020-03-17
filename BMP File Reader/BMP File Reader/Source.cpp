#include "Structures.h"
#include <iostream>

int main() {
	//Read an image from disk, modify and write it back
	BMP bmp("Shapes.bmp");
	bmp.Write("Shapes_copy.bmp");

	//Create a BMP in memory
	BMP bmp2(800, 600);
	bmp2.FillRegion(50, 20, 100, 200, 0,0, 255, 255);
	bmp2.Write("img_test.bmp");

	//Create a 24bit per pixel image (RGB) and save it
	BMP bmp3(209, 203, false);
	bmp3.FillRegion(50, 20, 100, 100, 255, 0, 255, 255);
	bmp3.Write("test_24bits.bmp");

	BMP bmp4("Shapes.bmp");
	bmp4.FillRegion(0, 0, 300, 400, 0xFF, 0x00, 0x4E, 0xFF);
	bmp4.Write("Testing.bmp");

	BMP bmp5(1024, 768, false);
	//I
	bmp5.FillRegion(1024 / 2 - 160, 64, 96, 32, 0xff, 0x00, 0x00, 0xff);
	bmp5.FillRegion(1024 / 2 - 128, 96, 32, 32, 0xff, 0x00, 0x00, 0xff);
	bmp5.FillRegion(1024 / 2 - 160, 128, 96, 32, 0xff, 0x00, 0x00, 0xff);
	//T
	bmp5.FillRegion(1024 / 2, 128, 96, 32, 0xff, 0x00, 0x00, 0xff);
	bmp5.FillRegion(1024 / 2 + 32, 64, 32, 96, 0xff, 0x00, 0x00, 0xff);

	bmp5.Write("It Works.bmp");
}
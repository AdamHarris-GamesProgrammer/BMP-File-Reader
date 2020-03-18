#include "BMP.h"
#include <iostream>
#include "Timer.h"


int main() {
	//Read an image from disk, modify and write it back
	std::cout << "Reading an image\n";
	{
		Timer time;
		BMP bmp("Shapes.bmp");
	}

	std::cout << "Writing an image\n";
	{
		Timer time;
		BMP bmp(800, 600);
		bmp.Write("Benchmark.bmp");
	}

	std::cout << "Reading and then copying an image\n";
	{
		Timer time;
		BMP bmp("Shapes.bmp");
		bmp.Write("Shapes_copy.bmp");
	}

	std::cout << "Creating a BMP in memory with one fill region\n";
	{
		Timer time;
		BMP bmp2(800, 600);
		bmp2.FillRegion(50, 20, 100, 200, 0, 0, 255, 255);
	}

	std::cout << "Creating a BMP in memory with one fill region and then writing to file\n";
	{
		Timer time;
		BMP bmp2(800, 600);
		bmp2.FillRegion(50, 20, 100, 200, 0, 0, 255, 255);
		bmp2.Write("img_test.bmp");
	}

	std::cout << "Complicated Image Copy\n";
	{
		Timer time;
		BMP bmp("SF_Fighter-Albedo.bmp");
		bmp.Write("SF_Fighter-Albedo_COPY.bmp");
	}

	__debugbreak();
}
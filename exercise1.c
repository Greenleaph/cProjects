#include <stdio.h>

int main(void) {
	/*
	int width, height, length;
	int surfaceArea = 2 * ((length * height) + (height * width) + (length * width)); 		// SA = 2LH + 2HW + 2LW
	int area = length * width;																// A = LW
	int volume = width * height * length;													// V = LWH
	*/												
	
	float width, height, length;

	width = 5.0;
	height = 12.0;
	length = 6.0;

	float surfaceArea = 2 * ((length * height) + (height * width) + (length * width)); 		// SA = 2LH + 2HW + 2LW
	float area = length * width;															// A = LW
	float volume = width * height * length;													// V = LWH
	
	/*
	printf("Width: %d", width);
	printf("\nHeight: %d", height);
	printf("\nLength: %d", length);
	printf("\nArea: %d", length * width);
	printf("\nVolume =  %d", width * length * height);
	printf("\nSurface Area = %d", 2 * ((length * height) + (height * width) + (length * width)));
	*/

	printf("Width: %3.2f", width);
	printf("\nHeight: %3.2f", height);
	printf("\nLength: %3.2f", length);
	printf("\nArea: %3.2f", area);
	printf("\nVolume =  %3.2f", width * length * height);
	printf("\nSurface Area = %3.2f", 2 * ((length * height) + (height * width) + (length * width)));

	printf("\nPress enter to quit...");
	getchar();

	return 0;
}
#include "rectangleSolver.h"

// Created by Nicholas Packull-McCormick
//
// Revision History:
// 2022-11-15: Created
// 2022-11-22: Implemented getInputAndAnalyzeRectangle and analyzeRectangle
// 2022-11-29: Fixed minor bugs

// This function gets user input of 4 points in order and then solves if the 4 points make a rectangle
void getInputAndAnalyzeRectangle()
{
	// Initilize the point variables
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;

	// Get each point pair
	printf("Please enter the X and Y int of the FIRST point seperated by a space\n");
	if (scanf_s("%d %d", &x1, &y1) != 2)
	{
		return;
	}

	printf("Please enter the X and Y int of the SECOND point seperated by a space\n");
	if (scanf_s("%d %d", &x2, &y2) != 2)
	{
		return;
	}

	printf("Please enter the X and Y int of the THIRD point seperated by a space\n");
	if (scanf_s("%d %d", &x3, &y3) != 2)
	{
		return;
	}

	printf("Please enter the X and Y int of the FOURTH point seperated by a space\n");
	if (scanf_s("%d %d", &x4, &y4) != 2)
	{
		return;
	}

	// Analyze the 4 points if they make a rectangle
	char* result = analyzeRectangle(x1, y1, x2, y2, x3, y3, x4, y4);

}

// This function takes 4 2D points and checks if the points form a rectangle
char* analyzeRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	// Initilize the variables and make the points into vectors
	char* result;
	int vx1 = x2 - x1;
	int vy1 = y2 - y1;
	int vx2 = x3 - x2;
	int vy2 = y3 - y2;
	int vx3 = x4 - x3;
	int vy3 = y4 - y3;
	int vx4 = x1 - x4;
	int vy4 = y1 - y4;

	// Dot the vectors to find if they form 90deg angles, if yes then rectangle, if not then not rectangle
	if ((vx1 * vx2 + vy1 * vy2) == 0 && (vx2 * vx3 + vy2 * vy3) == 0 && (vx3 * vx4 + vy3 * vy4) == 0 && (vx4 * vx1 + vy4 * vy1) == 0)
	{
		// Finds the magnitude of the vectors to find perimiter and area
		printf("The object is a Rectangle\n");
		double vm1 = sqrt(vx1 * vx1 + vy1 * vy1);
		double vm2 = sqrt(vx2 * vx2 + vy2 * vy2);
		double vm3 = sqrt(vx3 * vx3 + vy3 * vy3);
		double vm4 = sqrt(vx4 * vx4 + vy4 * vy4);
		double perimiter = vm1 + vm2 + vm3 + vm4;
		int area = vm1 * vm2;
		printf("The perimiter of the Rectangle is: %f\n", perimiter);
		printf("The area of the Rectangle is: %d\n", area);
		result = "Rectangle";
		return result;
	}
	else if ((vx1 * vx2 + vy1 * vy2) != 0 || (vx2 * vx3 + vy2 * vy3) != 0 || (vx3 * vx4 + vy3 * vy4) != 0 || (vx4 * vx1 + vy4 * vy1) != 0)
	{
		// Finds the magnitude of the vectors to find perimiter and area
		printf("Not a Rectangle\n");
		double vm1 = sqrt(vx1 * vx1 + vy1 * vy1);
		double vm2 = sqrt(vx2 * vx2 + vy2 * vy2);
		double vm3 = sqrt(vx3 * vx3 + vy3 * vy3);
		double vm4 = sqrt(vx4 * vx4 + vy4 * vy4);
		double perimiter = vm1 + vm2 + vm3 + vm4;
		printf("The perimiter of the shape is: %f\n", perimiter);
		result = "Not a Rectangle";
		return result;
	}
	else
	{
		// This is here in case somethign went wrong
		result = "Error, something went wrong.";
		return result;
	}
	
}
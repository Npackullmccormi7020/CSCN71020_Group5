#include "rectangleSolver.h"

void getInputAndAnalyzeRectangle()
{
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;

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

	char* result = analyzeRectangle(x1, y1, x2, y2, x3, y3, x4, y4);

}

char* analyzeRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	char* result;
	int vx1 = x2 - x1;;
	int vy1 = y2 - y1;
	int vx2 = x3 - x2;
	int vy2 = y3 - y2;
	int vx3 = x4 - x3;
	int vy3 = y4 - y3;
	int vx4 = x1 - x4;
	int vy4 = y1 - y4;

	if ((vx1 * vx2 + vy1 * vy2) == 0 && (vx2 * vx3 + vy2 * vy3) == 0 && (vx3 * vx4 + vy3 * vy4) == 0 && (vx4 * vx1 + vy4 * vy1) == 0)
	{
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
	else if ((vx1 * vx2 + vy1 * vy2) != 0 && (vx2 * vx3 + vy2 * vy3) != 0 && (vx3 * vx4 + vy3 * vy4) != 0 && (vx4 * vx1 + vy4 * vy1) != 0)
	{
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
		result = "Error, something went wrong.";
		return result;
	}
	
}
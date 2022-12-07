#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "triangleSolver.h"
#include "rectangleSolver.h"
#include "anglesoftriangle.h"
#include "isTriangle.h"

/*
Revision history:
2021-06-01: Created by Elliot Coleshill
2022-11-17: Added function anglesoftriangle() (SrujanReddy)
2022-11-24: Added function isTriangle() (Girish Bhuteja)
2022-11-29/2022-11-30: Slight modifications to remove any potential issues (Kahan)
*/

int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();
		

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			double triangleSides[3] = { 0, 0, 0 };
			double* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			char* istriangle = isTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			// (GIRISH) : called the function of isTriangle in main
			// Change (Kahan) : modified as per the new definition.
			double* TriangleAngles;
			TriangleAngles = anglesoftriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("\n%s\n", result);
			break;
		case 2:
			printf_s("Rectangle selected.\n");
			getInputAndAnalyzeRectangle();
			break;
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

double* getTriangleSides(double* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%lf", &triangleSides[i]);
		// Change (Kahan): Rectifying the line of code to take double as input
	}
	return triangleSides;
}
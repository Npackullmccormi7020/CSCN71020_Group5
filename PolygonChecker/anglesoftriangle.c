#include "anglesoftriangle.h"
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>
#include "main.h"

/*
Revision history:
2022-11-17: Created by Srujan Reddy Vadde
2022-11-24: Updated the function (SrujanReddy)
2022-11-29: Modified to eliminate the errors and make it functional (Kahan)
2022-12-06: modified the project and cleared errors regarding calculations
*/

double* anglesoftriangle(double a, double b, double c)
{
    double angles[anglesNUM];
    double A, B, C;

    C = ((a * a) + (b * b) - (c * c)) / (2 * (a * b)); //c 
    A = ((b * b) + (c * c) - (a * a)) / (2 * (b * c));
    B = ((c * c) + (a * a) - (b * b)) / (2 * (a * c));

    //value in radians
    double x = acos(A); 
    //Value in degree
    angles[0] = ((x / M_PI) * 180);
    //value in radians
    double y = acos(B);
//value in degree
    angles[1] = ((y / M_PI) * 180);
    //value in radians
    double z = acos(C);
    //value in degree
    angles[2] = ((z / M_PI) * 180);


    printf("\nAngle A is %lf", angles[0]);
    printf("\nAngle B is %lf", angles[1]);
    printf("\nAngle C is %lf", angles[2]);
    return angles;
}
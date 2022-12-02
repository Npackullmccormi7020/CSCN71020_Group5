#include "anglesoftriangle.h"

#include <stdio.h>
#include <math.h>

/*
Revision history:
2022-11-17: Created by Srujan Reddy Vadde
2022-11-24: Updated the function (SrujanReddy)
2022-11-29: Modified to eliminate the errors and make it functional (Kahan)
*/

void anglesoftriangle(double a, double b, double c)
{
    double A, B, C;

    A = ((a * a) + (b * b) - (c * c)) / 2 * (a * b);
    B = ((b * b) + (c * c) - (a * a)) / 2 * (b * c);
    C = ((c * c) + (a * a) - (b * b)) / 2 * (a * c);

    //value in radians
    double x = acos(A); 
    //Value in degree
    double angleA = ((x * 180) * 7) / 22;
    //value in radians
    double y = acos(B);
//value in degree
    double angleB = ((x * 180) * 7) / 22;
    //value in radians
    double z = acos(C);
    //value in degree
    double angleC = ((x * 180) * 7) / 22;


    printf("\nAngle A is %lf", angleA);
    printf("\nAngle B is %lf", angleB);
    printf("\nAngle C is %lf", angleC);
}
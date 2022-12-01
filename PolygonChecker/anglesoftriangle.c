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

    // Change (Kahan) : defined and initialized the doubles for angles.
    double angleA = acos(A);
    double angleB = acos(B);
    double angleC = acos(C);

    // Change (Kahan) : Just minor change in syntax adjustment to remove obvious error.
    printf("\n%lf", angleA);
    printf("\n%lf", angleB);
    printf("\n%lf", angleC);
}
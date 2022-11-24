#include "anglesoftriangle.h"

#include <stdio.h>
#include <math.h>
void anglesoftriangle(double a, double b, double c)
{
    double A, B, C;
    double angleA, angleB, angleC;
    A = ((a * a) + (b * b) - (c * c)) / 2*(a*b);
    B = ((b * b) + (c * c) - (a * a)) / 2*(b*c);
    C = ((c * c) + (a * a) - (b * b)) / 2*(a*c);

    angleA = acos(A);
    printf("%lf", angleA);
    printf("lf", angleB);
    printf("lf", angleC);
}
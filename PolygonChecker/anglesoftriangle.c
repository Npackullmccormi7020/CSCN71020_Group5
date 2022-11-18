#include "anglesoftriangle.h"

#include <stdio.h>
#include <math.h>
int anglesoftriangle(side1, side2, side3)
{
	float s, angleA, angleB, angleC, pi, R, area;
    pi = acos(-1);

    
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    R = (side1 *side2 * side3) / (4 * area);

    angleA = (180 / pi) * asin(side1 / 2 * R);
    angleB = (180 / pi) * asin(side2 / 2 * R);
    angleC = (180 / pi) * asin(side3 / 2 * R);

    printf("%.2f %.2f %.2f", angleA, angleB, angleC);
    return 0;

}
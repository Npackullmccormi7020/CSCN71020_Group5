#include "isTriangle.h"

#include <stdio.h>
#include <math.h>

void isTriangle(double side1, double side2, double side3)
{
    if ((side1 + side2) >= side3 || (side2 + side3) >= side1 || (side3 + side1) >= side2)
        printf("\nTriangle is possible");
    else
        printf("\nTriangle is not possible");  
}
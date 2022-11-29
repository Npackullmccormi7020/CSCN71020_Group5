#include "isTriangle.h"

#include <stdio.h>
#include <math.h>

/*
Revision history:
2022-11-24: Created by Girish Bhuteja
2022-11-24: Changed the datatype to double (Girish Bhuteja)
2022-11-29: Modified to make it possible to test, with change in definition (Kahan)
*/

void isTriangle(double side1, double side2, double side3, char* statement)
{
    if ((side1 + side2) >= side3 || (side2 + side3) >= side1 || (side3 + side1) >= side2)
    {
        statement = "Triangle is possible";
        printf("\n%s", statement);
    }
    else
    {
        statement = "Triangle is not possible";
        printf("\n%s", statement);
    }
}
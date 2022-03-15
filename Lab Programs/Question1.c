/*
Q1. Write a Program to read the radius of the circle and display the area and circumference.
*/

#include<stdio.h>
#include<math.h>

void main()
{
    int radius;
    float circumference,area;
    const float PI=3.14;

    printf("Enter the Radius of the Circle: ");
    scanf("%d",&radius);

    area=PI*pow(radius,2);
    circumference=2*PI*radius;

    printf("Area of Circle is %.2f and Circumference is %.2f",area,circumference);
}
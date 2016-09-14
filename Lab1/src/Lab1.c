/*
 ============================================================================
 Name        : Lab1.c
 Author      : Ian Naeger
 Version     :
 Copyright   : N/A
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(void)
{
	double radius , area;

	printf("Enter the radius of the circle: \n");
	scanf("%lf", &radius);

	//Gets radius from User

	area = radius * radius * PI;

	printf("Area of the circle is: %f \n" , area);

	//Calculates and prints Area of the Circle

	return 0;
}

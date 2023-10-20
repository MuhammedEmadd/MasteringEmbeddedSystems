/*
 * ex5.c
 *
 *  Created on: Oct 20, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

#define PI 3.14
#define area(radius) PI*radius*radius

int main() {
	int r;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%d", &r);
	printf("Area = %f\n", area(r));
	return 0;
}


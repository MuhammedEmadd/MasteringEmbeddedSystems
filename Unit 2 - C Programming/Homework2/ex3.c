/*
 * ex3.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	float a, b, c;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	if (a > b) {
		if (a > c)
			printf("%f is the largest number", a);
		else
			printf("%f is the largest number", c);
	}
	else if (b > c)
		printf("%f is the largest number", b);
	else
		printf("%f is the largest number", c);
}

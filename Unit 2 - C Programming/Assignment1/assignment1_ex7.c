/*
 * assignment1_ex7.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	float a, b;
	printf ("Enter value of a: ");
	fflush(stdout);
	scanf ("%f", &a);
	printf ("Enter value of b: ");
	fflush(stdout);
	scanf ("%f", &b);
	b = a + b; // if a = 5, b = 1 -> b = 6;
	a = b - a; // a = 1
	b = b - a; // b = 5
	printf ("After swapping, value of a = %f\n", a);
	printf ("After swapping, value of b = %f\n", b);
}


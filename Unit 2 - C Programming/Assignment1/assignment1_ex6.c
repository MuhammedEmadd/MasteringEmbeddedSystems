/*
 * assignment1_ex6.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	float a, b, c;
	printf ("Enter value of a: ");
	fflush(stdout);
	scanf ("%f", &a);
	printf ("Enter value of b: ");
	fflush(stdout);
	scanf ("%f", &b);
	c = a;
	a = b;
	b = c;
	printf ("After swapping, value of a = %f\n", a);
	printf ("After swapping, value of b = %f\n", b);
}



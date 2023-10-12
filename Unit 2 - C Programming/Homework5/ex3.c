/*
 * ex3.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Mohamed Emad
 */

//EX3: C Program to Add Two Complex Numbers by Passing Structure to a Function
#include <stdio.h>

struct SComplex {
	float real, imaginary; //Complex number struct used.
};

int main() {
	struct SComplex c1, c2;
	printf("Enter information for 1st complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f", &c1.real);
	fflush(stdout);
	scanf("%f", &c1.imaginary);
	printf("Enter information for 2nd complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f", &c2.real);
	fflush(stdout);
	scanf("%f", &c2.imaginary);

	printf("Sum = %f + %f i", c1.real + c2.real, c1.imaginary + c2.imaginary);

	return 0;
}

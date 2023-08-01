/*
 * ex2.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int factorial (int n);

int main () {
	int n;
	printf ("Enter a positive number: ");
	fflush(stdout);
	scanf("%d", &n);
	if (n<0)
		printf ("Factorial of a negative number doesn't exist");
	else
		printf("Factorial of %d = %d", n, factorial(n));
	return 0;
}

int factorial (int n) {
	if (n == 0)
		return 1;
	return n * factorial(n-1);
}

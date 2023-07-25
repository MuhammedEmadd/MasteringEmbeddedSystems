/*
 * ex7.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	int n, i, sum = 0;
	printf("Enter an Integer: ");
	fflush(stdout);
	scanf("%d", &n);
	if (n == 0)
		printf("Factorial = 1");
	else if (n > 0) {
		sum = 1;
		for (i = 1; i<=n; i++) {
			sum *= i;
		}
		printf("Factorial = %d", sum);
	}
	else
		printf("Error!!! Factorial of negative number doesn't exist");
}

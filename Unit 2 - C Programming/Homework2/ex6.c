/*
 * ex6.c
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
	for (i = 1; i<=n; i++) {
		sum += i;
	}
	printf("Sum = %d", sum);
}

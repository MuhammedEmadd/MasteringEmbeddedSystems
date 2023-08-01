/*
 * ex4.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int power (int n, int pow);

int main () {
	int n, pow;
	printf ("Enter base number: ");
	fflush(stdout);
	scanf("%d", &n);
	printf ("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d", &pow);
	printf("%d^%d = %d", n, pow, power(n, pow));
	return 0;
}

int power (int n, int pow) {
	if (pow == 0)
		return 1;
	return n * power(n, pow-1);
}

/*
 * ex1.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void prime (int a, int b);

int main () {
	int a, b;
	printf ("Enter two numbers (intervals): ");
	fflush(stdout);
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Prime numbers between %d and %d are:", a, b);
	b>a? prime (a, b) : prime(b, a);
	return 0;
}

void prime (int a, int b) {
	int i, j;
	for (i = a; i < b; i++) {
		for (j = 1; j<i; j++) {
			if (!(i%j) && j!=1)
				break;
			if (j == i - 1) {
				printf (" %d", i);
				break;
			}
		}
	}
}

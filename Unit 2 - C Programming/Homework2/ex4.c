/*
 * ex4.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	int n;
	printf ("Enter a number: ");
	fflush(stdout);
	scanf("%d", &n);
	n > 0? printf("%d is Positive", n) : n==0? printf("You Entered Zero") : printf("%d is Negative", n);
}

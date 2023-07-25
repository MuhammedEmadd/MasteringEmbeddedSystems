/*
 * ex1.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	int n;
	printf ("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d", &n);
	(n%2 == 0) ? printf("%d is Even", n) : printf("%d is Odd", n);
}

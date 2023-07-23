/*
 * assignment1_ex5.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Mohamed Emad
 */
#include <stdio.h>

void main () {
	char c;
	printf ("Enter a Character: ");
	fflush(stdout);
	scanf ("%c", &c);
	printf("The ASCII value of %c is %d", c, c);
}

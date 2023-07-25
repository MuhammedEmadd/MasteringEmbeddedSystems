/*
 * ex5.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		printf ("%c is an Alphabet", c);
	else
		printf ("%c is not an alphabet", c);
}

/*
 * ex1.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);
	if (c < 97)
		c += 32;
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		printf ("%c is a Vowel", c);
	else
		printf ("%c is a Consonant", c);
}

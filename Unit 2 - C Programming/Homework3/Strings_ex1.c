/*
 * Strings_ex1.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int main () {
	char x[100], c;
	int n = 0, i;
	printf("Enter a string: ");
	fflush(stdout);
	gets(x);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c", &c);
	for (i = 0; i<strlen(x); i++) {
		if (x[i] == c)
			n++;
	}
	printf("Frequency of %c is %d\n", c, n);

	return 0;
}

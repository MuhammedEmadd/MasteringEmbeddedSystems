/*
 * Strings_ex3.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int main () {
	char x[100], rev[100];
	int n = 0, i, j;
	printf("Enter a string: ");
	fflush(stdout);
	gets(x);
	for (i = 0, j=strlen(x)-1; i<strlen(x); i++, j--) {
		rev[j] = x[i];
	}
	printf("Reversed string: %s\n", rev);

	return 0;
}

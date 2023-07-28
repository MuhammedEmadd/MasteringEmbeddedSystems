/*
 * Strings_ex2.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int main () {
	char x[100];
	int n = 0, i;
	printf("Enter a string: ");
	fflush(stdout);
	gets(x);
	for (i = 0; i<100; i++) {
		if (x[i] == 0)
			break;
		n++;
	}
	printf("Length of string: %d\n", n);

	return 0;
}

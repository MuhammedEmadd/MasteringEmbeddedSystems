/*
 * ex3.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void reverseString (char arr[], int n);

int main () {
	int n;
	char text[100];
	printf ("Enter a sentence: ");
	fflush(stdout);
	gets(text);
	n = strlen(text);
	reverseString(text, n - 1);
	return 0;
}

void reverseString (char arr[], int n) {
	printf("%c", arr[n]);
	if (n == 0)
		return;
	reverseString(arr, n-1);
}

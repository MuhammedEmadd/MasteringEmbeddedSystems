/*
 * ex3.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Mohamed Emad
 */


#include <stdio.h>

int main () {
	char arr[50];
	char *ptr;
	printf("Enter a string\n");
	fflush(stdout);
	scanf("%s", arr);
	ptr = arr;
	while (*ptr){
		ptr++;
	}
	printf("Reversed String:");
	while (ptr != arr-1) {
		printf("%c", *ptr);
		ptr--;
	}
	return 0;
}

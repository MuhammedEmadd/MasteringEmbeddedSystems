/*
 * ex1.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int main () {
	int arr1 [2][2], arr2 [2][2], i, j;
	printf("Enter elements of first matrix:\n");
	for (i = 0; i<2; i++) {
		for (j=0; j<2; j++) {
			printf("Enter element a%d%d\n", i+1, j+1);
			fflush(stdout);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter elements of second matrix:\n");
	for (i = 0; i<2; i++) {
		for (j=0; j<2; j++) {
			printf("Enter element b%d%d\n", i+1, j+1);
			fflush(stdout);
			scanf("%d", &arr2[i][j]);
		}
	}
	printf("Sum of matrix:\n");
	for (i = 0; i<2; i++) {
		for (j = 0; j<2; j++) {
			printf("%d\t", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}

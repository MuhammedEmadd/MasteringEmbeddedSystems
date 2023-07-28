/*
 * Arrays_ex3.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int main () {
	int mat[4][4], tmat[4][4], rows, cols, i, j;
	printf("Enter rows and columns: ");
	fflush(stdout);
	scanf("%d", &rows);
	scanf("%d", &cols);
	for (i = 0; i<rows; i++) {
		for (j = 0; j<cols; j++) {
			printf("Enter element a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("The entered matrix: \n");
	for (i = 0; i<rows; i++) {
		for (j = 0; j<cols; j++) {
			printf("%d\t", mat[i][j]);
			tmat[j][i] = mat[i][j];
		}
		printf("\n");
	}
	printf("Matrix Transpose: \n");
	for (i = 0; i<cols; i++) {
		for (j = 0; j<rows; j++) {
			printf ("%d\t", tmat[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
 * Arrays_ex2.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int main () {
	float arr[20], sum = 0;
	int n, i;
	printf("Enter the number of data: \n");
	fflush(stdout);
	scanf("%d", &n);
	for (i = 0; i<n; i++) {
		printf ("%d. Enter number: ", i+1);
		fflush(stdout);
		scanf("%f", &arr[i]);
		sum+=arr[i];
	}
	printf("Average = %f\n", sum/n);

	return 0;
}

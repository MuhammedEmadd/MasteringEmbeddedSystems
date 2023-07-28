/*
 * Arrays_ex5.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int main () {
	int arr[10], n, i, x, m = 0;
	printf("Enter number of elements: ");
	fflush(stdout);
	scanf("%d", &n);
	for (i = 0; i<n; i++) {
		printf("Enter element %d ", i+1);
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched for: \n");
	fflush(stdout);
	scanf("%d", &x);
	for (i = 0; i<n; i++) {
		if(arr[i] == x) {
			m = x;
			break;
		}
	}
	if (m!=0) {
		printf("Number found at location %d\n", i + 1);
	}
	else {
		printf("Number not found\n");
	}

	return 0;
}

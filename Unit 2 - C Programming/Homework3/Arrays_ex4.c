/*
 * Arrays_ex4s.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

int main () {
	int arr[10], n, i, x, m;
	printf("Enter number of elements: ");
	fflush(stdout);
	scanf("%d", &n);
	for (i = 0; i<n; i++) {
		printf("Enter element %d ", i+1);
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be inserted: \n");
	fflush(stdout);
	scanf("%d", &x);
	printf("Enter the location: \n");
	fflush(stdout);
	scanf("%d", &m);
	if (m>n) {
		arr[m] = x;
	}
	else {
		for (i = n; i>=m; i--) {
			arr[i] = arr[i-1];
		}
		arr[i] = x;
	}
	for (i = 0; i<n+1; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

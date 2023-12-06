/*
 * ex4.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Mohamed Emad
 */


#include <stdio.h>

int main () {
	int arr[15];
	int *ptr, num, i;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);
	scanf("%d", &num);
	printf("Input %d number of elements in the array : \n", num);
	ptr = arr;
	for(i = 0; i<num; i++) {
		printf("Enter element - %d : ", i + 1);
		fflush(stdout);
		scanf("%d", &arr[i]);
		ptr++;
	}
	printf("The elements of array in reverse order are :\n");
	for(i = num; i>0; i--) {
		ptr--;
		printf("Element - %d : %d\n", i, *ptr);
	}
	return 0;
}

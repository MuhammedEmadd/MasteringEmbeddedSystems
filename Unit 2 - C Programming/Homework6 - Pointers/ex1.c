/*
 * ex1.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Mohamed Emad
 */


#include <stdio.h>

int main () {
	int m, *ab;
	m = 29;
	printf("The address of m : 0x%x \n", &m);
	printf("The value of m : %d \n", m);
	ab = &m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : 0x%x \n", ab);
	printf("Content of pointer ab : %d \n", *ab);
	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%x \n", ab);
	printf("Content of pointer ab : %d \n", *ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("The address of m : 0x%x \n", &m);
	printf("The value of m : %d \n", m);
	return 0;
}

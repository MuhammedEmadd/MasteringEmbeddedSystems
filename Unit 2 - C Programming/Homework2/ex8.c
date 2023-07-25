/*
 * ex8.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Mohamed Emad
 */

#include <stdio.h>

void main () {
	char c;
	float a, b;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdout);
	scanf("%c", &c);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f", &a);
	scanf("%f", &b);
	switch (c) {
	case '+':
		printf ("%f %c %f = %f", a, c, b, a + b);
		break;
	case '-':
		printf ("%f %c %f = %f", a, c, b, a - b);
		break;
	case '*':
		printf ("%f %c %f = %f", a, c, b, a * b);
		break;
	case '/':
		printf ("%f %c %f = %f", a, c, b, a / b);
		break;
	default:
		printf("You entered wrong operator");
	}
}

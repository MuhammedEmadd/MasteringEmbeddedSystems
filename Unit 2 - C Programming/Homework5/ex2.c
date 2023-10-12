/*
 * ex2.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Mohamed Emad
 */

//EX2: C Program to Add Two Distances (in inch-feet) System Using Structures
#include <stdio.h>

struct SDistance {
	int feet;
	float inch;
};

struct SDistance Add(struct SDistance d1, struct SDistance d2) {
	struct SDistance sum;
	sum.inch = d1.inch + d2.inch;
	if (sum.inch >= 12.0) {
		sum.feet = d1.feet + d2.feet + 1;
		sum.inch-=12;
	}
	else
		sum.feet = d1.feet + d2.feet;

	return sum;
}

int main() {
	struct SDistance d1, d2;
	printf("Enter information for 1st distance: \n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d1.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d1.inch);
	printf("Enter information for 2nd distance: \n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d2.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d2.inch);

	struct SDistance sum = Add(d1, d2);
	printf("Sum of distances = %d\'%f", sum.feet, sum.inch);

	return 0;
}

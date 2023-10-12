/*
 * ex1.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Mohamed Emad
 */

//EX1: C Program to Store Information(name, roll and marks) of a Student Using Structure
#include <stdio.h>

struct SStudentInfo {
	char name [30];
	int roll;
	float marks;
};

int main() {
	struct SStudentInfo student;
	printf("Enter information of students: \n");
	printf("Enter name: ");
	fflush(stdout);
	scanf("%s", student.name);
	printf("Enter roll: ");
	fflush(stdout);
	scanf("%d", &student.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &student.marks);

	printf("Displaying Information\nName: %s\nRoll: %d\nMarks: %f\n", student.name, student.roll, student.marks);
	return 0;
}

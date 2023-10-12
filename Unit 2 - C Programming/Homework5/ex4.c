/*
 * ex4.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Mohamed Emad
 */

//EX4: C Program to Store Information of Students Using Structure
#include <stdio.h>

struct SStudent {
	char name[30];
	int roll, marks;
};

int main() {
	struct SStudent students[10];
	printf("Enter information for students: \n");

	for(int i = 0; i < sizeof(students)/sizeof(struct SStudent); i++) {
		printf("For roll number %d\n", i+1);
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s", students[i].name);
		printf("Enter marks: ");
		fflush(stdout);
		scanf("%d", &students[i].marks);
		students[i].roll = i+1;
	}

	printf("Displaying information for students:\n");
	for(int i = 0; i < sizeof(students)/sizeof(struct SStudent); i++) {
		printf("Information for roll number %d\n", students[i].roll);
		printf("Name: %s\n", students[i].name);
		printf("Marks: %d\n", students[i].marks);
	}

	return 0;
}

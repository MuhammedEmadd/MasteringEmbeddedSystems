/*
 * ex5.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Mohamed Emad
 */


#include <stdio.h>
struct SEmployee {
	char * name;
	int id;
};
int main () {
	struct SEmployee e1 = {"Alex", 1001}, e2 = {"John", 1002}, e3 = {"Mark", 1003};

	struct SEmployee (*arr[]) = {&e1, &e2, &e3};

	struct SEmployee (*(*ptr)[]) = &arr;

	for (int i = 0; i<3; i++) {
		printf ("Employee name: %s ID: %d \n", (**(*ptr+i)).name, (**(*ptr+i)).id);
	}

	return 0;
}

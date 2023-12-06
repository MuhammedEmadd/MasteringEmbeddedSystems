/*
 * ex2.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Mohamed Emad
 */


#include <stdio.h>

int main () {
	char alphabets[26];
	char *ptr = alphabets;
	for (int i = 0; i < 26; i++) {
		*ptr = i + 'A';
		ptr++;
	}
	ptr = alphabets;
	for (int i = 0; i < 26; i++) {
		printf("%c\t", *ptr);
		ptr++;
	}
	return 0;
}

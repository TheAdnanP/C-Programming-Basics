/*
 ============================================================================
 Name        : StudentPassTest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	puts("Enter your mark: ");
	scanf("%f",&mark);
	if(mark>=50){
		printf("You have passed the test");

	}
	else{
		printf("You have failed the test");
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : StudentGrade.c
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
	printf("Enter your marks: ");
	scanf("%f",&mark);
	if(mark>=90){
		printf("Your obtained grade: A");
	}else if(mark>=80){
		printf("Your obtained grade: B");
	}else if(mark>=70){
		printf("Your obtained grade: C");
	}else if(mark>=60){
		printf("Your obtained grade: D");

	}else if(mark>=50){
		printf("Your obtained grade: E");
	}else if(mark<50){
		printf("You have failed the test");
	}
	return EXIT_SUCCESS;
}

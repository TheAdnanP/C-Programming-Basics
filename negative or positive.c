/*
 ============================================================================
 Name        : negative.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	if(num < 0){
		printf("the number you entered is a negative number");

	}
	else{
		printf("the number you entered is a positve number");
	}
	return EXIT_SUCCESS;
}

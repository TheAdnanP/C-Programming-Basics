/*
 ============================================================================
 Name        : largernumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	puts("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		printf("the number %d is greater than the other",num1);

	}
	else{
		printf("the number %d is greater than the other",num2);
	}
	return EXIT_SUCCESS;
}

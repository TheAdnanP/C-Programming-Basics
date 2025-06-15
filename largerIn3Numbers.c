/*
 ============================================================================
 Name        : largerIn3Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3){
			printf("Number %d is greater than the other 2 numbers",num1);

	}
	else if(num2>num1&&num2>num3){
		printf("Number %d is greater than the other 2 numbers",num2);

	}
	else{
		printf("Number %d is greater than the other 2 numbers",num3);
	}
	return EXIT_SUCCESS;
}

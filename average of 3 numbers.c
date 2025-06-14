/*
 ============================================================================
 Name        : Average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float number1,number2,number3,average;
	printf("Enter 3 numbers to get the average");
	scanf("%f%f%f",&number1,&number2,&number3);
	average=(number1+number2+number3)/3;
	printf("Average is : %f",average);

	return EXIT_SUCCESS;
}

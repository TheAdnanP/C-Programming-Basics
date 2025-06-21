/*
 ============================================================================
 Name        : StarPrintingExercise1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,i,j;
	printf("enter a number : ");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
	printf("\n");
	}
	return EXIT_SUCCESS;
}

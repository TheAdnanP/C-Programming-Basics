/*
 ============================================================================
 Name        : StarPrintingExcersise.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,row;
	printf("Enter a Number : ");
	scanf("%d",&row);
	for(i=row;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");

	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : SumOfnNumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number,sum;
	sum=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	for(i=1;i<number;i++){
		sum=sum+i;

	}
	printf("result = %d",sum);

	return EXIT_SUCCESS;
}

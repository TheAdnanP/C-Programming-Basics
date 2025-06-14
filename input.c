/*
 ============================================================================
 Name        : input.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	puts("Enter a Number");
	/* prints Enter a Number */
	scanf("%d",&a);
	/* used to get input from the user "SCANF" */
	printf("You have entered %d",a);

	return EXIT_SUCCESS;
}

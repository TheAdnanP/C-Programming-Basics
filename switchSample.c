/*
 ============================================================================
 Name        : SwitchSample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1 for bun \n2 for bread \n3 for friedrice \n4 for noodles \nenter your choice: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected bun");
		break;
	case 2:
		printf("you have selected bread");
		break;
	case 3:
		printf("you have selected friedrice");
		break;
	case 4:
		printf("you have selected noodles");
		break;
	default:
		printf("fool!!!!!!!!!");
	}

	return EXIT_SUCCESS;
}


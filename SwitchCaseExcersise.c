/*
 ============================================================================
 Name        : SwitchCaseExcersise.c
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
	printf("CHOOSE A DAY FOR BOOKING SURFING \n1 for Sunday \n2 for Monday \n3 for Tuesday \n4 for Wednesday \n5 for Thursday \n6 for Friday \n7 for Saturday \nEnter you choice: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("Sunday is a good choice for surfing",choice);
		break;
	case 2:
			printf("Monday is a good choice for surfing",choice);
			break;
	case 3:
			printf("Tuesday is a good choice for surfing",choice);
			break;
	case 4:
			printf("Wednesday is a good choice for surfing",choice);
			break;
	case 5:
			printf("Thursday is a good choice for surfing",choice);
			break;
	case 6:
			printf("Friday is a good choice for surfing",choice);
			break;
	case 7:
			printf("Saturday is a good choice for surfing",choice);
			break;
	default:
		printf("Your choice is not clear please choose which is one the menu");
	}


	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : basicMathematicsChoice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice,num1,num2,result;
	printf("Enter 2 numbers: "); /* prints !!!Hello World!!! */
	scanf("%d%d",&num1,&num2);
	printf("1 for addition \n2 for subtraction \n3 for multiplication \n4 for division \n Enter your choice: ");
	scanf("%d",&choice);
	if(choice==1){
		result=num1+num2;
		printf("Result = %d",result);
	}else if(choice==2){
		result=num1-num2;
		printf("Result = %d",result);
	}else if(choice==3){
		result=num1*num2;
		printf("Result = %d",result);
	}else if(choice==4){
		result=num1/num2;
		printf("Result = %d",result);
	}else{
		printf("Fool!!!!!!");
	}



	return EXIT_SUCCESS;
}

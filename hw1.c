#include <stdio.h>
#include <math.h>

/***************************************************
Homework 1 source code.
Author: Michael Escue

Date: 10/06/18

****************************************************/

//Function to check the math on question #1.
int num1(float baselevel){
	
	float total = 0;						//Total count of soldiers.
	float leaders_of_ten = 0;			
	float leaders_of_one_hundered = 0;
	float leaders_of_one_thousand = 0;

	total = baselevel;						//Input given at the terminal initiates the total.

	printf("total of base-level soldiers = %f\n", total);
	
	leaders_of_ten = (baselevel/10.0);  

	leaders_of_ten = ceil(leaders_of_ten);	// Rounds up for fractional results. 

	total += (leaders_of_ten);

	printf("total including \"leaders of ten\"= %f\n", total);

	
	leaders_of_one_hundered = (leaders_of_ten / 10);

	leaders_of_one_hundered = ceil(leaders_of_one_hundered);

	total += (leaders_of_one_hundered); 

	printf("total including \"leaders of one-hundered\"= %f\n", total);

	leaders_of_one_thousand = (leaders_of_one_hundered / 10);

	leaders_of_one_thousand = ceil(leaders_of_one_thousand);

	total += (leaders_of_one_thousand);

	printf("total including \"leaders of one-thousand\"= %f\n", total);

	return 0;
}


// Main function. Contains function calls to assignment solutions.
int main(void){

	int soldiers = 0;
		

	// Loop to test problem #1 with multiple values.
	while(1){
		printf("Problem #1:\n Enter the number of soldiers at the base level = ");
		scanf("%d", &soldiers); getchar(); printf("\n");	//Same line for compact-ness.

		num1((float) soldiers);

		printf("Done testing Problem #1? Enter \"y\" to exit, or any other character to continue: "); 
		scanf("%c", &soldiers); getchar();

		printf("\n");	// New line for while loop wrap around.

		if(soldiers == 'y') break;
		else soldiers = 0;

	}


}
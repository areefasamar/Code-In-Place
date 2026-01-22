//Program to show square and cube of a number by using user defined functions
#include<stdio.h>
#include"power.h"
int main (void)
{
	int num;
	
	printf("Enter the Number:");
	scanf("%d", &num);
	
	printf("\nSquare of the Number: %d",square(num));
	printf("\nCube of the Number: %d", cube(num));
	
	return 0;
}

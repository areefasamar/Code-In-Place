#include<stdio.h>
int main (void)
{
	int i, space, j;
	char n=80, m=79;
	
	for( i=4 ; i>=1 ; i--)
	{
		for( space=1 ; space <= 4-i ; space++)
		{
			printf(" ");
		}
		
		for( j=1 ; j<=i ; j++)
		{
			printf(" %c",n);
			n++;
		}
		
		printf("\n");
	}
	
	for( i=1 ; i<=5 ; i++)
	{
		for ( space=1 ; space<=5-i ; space++)
		{
			printf(" ");
		}
		
		for ( j=1 ; j<=i ; j++) 
		{
			printf("%c ",m);
			m--;
		}
		printf("\n");
	}
	return 0;
}

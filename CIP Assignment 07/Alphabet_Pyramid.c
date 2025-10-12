// Program to make an upward pyramid of alphabets
#include<stdio.h>
int main(void)
{
	int i, j, space;
	char n=65; 
	
	for ( i=1 ; i <= 5 ; i++)
	{
		for ( space=1 ; space <= 5-i ; space++ )
		{
		printf(" ");
	    }
	    
	    for( j=1 ; j <= i ; j++)
	    {
	    	
	    	printf("%c ",n);
	    	n++;
		}
		n=65;
		printf("\n");
	}
	
	return 0;
}

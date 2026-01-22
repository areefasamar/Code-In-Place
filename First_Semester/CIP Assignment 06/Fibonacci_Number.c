// Program to write Fibonacci Number
#include<stdio.h>
int main (void)
{
	int a=0,b=1,sum=0;
	
	while (a <= 500)
	{
		if (a >= 300)
          {
		    break;
		  }
		
		if ( a % 5 == 0 && a != 0 )
		  {
		  	sum = a + b;
		    a = b;
            b = sum;
		    continue;
		  }
	    else
	      {
		    printf(" %d",a);
		  }
		  
		   sum = a + b;
	       a = b;
	       b = sum;
	}
	 return 0;
}

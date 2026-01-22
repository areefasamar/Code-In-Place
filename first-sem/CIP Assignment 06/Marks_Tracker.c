// Students Marks Tracker
#include<stdio.h>
int main (void)
{
	int marks, passcount=0, failcount=0, failstreak=0 ;
	
		printf("\nEnter Your Marks (Enter -1 to end):");
		scanf("%d",&marks);
	
	while (marks <= 100 && marks >= -1)
	{
		if (marks == -1)
		{
			break;
		}
		
		if (marks >= 50)
		{
			passcount++;
			failstreak=0;
		}
		
		if (marks < 50)
		{
			failcount++;
			failstreak++;
		}
		
		if ( failstreak > 3)
		{
			break;
		}
		
		printf("\nEnter Your Marks (Enter -1 to end):");
		scanf("%d",&marks);
		
	}
	     printf("\nTotal Passed: %d",passcount);
	     printf("\nTotal Failed: %d",failcount);
	     return 0;	     
}
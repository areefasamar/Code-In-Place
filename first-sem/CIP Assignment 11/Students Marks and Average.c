//Students Marks and Average
#include<stdio.h>
#include<string.h>
	struct Student{
		char name[100];
		int roll_no;
		int marks[3];
	};
	
int main (void)
{
	struct Student s[5];
	int sum[5];
	float average[5], highest_average=0;
	char highest_student[100];
	
	printf("\nEnter the Student Information:");
	for ( int i=0; i<5 ; i++)
	{
		printf("\n\nStudent %d:",i+1);
		printf("\nEnter the Name: ");
		scanf(" %[^\n]s",s[i].name);
		
		printf("Enter the Roll No: ");
		scanf("%d",&s[i].roll_no);
		printf("\n");
		sum[i]=0;
		
		for ( int k=0 ; k<3 ; k++)
		{
			printf("Enter the Marks of Subject %d: ",k+1);
		    scanf("%d",&s[i].marks[k]);
		    sum[i] += s[i].marks[k];
		}
		
		average[i]= sum[i]/3.0 ;
		printf("Average Marks= %.3f",average[i]);
		
		if (average[i]>highest_average)
		{
			highest_average=average[i];
			strcpy(highest_student, s[i].name);
		}
	}
	
         printf("\n\nThe student with highest average marks is %s.",highest_student);
		 return 0;    
}

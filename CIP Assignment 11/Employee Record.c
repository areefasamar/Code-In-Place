//Employee Record
#include<stdio.h>
int main (void)
{
	struct Employee{
		int employee_id;
		char name[50];
		int salary;	
	};
	
	struct Employee record[3];
	
	for ( int i=0 ; i<3 ; i++)
	{
		printf("Enter the Name of Employee %d: ",i+1);
		scanf(" %[^\n]",record[i].name);
		
		printf("Enter the ID of Employee %d: ",i+1);
		scanf("%d", &record[i].employee_id);
		
		printf("Enter the Salary of Employee %d: ",i+1);
		scanf("%d",&record[i].salary);
		
		printf("\n");
	}
	
	printf("\n--------------------------------------------------------------------------------");
	printf("\n\t\t\tEMPLOYEE RECORD");
	printf("\n--------------------------------------------------------------------------------");
	
	for( int i=0 ; i<3 ; i++)
	{
	printf("\n Employee %d:\n",i+1);
	printf("\nName= %s",record[i].name);
	printf("\nEmployee ID= %d", record[i].employee_id);
	printf("\nSalary= %d\n", record[i].salary);
    }
return 0;
}

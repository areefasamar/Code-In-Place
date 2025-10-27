//User Authentication System using Array of Strings
#include<stdio.h>
#include<string.h>
int main(void)
{
	char emails[5][50]= { "ghufran@gmail.com", "aina@gmail.com", "Saif@gmail.com"};
	char passwords[5][50]= { "Hello12345", "Onepieceisreal", "xyz987654321"};
	int choice, users=3, length;
	char email[50];
	char password[50];
	int i;
	
	printf("\n====== Welcome to the Login System =======\n");
	printf("\n01. Sign In");
	printf("\n02. Sign Up");
	printf("\n\nEnter your choice: ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			
			printf("\nEnter Your Email: ");
			scanf("%s",email);
		
			for ( i=0 ; i<users ; i++)
			{
					if ( strcmp( emails[i], email) == 0 )
					{
						        printf("\nEnter Password: ");
			                    scanf("%s",password);
			                     
								if ( strcmp ( passwords[i], password) == 0)
								{
									printf("\nSign In Successful");
									return 0;
								}
								else
								{
									printf("\nInvalid Password");
									return 0;
								}			
					}
			}
			
			printf("\nInvalid Email");
			
		break;
			
			
		case 2:
			
			if ( users >= 5)
			{
				printf("\nUser Limit Reached, cannot register more users.");
				return 0;
			}
			
			printf("\nEnter Your Email: ");
			scanf("%s",email);
			
			for ( i=0 ; i<users ; i++)
			{
				if ( strcmp ( emails[i],email ) == 0)
				{
					printf("\nEmail already exists");
					return 0;
				}
				
			}
			
			printf("\nEnter Your Password: ");
			scanf("%s",password);
			
			if ( strlen ( password ) < 8 )
			{
				printf("\nInvalid Password, Password should consist of atleast 8 characters");
				return 0;
			}
			
			int digit=0;
			int alphabet=0;
			
			for ( i=0 ; i<strlen(password) ; i++)
			{
				if ( (password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z') )
                {
                    alphabet=1;
                }

                if ( password[i] >= '0' && password[i] <= '9')
                {
                   digit = 1;
                }
			}
			
			if ( digit!=1 || alphabet!=1 )
			{
				printf("\nPassword should be Alphanumeric");
				return 0;
			}
			
			strcpy ( emails[users], email);
			strcpy ( passwords[users], password);
			users++;
			
			printf("\n Account Created Successfully, Please Sign In now");
			 
			
		break;	
		
		default: 
		printf("\nInvalid Choice!");
		break;
	}
	
	return 0;
}

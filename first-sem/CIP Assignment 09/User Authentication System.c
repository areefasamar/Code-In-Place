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
	int i, signin = 1;  

	do {
	
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
								printf("\nSign In Successful\n");
								signin = 0;  
								break;
							}
							else
							{
									printf("\nInvalid Password\n");
									signin = 0;
									break;
							}			
					}
			}
			
			if (i == users)
			{
			   printf("\nInvalid Email\n");
		    }
			
		break;
			
			
		case 2:
			
			if ( users >= 5)
			{
				printf("\nUser Limit Reached, cannot register more users.\n");
				signin = 0;   
				break;
			}
			
			printf("\nEnter Your Email: ");
			scanf("%s",email);
			
			for ( i=0 ; i<users ; i++)
			{
				if ( strcmp ( emails[i],email ) == 0)
				{
					printf("\nEmail already exists\n");
					signin = 0;
					break;
				}
				
			}
			if (i != users) break; 
			
			printf("\nEnter Your Password: ");
			scanf("%s",password);
			
			if ( strlen ( password ) < 8 )
			{
				printf("\nInvalid Password, Password should consist of atleast 8 characters\n");
				signin = 0;
				break;
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
				printf("\nPassword should be Alphanumeric\n");
				signin = 0;
				break;
			}
			
			strcpy ( emails[users], email);
			strcpy ( passwords[users], password);
			users++;
			
			printf("\nAccount Created Successfully! Enter 1 to Sign In now: ");
			scanf("%d",&signin);
			 
			
		break;	
		
		default: 
		printf("\nInvalid Choice!\n");
		break;
	}
	
    } while (signin);   
	
	return 0;
}

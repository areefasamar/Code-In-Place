//Program for String Analysis Tool
#include<stdio.h>

	int countVowels(char string[])
	{
		int i, vowelcount=0;
		for ( i=0 ; string[i]!='\0' ; i++ )
		{
			if ( string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O'|| string[i]=='U' )
			{
				vowelcount++;
			}
		}
		return vowelcount;
	}
	
	int countWords(char string[])
	{
		int i, wordcount=0;
		
		for ( i=0 ; string[i]!='\0' ; i++ )
		{
			if ((string[i] != ' ' && string[i] != '\n') && (i == 0 || string[i-1] == ' ' || string[i-1] == '\n'))

			{
				wordcount++;
			}
			
		}
		return wordcount;
	}
	
	int countUppercase(char string[])
	{
		int i, uppercasecount=0;
		
		for ( i=0 ; string[i]!='\0' ; i++)
		{
				if ( string[i]>='A' && string[i]<='Z')
				{
					uppercasecount++;
				}
		}
		return uppercasecount;
	}
	
int main (void)
{
	char string[300];
	
	printf("Enter the String:");
	fgets( string, 300, stdin);
	
	printf("\nTotal Vowels= %d",countVowels(string));
	printf("\nTotal Words= %d", countWords(string));
	printf("\nTotal Uppercase Alphabets= %d", countUppercase(string));
	
	return 0;
}

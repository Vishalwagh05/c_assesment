#include<stdio.h>
#include<string.h>
void check_palindrome(char s1[],int a);
int main()
{
	char s1[20];
	printf("Enter a string\n");
	gets(s1);
	check_palindrome(s1,0);
}
void check_palindrome(char s1[],int a)
{
	int length;
	length=strlen(s1)-(a+1);
	if(s1[a]==s1[length])
	{
		if(a+1==length || a==length)
		{
			printf("The entered string is a palindrome\n");
			return;
		}
		check_palindrome(s1,a+1);
	}
	else
	{
		printf("The entered string is not a palindrome\n");
	}
}



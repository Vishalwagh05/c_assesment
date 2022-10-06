#include<stdio.h>
#include<string.h>
char find_cap(char *s1);	
int main()
{
	char s1[60];
	char capital;
	printf("Enter the String : ");
	gets(s1);
	capital=find_cap(s1);

	if(capital==0)
		printf("There is no capital letter in given word.");
	else
		printf("The first captal letter in the given string is %c\n",capital);
}
char find_cap(char *s1)
{
	static int i=0;
	if(i<strlen(s1))
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{
			return s1[i];
		}
		else
		{
			i=i+1;
			return find_cap(s1);
		}
	}
	else
		return 0;
}

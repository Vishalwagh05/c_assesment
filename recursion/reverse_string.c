#include<stdio.h>
#include<string.h>
void swap(char *a,char *b);
void reverse(char *s1,int a);
int main()
{
	char s1[30];
	printf("Enter a string\n");
	gets(s1);
	reverse(s1,0);
	printf("Reverse string\n");
	printf("%s",s1);
}
void reverse(char *s1,int a)
{
	static int i=0;
	if(*(s1+a)=='\0')
	{
		return ;
	}
	reverse(s1,a+1);
	if(i<=a)
	{
		swap(&s1[i++],&s1[a]);
	}
}
void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}



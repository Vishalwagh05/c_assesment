#include<stdio.h>
void copy_string(char *src,char *des);
int string_length(char *s2);
int main()
{
	char s1[100],s2[100];
	int length;

	printf("Enter a string\n");
	gets(s1);

	copy_string(s1,s2);
	printf("First string = %s\n",s1);
	printf("Second string = %s\n",s2);

	length= string_length(s2);
	printf("The length of string is : %d\n",length);


}
void copy_string(char *src,char *des)
{
	while(*src)
	{
		*des = *src;
		src++;
		des++;
	}
	*des = '\0';
}

int string_length(char *s2)
{
	int cnt=0;
	while(*s2)
	{
		cnt++;
		s2++;
	}
	return cnt;
}

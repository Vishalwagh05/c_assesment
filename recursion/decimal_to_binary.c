#include<stdio.h>
int dec_to_bin(int number);
int main()
{
	int number;
	printf("Enter the decimal number\n");
	scanf("%d",&number);
	printf("%d ",dec_to_bin(number));
}
int dec_to_bin(int number)
{
	if(number==0)
		return 0;
	else
		return (number%2+10*dec_to_bin(number/2));
}


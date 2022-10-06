#include<stdio.h>
int fact(int n);
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Factorial of %d is %d\n",num,fact(num));
}
int fact(int n)
{
	if(n==0)
		return 1;
	return(n*fact(n-1));
}


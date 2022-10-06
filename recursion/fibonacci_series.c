#include<stdio.h>
int fib(int n);
int main()
{
	int i,n;
	printf("Enter the number of element :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d,",fib(i));
	}
	printf("\n");


}
int fib(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return (fib(n-2)+fib(n-1));
}

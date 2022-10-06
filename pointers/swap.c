#include<stdio.h>
int swap(int *a,int *b);
int main()
{
	int a,b;
	printf("Enter a Two Numbers :- ");
	scanf("%d%d",&a,&b);
	printf("Before Swap a= %d , b= %d\n",a,b);
	swap(&a,&b);
	printf("After Swap a= %d , b= %d\n",a,b);
}
int swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

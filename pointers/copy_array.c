#include<stdio.h>
void copy(int *a,int *b);
int main()
{
	int a1[50],a2[50];
	int size,i;
	int *p1 = a1;
	int *p2 = a2;

	printf("Enter a the size of array : ");
	scanf("%d",&size);
	printf("Enter the element of first array : \n");

	for(i=0;i<size;i++)
	{
		scanf("%d",p1+i);
	}
	printf("First Array Elements\n");
	for(i=0;i<size;i++)
	{
		printf("%d,",a1[i]);
	}
	printf("\n");
	copy(p1,p2);
	printf("Second Array Elements\n");
	for(i=0;i<size;i++)
	{
		printf("%d,",a2[i]);
	}
	printf("\n");
}
void  copy(int *a, int *b)
{ 
	int i=0;
	while(a[i])
	{
		*b=*a;
		a++;
		b++;
	}
		
}


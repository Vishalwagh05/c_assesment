

#include<stdio.h>

int check_max(int *p,int n,int num);

int main()
{
	int arr[100];
	int n,i,num,result;
	int *ptr=arr;

	printf("Enter a number of element : ");
	scanf("%d",&n);

	printf("Enter a Array element :\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Enter which number you want check : ");
	scanf("%d",&num);

	result=check_max(ptr,n,num);
	if(result==0)

		printf("%d is %d times in array\n",num,result);
	else
		printf("%d is %d times in array\n",num,result);
}
int check_max(int *p,int n,int num)
{
	int cnt=0,i;
	for(i=0;i<n;i++)
	{
		if(p[i]==num)
			cnt++;
	}
	return cnt;
}


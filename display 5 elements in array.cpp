#include<stdio.h>
int main ()
{
	int arr[100],i,n;
	printf("enter the limit:\n");
	scanf("%d",&n);
	printf("enter the elements of the arrays:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(i==4)
		{
			printf("5th element is %d",arr[i]);
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n,i,j,c,t,b;
	printf("enter the size of array:");
	scanf("%d",&n);
	int array[n-1];
	printf("enter elements into array:\n");
	for(i=0;i<n-1;i++)
	scanf("%d",&array[i]);
	b=array[0];
	for(i=1;i<n-1;i++)
	{
		b=b^array[i];
		printf("b=%d",b);
	}
	for(i=2,c=1;i<=n-1;i++)
	{
		c=c^i;
		c=c^b;
		printf("c=%d",c);
	}
	printf("missing element is :%d\n",c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a[]={1,2,3,2,3,4,6,4,8,3,8},i,j;
	int length=sizeof a/sizeof a[0];
	printf("duplication arry is:");
	for(i=0;i<length;i++)
	{
	for(j=i+1;j<length;j++)
{
	if(a[i]==a[j])
printf("%d\n",a[j]);
}
}
return 0;
}

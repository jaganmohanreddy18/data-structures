#include<stdio.h>
int main()
{
int n1=0,n2=1,n3,i,num,sum=1;
printf("Number of elements:");
scanf("%d",&num);
printf("\n%d %d",n1,n2);
for(i=2; i < num; ++i)
{
n3=n1+n2;
printf(" %d\t",n3);
n1=n2;
n2=n3;
sum=sum+n3;
i++;
}
printf("the series %d",sum);
return 0;
}


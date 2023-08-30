#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,j;
	printf("enter the string:");
	gets(str1);
	printf("enter the second string:");
	gets(str2);
	j=strlen(str1);	
	for(i=0;str2[i]!='\0';i++)
	{
		str1[i+j]=str2[i];
	}
	str1[i+j]='\0';
	printf("combined string:%s\n",str1);
	return 0;
	
}

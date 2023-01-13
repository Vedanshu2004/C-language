#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20],ab;
	printf("enter the first string=");
	gets(a);
	printf("enter th second string=");
	gets(b);
	strcat(a,b);
	printf("join string = %s",a);
	
}

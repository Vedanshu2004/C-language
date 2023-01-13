#include<string.h>
#include<stdio.h>
main()
{
	char a[20];
	int n;
	printf("enter the name=");
	gets(a);
	n=strlen(a);
	printf("length of %s is %d ",a,n);
	getch();
}

#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	int l;
	printf("enter a string=");
	gets(a);
	strcpy(b,a);
	strrev(a);
	l=strcmp(a,b);
	if(l==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	getch();  
}

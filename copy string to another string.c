#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	printf("enter the first string=");
	gets(a);
	strcpy(b,a);
	printf("copied string\n");
	puts(b);
	getch();
	
}

#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20],c[20];
	printf("enter the first string=");
	gets(a);
	printf("enter the second string=");
	gets(b);
	strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
	printf("a=%s\n",a);
	printf("b=%s\n",b);
	getch();
}

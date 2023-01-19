#include<stdio.h>
main()
{
	char a[3][10],i;
	printf("enter the 3 string=\n");
	for(i=0;i<=2;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<=2;i++)
	{
		puts(a[i]);
	}
}   

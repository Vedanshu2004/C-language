#include<stdio.h>
#include<string.h>
main()
{
	char a[10],b[10] ;
	printf("first dtring=");
	gets(a);
	printf("second srtring=");
	gets(b);
	if(strcmp(a,b)==0)
    {
    	printf("strigs are equal");
	}
	else if(strcmp(a,b)>0)
	{
		printf("string first is greater");
	}
	else
	{
		printf("string second is greater");
	}
	getch();
}

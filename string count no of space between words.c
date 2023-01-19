#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,count=0;
	printf("enter a string =");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{
			count=count+1;
		}
	}
	printf("total space=%d",count);
	getch();
}

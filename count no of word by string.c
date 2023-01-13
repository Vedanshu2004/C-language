#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,j=1;
	printf("enter the string=");
	gets(a);
	i=0;
while(a[i]!='\0')
	{
		if(a[i]==' ')
	{
    j++;
	}
	i++;
	}
	printf("number of words=%d",j);
	getch();
}

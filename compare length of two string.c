#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100] ;
	int i=0,j=0,length1=0,length2=0;
	printf("enetr first string=");
	gets(a);
	printf("enter second string=");
	gets(b);
	for(i=0;a[length1]!='\0';i++)
	{
		length1++;
	}
	for(j=0;b[length2]!='\0';j++)
	{
		length2++;
	}
	printf("length1=%d\n",length1);
	printf("length2=%d\n",length2);
	if((length1<length2))
	{
		printf("second string is greater");
	}
	else if((length1>length2))
	{
		printf("first string is greater");
	}
	else
	{
		printf("both are equal");
	}
	getch ();
}

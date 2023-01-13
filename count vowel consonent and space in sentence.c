#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,v=0,c=0,s=0;
	printf("enter the string");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='i' || a[i]=='u')
		{
			v=v+1;
		}
		else if(a[i]==' ')
		{
			s=s+1;
		}
		else
		{
			c=c+1;
		}
	}
	printf("v=%d\n c=%d\n s=%d\n",v,c,s);

}

#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	int i,j,L1,L2,temp,flag=2;
	printf("enter the first string= ");
	gets(a);
	printf("enter the second string= ");
	gets(b);
	L1=strlen(a);
	L2=strlen(b);
	if(L1==L2)
	{
		for(i=0;i<L1;i++)
		{
			for(j=0;j<L1;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<L2;i++)
		{
			for(j=0;j<L2;j++)
			{
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
	if(strcmp(a,b)==0)
	{
	flag=2;
	}
	else
	{
	flag=1;
	}
    }
	if(flag==2)
	{
		printf("it's a anagram");
	}
	else
	{
	printf("not anangram");
	}
	getch();
}

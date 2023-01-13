#include<stdio.h>
main()
{
	int n,a[100],i,b[20],c[20],j=0,k=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		b[j]=a[i];
		j++;
		}
		else
		{
		c[k]=a[i];
		k++;
		}
	}
	printf("even number:\n");
	for(i=0;i<j;i++)
	{
		printf("b[i]=%d\t\n",b[i]);
	}
	printf("odd number:\n");
	for(i=0;i<k;i++)
	{
		printf("c[i]=%d\t",c[i]);
	}
	getch();
} 

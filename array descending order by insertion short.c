#include<stdio.h>
main()
{
	int n,a[100],i,j,temp;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("descending order:\n");f
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

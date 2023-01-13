#include<stdio.h>
main()
{
	int i,n,a[100],p,v;
	printf("enter the value of n=");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("p=");
	scanf("%d",&p);
	printf("v=");
	scanf("%d",&v);
	for(i=(n-1);i>=(p-1);i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=v;
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
}

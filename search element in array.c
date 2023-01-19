#include<stdio.h>
main()
{
	int n,a[100],i,v;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    scanf("%d",&v);
	if(a[i]==v)
	{
		printf("element found");
	}
	else
	{
		printf("element not found");
	}
	getch();
}

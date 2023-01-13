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
	if(p>=n-1)
	{
		printf("deletaion not possible ");
	}
	for(i=(p-1);i<n-1;i++)
	{
		a[i]=a[i+1];
	}  
	for(i=0;i<n-1;i++)
     {
     		printf("%d\n",a[i]);
	 }
	getch();
}

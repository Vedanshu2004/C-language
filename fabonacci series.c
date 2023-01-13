#include<stdio.h>
main()
{
	int i=0,sum=0,a=0,b=1,n;
	printf("enetr teh value of n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("sum=%d\n",sum);
	}
}

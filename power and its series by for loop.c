#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("enter teh value of n and i");
	scanf("%d%d",&n,&i);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(n,i)/i;
	}
		printf("total sum=%d",sum);
}

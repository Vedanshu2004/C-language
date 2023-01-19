#include<stdio.h>
main()
{
	int n,a,sum=0,temp,fact;
	printf("enter the number ");
	scanf("%d",&n);
		temp==n;
	for( ;n!=0;n/10)
	{
		a=n%10;
		fact=fact*a;
		sum= sum+fact;
	
		if(sum==temp)
		{
			printf("strong number=%d",temp);
		}
		else
		{
			printf("not strong number=%d",temp);
		}
	}
}

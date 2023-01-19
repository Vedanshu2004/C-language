#include<stdio.h>
main()
{
	int n,i=1,j,k=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if(i==1 || i==5 || j==1 || j==5)
			printf("*  ");
			else
			{
				printf("  ");
			}
		}
	
		printf("\n");
	}
}

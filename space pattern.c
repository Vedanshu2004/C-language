#include<stdio.h>
main()
{
	int n,i=1,j,s;
	printf("eneter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(s=n;s>=i;s--)
	    {
	    	printf("  ");
		}
		for(j=1;j<=i;j++)
		{ 
			printf("* ");
		}
	
		printf("\n");
	}
	return 0;
}

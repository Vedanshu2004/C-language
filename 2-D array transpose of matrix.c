#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j,n=3;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("transpose of matrix are:\n");
	for(i=0;i<n;i++)
	{
      	printf("[");
		for(j=0;j<n;j++)
		{
			printf("%d  ",b[i][j]);
	    }
	   	 printf("]");
	    printf("\n");
	}
}

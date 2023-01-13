#include<stdio.h>
#include<conio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k,n=2;
	printf("first matrix are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("second matrix are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	printf("multiplication of matrix are:\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for(j=0;j<n;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("]");
		printf("\n");
	}
}


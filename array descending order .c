#include<stdio.h>
main()
{
	int n,a[20],i,j,temp;
	printf(" enter the  value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
		 	}
		}
	}	
printf("descending  order is:\n");
for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
getch();
}

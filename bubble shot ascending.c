#include<stdio.h>
main()
{
	int n,a[20],i,j,temp;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
			if(a[j]=a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
    }
	printf("ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}    

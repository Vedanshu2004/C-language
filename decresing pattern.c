#include<stdio.h>
main()
{
	int n,i=1,j;
	printf("enter the value od n");
	 scanf("%d",&n);
	 for(i=n;i>=1;i--)
	 {
	 	for(j=1;j<=i;j++)
	 	{
		 printf("*  ");
        }
		 printf("\n");
	 }
}

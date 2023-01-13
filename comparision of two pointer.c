#include<stdio.h>
main()
{
	int arr[]={10,20,36,72,4,36};
	int *j,*k;
	j=&arr[4];
	k=(arr+4);
	if(j==k)
	printf("equal");
	else
	printf("not equal");
}

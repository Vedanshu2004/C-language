#include<stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return ;
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
    swap(&x,&y);
	printf("%d\n%d",x,y);
	return 0;
}


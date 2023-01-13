#include<stdio.h>
main()
{
	int a=10,b=20;
	swap(a,b);
	printf("\na=%d b=%d",a,b);
}
swapv(intx,inty)
{
	int  t;
	t=x;
	x=y;
	y=t;
	printf("\nx=%d y=%d",x,y);
}


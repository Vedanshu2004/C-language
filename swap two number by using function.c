#include<stdio.h>
void main()
{
	int a,b;
	void swap(int,int);
	printf("enter the velue of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	swap(a,b);
	getch ();
}
void swap (int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("a=%d\n",x);
	printf("b=%d",y);
}

#include<stdio.h>
void main()
{
	int s,x,y;
	int add(int,int);
	printf("enter value of x=");
	scanf("%d",&x);
	printf("enter value of y=");
	scanf("%d",&y);
	s=add(x,y);
	printf("s=%d",s);
	getch();
}
int add(int a,int b)
{
	int c;
c=a+b;
return (c);
}

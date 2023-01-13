#include<stdio.h>
void main(void);
void main()
{
	add();
	getch();
}
void add(void)
{
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=a+b;
	printf("c=%d",c);
}

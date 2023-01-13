#include<stdio.h>
main()
{
	int i;
	int marks[]={55,65,75,56,74,79,80};
	for(i=0;i<=6;i++)
{
	display(marks[i]);
}
}
display(int m)
{
	printf("%d\n",m);
}

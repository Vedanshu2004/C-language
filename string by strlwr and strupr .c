#include<stdio.h>
#include<string.h>
main()
{
  char a[10];
	printf("enter a string=");
	gets(a);
	strupr(a);
	printf("%s\n",a);
	strlwr(a);
	printf("%s",a);
	getch();
}

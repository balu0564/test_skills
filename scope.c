#include<stdio.h>
int a=10;
void check();
void main()
{
	int a=20;
	{
		int a;
		printf("%d\n",a);
	}
	{
		a=a+10;
	}
	printf("%d\n",a);
	check();
}
void check()
{
	printf("%d\n",a);
}

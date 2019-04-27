#include<stdio.h>
void fun(void);
void main()
{
	fun();
	fun();
	fun();
}
void fun(void)
{
extern int a=5;
	printf("%d\n",a+=2);
}

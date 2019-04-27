#include<stdio.h>
int fun1(void);
int fun2(void);
int fun3(void);
int x;
void main()
{
	x=10;
	printf("%d\n",x);
	printf("%d\n",fun1());
        printf("%d\n",fun2());
        printf("%d\n",fun3());
}
int fun1(void)
{
	x=x+10;
}
int fun2(void)
{
	int y;
	y=1;
	return y;
}
int fun3(void)
{
	x=x+10;
}



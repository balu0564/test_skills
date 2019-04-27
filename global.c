#include<stdio.h>
int a=10;
void vijay();
void main()
{
	printf("%d\n",a);
extern	a=20;
	printf("%d\n",a);
	vijay();
}
void vijay()
{
   int	a=30;
   printf("%d\n",a);
}


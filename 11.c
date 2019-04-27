#include<stdio.h>
int sum(int,int);
void main()
{
	int a=10;
	int b=20,c;
	c=sum(a,b);
	printf("values of a and b after function%d %d\n",a,b);
//	c=a+b;
	printf("returned sum=%d\n",c);

}
int sum(int a,int b)
{
	printf("values that taken from main%d %d\n",a,b);
//	 a=40;
//	 b=50;
	int c;
	c=a+b;
	printf("%d %d\n",a,b);
	printf("%d\n",c);
	return(c);
}

#include<stdio.h>
void main()
{
	float x,p;
	double y,q;
	unsigned k;
	int m=54321;
	long int n=1234567890;
	x=1.234567890000;
	y=9.87654321;
	k=54321;
	p=q=1.0;
	printf("m=%d\n",m);
	printf("n=%ld\n",n);
        printf("x=%f\n",x);
        printf("x=%.12f\n",x);
        printf("y=%f\n",y);
        printf("y=%.12f\n",y);
        printf("k=%u p=%f q=%.12f\n",k,p,q);
}


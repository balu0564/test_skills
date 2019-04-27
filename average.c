#include<stdio.h>
#define N 10
void main()
{
	int count;
	float sum,average,number;
	sum=0;
	count=0;
	while(count<N)
	{
		scanf("%f",&number);
		sum=sum+number;
		count=count+1;
	}
	average=sum/N;
	printf("N=%d  sum=%.2f\n",N,sum);
	printf("Average=%.2f\n",average);
}

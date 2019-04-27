#include<stdio.h>
void main()
{
	int year,period;
	float amount,inrate,value;
	printf("Input amount,interest rate,and period\n\n");
	scanf("%f %f %d",&amount,&inrate,&period);
	printf("\n");
	year=1;
	while(year<=period)
	{
		value=amount+inrate*amount;
		printf("%d Rs %.2f\n",year,value);
	
		year=year+1;
	}
}

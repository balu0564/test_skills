#include<stdio.h>
#define F_LOW 0
#define F_MAX 250
#define STEP 25
void main()
{
	typedef float REAL;
	REAL fahrenheit,celsius;
	fahrenheit=F_LOW;
	printf("fahrenheit celsius\n\n");
	while(fahrenheit<=F_MAX)
	{
		celsius=(fahrenheit-32.0)/1.8;
	        printf("%.1f %.2f\n",fahrenheit,celsius);
		fahrenheit=fahrenheit+STEP;
	}
}


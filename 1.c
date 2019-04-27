#include<stdio.h>
void main()
{

int i;
float sum[10],value;
printf("Enter the values");
for(i=0;i<10;i++)
{
	scanf("%f",&value);
	sum[i]=value;
}
for (i=0;i<10;i=i++)
	{
		if (i<5)
			sum[i]=0.0;
		else 
			sum[i]=1.0;
	}
printf("\n%f",sum[i]);
}

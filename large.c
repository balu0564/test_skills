#include<stdio.h>
int main()
{
	int i,arr[10]={2,5,7,4,1,6,0,17,9,54};
	int small,large;
	small=large=arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i]<small)
			small=arr[i];
		if(arr[i]>large)
			large=arr[i];
	}
	printf("Smallest=%d,Largest=%d\n",small,large);
	return 0;
}

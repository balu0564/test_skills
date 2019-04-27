#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float esal;
};
void main()
{
	struct emp* ptr;
	ptr=(struct emp*)malloc(sizeof(struct emp));
	if (ptr==NULL)
	{
		printf("No Space\n");
	}
	else
	{
		printf("Enter emp details:");
		scanf("%d",&ptr->eno);
	}
}

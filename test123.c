#include <stdio.h>
char* test1();
int main()
{
	char* result;
	result = test1();
	printf("%s\n", result);
}

char* test1()
{
	char* a;
	a = 'c';
	return &a;
}



#include<stdio.h>
void main()
{
int i;
int* ptr;
ptr=&i;
printf("%d\n",i);
printf("%p\n",ptr);
printf("%p\n",&i);
printf("%p\n",&ptr);
printf("%d\n",*ptr);
printf("%d\n",*(&i));
}

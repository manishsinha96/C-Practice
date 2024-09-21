#include<stdio.h>

int main()
{
    int a = 100;
    int *ptr;
    ptr = &a;

    printf("address of variable a is %u\n",ptr);
    printf("before value of variable  a is %d\n",*ptr);

    *ptr = 200;
  printf("after value of variable  a is %d\n",a);
    return 0;
}
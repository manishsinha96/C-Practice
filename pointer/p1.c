#include<stdio.h>


int main()
{
    int a;
    int *ptr;
    ptr = &a;
    printf("address of address variable is :%d\n", &ptr);

    return 0;
}
#include<stdio.h>

int add(int a,int b);


int main()
{
    int a;
    a= add(10,20);
    printf("addiotion of two numbers are %d\n",a);
    return 0;
}
int add(int a,int b)
{
    int c = a*b;
    return c;
}
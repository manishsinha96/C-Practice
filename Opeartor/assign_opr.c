#include<stdio.h>

int main()
{
    int a = 10;
    int b= 20;

    printf(" original value of b is %d\n",b);
    b += a;
    printf(" added value of b is %d\n",b);

    printf(" original value of b is %d\n",b);
    b -= a;
    printf(" subtract value of b is %d\n",b);

    return 0;
}
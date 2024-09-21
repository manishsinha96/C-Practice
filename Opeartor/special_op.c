#include<stdio.h>
// comma operator
int main()
{
    int a;
    int b;
    int c = (a=10, b = 20, a*b);

    printf("value of c = %d\n",c);

    printf("the size of c = %ld\n",sizeof(c));


    return 0;
}
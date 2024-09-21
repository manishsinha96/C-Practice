#include<stdio.h>


int main()
{
    int a = 100,b = 200,add,subb,mul;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    add = *p1 + *p2;
    subb = *p2 - *p1;
   // div = *p1/ *p2;
    mul = *p1 *  *p2;
    printf("value of add variable is :%d\n", add);
    printf("value of subb variable is :%d\n", subb);
    printf("value of multiplications variable is :%d\n", mul);
    printf("value of division variable is :%lf\n",(float) *p1 / *p2);

    return 0;
}
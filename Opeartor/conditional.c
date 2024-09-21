#include<stdio.h>

int main()
{
    int a = 10, b = 20, c = 100, d = 200;
    int result;
    int result1;


    result = (a<b) ? c : d;
    printf("result = %d\n",result);

    result1 = (a<b) ? (a+c) : (a-c);
    printf("result = %d\n",result1);

    result1 = (a>b) ? (a+c) : (a-c);
    printf("result = %d\n",result1);
    return 0;
}

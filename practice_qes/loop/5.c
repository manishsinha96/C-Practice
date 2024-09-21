#include<stdio.h>

int main()
{
    int num,fact=1;
    printf("enter the number :-");
    scanf("%d",&num);

    printf("%d",num);
    int i=num;
    while(i>1)
    {
        fact = fact*i; 
        i--;
        printf(" * %d  ",i);

    }
    //fact = fact*1;
    printf(" = %d\n",fact);
    

    return 0;
}
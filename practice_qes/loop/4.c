#include<stdio.h>

int main()
{
    int num,fact=1;
    printf("enter the number :-");
    scanf("%d",&num);

    int i =1;
    printf("%d",i);
    i=2;
    while(i<=num)
    {

        fact = fact*i; 
        printf(" * %d ",i);
        i++;
    }
    printf("= %d\n",fact);
    

    return 0;
}
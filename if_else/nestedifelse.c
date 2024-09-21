#include<stdio.h>

int main()
{
    int p;

    printf("enter the number:");
    scanf("%d",&p);

    if(p<100)
    {
        if(p<10)
        {
            printf("number is less than 10\n");
        }
        else
        {
            printf("number is greter than 10\n");
        }
    }
    else
    {
        printf("the number greater than 100\n");
    }
    


    return 0;
}
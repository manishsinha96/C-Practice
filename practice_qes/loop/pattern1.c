#include<stdio.h>

int main()
{
    char ch ='*';

    for(int i=0;i<5;i++)
    {
        for(int i=0;i<5;i++)
        printf("%2c",ch);
        printf("\n");
    }


    return 0;
}
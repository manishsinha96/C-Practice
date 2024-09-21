#include<stdio.h>

int main()
{
    int arr[5],i;
    for(i = 0;i<5;i++)
    {
        printf("please enter value of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("array elements are :\n");
    for ( i = 0; i <5; i++)
    printf("%5d",arr[i]);
    printf("\n");
    return 0;
}
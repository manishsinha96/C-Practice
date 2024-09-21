#include<stdio.h>

int main()
{
    int arr[10],sum=0,i = 0;

    for(i=0;i<10;i++)
    {
        printf("enter the array element arr[%d]",i);
        scanf("%d",&arr[i]);
        sum += arr[i];

    }
    printf("sum = %d \n",sum);

    return 0;
}
#include<stdio.h>
#define SIZE 15
int main()
{
    int arr[SIZE]={-1,2,5,4,1,8,9,11,6,3,7},i;
    int small,large;
    small = large = arr[0];
    for(i=0;i<SIZE;i++)
    {
        if(arr[i] < small)
        small = arr[i];
        if(arr[i] >large)
        large = arr[i];
    }
    printf("smallest = %d ,largest = %d\n",small,large);


    return 0;
}
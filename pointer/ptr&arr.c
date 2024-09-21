#include<stdio.h>


int main()
{
    int arr[4] = {1,2,3,4};
    int *ptr = arr;


    for(int i=0;i<=3;i++)
    {
    printf("the element of arr[%d] is %d\n",i,*ptr);
     printf("the address of arr[%d] is %d\n",i,(int)ptr);
    ptr++;
    }


    return 0;
}
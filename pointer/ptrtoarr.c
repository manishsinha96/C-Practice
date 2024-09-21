/*#include<stdio.h>


int main()
{
    int arr[4] = {1,2,3,4};
    int (*ptr)[4] = &arr;

    printf("address of array %d\n",(int)ptr);

    ptr++;
    printf("address of array %d\n",(int)ptr);

    return 0;
}
*/

#include <stdio.h>
 
int main()
{
    int *p,*p1, a=10, b=10;
    p = &a;
    p1 = &b;
    printf("%d\n",(*p)++ + --(*p1));
 
}

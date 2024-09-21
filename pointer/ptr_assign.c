#include<stdio.h>


void swap(int *,int *);
int main()
{
    int a,b;

    printf("enter two numbers number:");
    scanf("%d %d",&a,&b);
    printf("before swaping function %d ,%d\n",a,b);
    swap(&a,&b);
    printf("after swaping function %d ,%d\n",a,b);


    return 0;
}
void swap(int *p,int *q)
{
    int  temp;
    temp = *p;
    *p = *q;
    *q = temp;


}
#include<stdio.h>

int add();

int main()
{
    int a;
    a = add();
    printf("the data return :%d\n",a);

     return 0;

}
int add(){
    printf("in the add()");

    return 100;
}
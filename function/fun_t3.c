#include<stdio.h>

int add(char);

int main()
{

    int a;
    a = add('Z');

    printf("the return data from function add is  %d \n",a);

    return 0;

}
int add(char b)
{
    printf("the revived data from main() is %d \n",b+10);

    return 10;
}
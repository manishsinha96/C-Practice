#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("practice.txt","r");
    //getc(fp);

    printf("the character from file single is = %c\n",getc(fp));

    fclose(fp);


    return 0;
}
#include<stdio.h>

int main()
{
    FILE *fp,*fp1;
    fp = fopen("/home/manish/C/ms.txt","wr");
    fp1 = fopen("/home/manish/C/ms1.txt","wr");

    fclose(fp);
    fclose(fp1);
    return 0;
}
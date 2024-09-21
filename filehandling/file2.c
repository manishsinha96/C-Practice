#include<stdio.h>

//write a character in a file
int main()
{
    FILE *fp;
    fp = fopen("single.txt","w");
    putc('A',fp);

    

    fclose(fp);
    return 0;
}
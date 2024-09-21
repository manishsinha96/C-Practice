#include<stdio.h>

//advance write a character in a file
int main()
{
    FILE *fp;
    char ch = 'a';
    printf("enter the single character :\t");
    ch = getchar();
    fp = fopen("single.txt","w");
    putc(ch,fp);

    fclose(fp);
    return 0;
}
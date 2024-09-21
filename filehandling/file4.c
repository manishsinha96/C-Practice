#include<stdio.h>

//advance write a character in a file
int main()
{
    FILE *fp;
    //char ch;
    fp = fopen("single.txt","r");
    //ch = getc(fp);

    printf("the character from file single is = %c\n",getc(fp));
    fclose(fp);
    return 0;
}
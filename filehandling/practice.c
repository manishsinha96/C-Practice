 #include<stdio.h>

int main()
{
    FILE *fp;
   // char ch = 'b';
    printf("enter a single charcter:");
    //ch = getchar();
    fp = fopen("practice.txt","w");

    //putc(ch,fp);
    putc(getchar(),fp);
    fclose(fp);

    fp = fopen("practice.txt","r");

    printf("the charcter read from file is %c\n",getc(fp));

    fclose(fp);

    return 0;
}
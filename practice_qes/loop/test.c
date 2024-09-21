#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

char *solve(int N,char* ch)
{
    char *result = (char*)malloc((N+1)* sizeof(char));
    for(int i =0;i<N;i++){
    result[i] = ch[i];
    }
    result[N] = '\0';
    return result;
}

int main()
{
    int N;
    scanf("%d",&N);
    int i_ch;
    char *ch = (char *)malloc(sizeof(char)*N);
    for(i_ch = 0;i_ch<N;i_ch++)
    {
        scanf("%c",&ch[i_ch]);
    }
    char *out = solve(N,ch);
    printf("%s",out);
}
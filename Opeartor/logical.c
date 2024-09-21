#include<stdio.h>

int main()
{
    int a = 10,b = 20,c = 50;

    printf("logical AND : %d\n",a<b && b<c); //  1 AND 1
    printf("logical AND : %d\n",a<b && b>c); // 1  AND 0 
    printf("logical AND : %d\n",a>b && b<c); // 0 AND 1
    printf("logical AND :%d\n",a>b && b>c); // 0 AND 0

    printf("------------------------------");

    printf("\nlogical OR : %d\n",a<b || b<c); //  1 OR 1
    printf("logical OR: %d\n",a<b || b>c); // 1  OR 0
    printf("logical OR: %d\n",a>b || b>c); // 0  OR 0 
    printf("logical OR: %d\n",a>b || b<c); // 0  OR 0 

    printf("------------------------------");
    
    printf("\nlogical NOT: %d\n", !(a>b)); //  !0 
    printf("logical NOT: %d\n", !(a<b)); //  !1
  

    printf("logical AND NOT:%d\n",!(a>b && b>c)); //  10>20 && 20>50 ie 0 AND 0







    return 0;
}
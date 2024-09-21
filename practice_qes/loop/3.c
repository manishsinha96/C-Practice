#include<stdio.h>

int main(void)
{
    int num,rem;
    int rev =0;
    printf("enter number to be reverse:");
    scanf("%d",&num);
    int temp = num;
    while(temp!=0)
    {
        rem= temp%10; //get the last digit
        rev = rev*10+rem; // Append digit to reversed number
        temp = temp/10; // Remove the last digit from the original number

    }
    printf("%d\n",rev);
    if(num == rev)
    {
        printf("the number %d is palindrome\n",num);
    }
    else
        printf("the number %d is not palindrome\n,",num);
    return 0;
}
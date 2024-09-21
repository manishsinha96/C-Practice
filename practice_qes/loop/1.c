#include<stdio.h>


int main()
{
	char ch;
	int num;
	int i=0;
	printf("enter the character to be print:");
	scanf("%c",&ch);

	printf("number of times the character to be print:");
	scanf("%d",&num);
	while(i < num)
	{
	printf("%c",ch);
	i++;
	}
	
		return 0;
	}

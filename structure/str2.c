#include<stdio.h>


typedef struct  student
    {   
        char name[20];
        int age ;
        int rollno;
        float marks;

    }stut_t;
int main()
{
    stut_t s1;
    printf("enter student name :");
    scanf("%s",&s1.name);

    printf("enter student age :");
    scanf("%d",&s1.age);

    printf("enter student rollno :");
    scanf("%d",&s1.rollno);

    printf("enter student marks :");
    scanf("%f",&s1.marks);

    printf("student details\n name is %s\n age is %d\n rollno is %d\n marks is %f\n",s1.name,s1.age,s1.rollno,s1.marks);

    return 0;
}
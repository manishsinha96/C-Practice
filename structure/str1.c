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

    stut_t s1 = { 
        .name = "manish",
        .age = 28,
        .marks = 30,
        .rollno = 84186,
    };

    printf("details of student \n name = %s\n age = %d,\nroll no = %d,\nmarks = %f\n",s1.name,s1.age,s1.rollno,s1.marks);
 
    



    return 0;
}
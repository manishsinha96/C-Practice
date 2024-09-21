#include<stdio.h>

typedef struct  student
    {   
        char name[20];
        int age ;
        int rollno;
        float marks;

    }stut_t;

void accept_student(stut_t *);
void print_student(stut_t );

int main()
{
    stut_t s1;

    accept_student(&s1);
    print_student(s1);

    return 0;

}
void accept_student(stut_t *s)
{
    printf("enter student detals :(name,age,rollno,marks):");
    scanf("%s  %d %d %f",s->name,&s->age ,&s->rollno ,&s->marks);

}
void print_student(stut_t k)
{
    printf("student name:%s\n age=%d\n rollno=:%d\n marks=%f\n",k.name,k.age,k.rollno,k.marks);
}
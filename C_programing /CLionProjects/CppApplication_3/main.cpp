#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks;
    char uid[8];
};
int main()
{
    struct student a;
    printf("enter the name of the student\n");
    scanf("%s",&a.name);
    printf("enter the marks of the student\n");
    scanf("%d",&a.marks);
    printf("%s-",a.name);
    printf(" %d\n",a.marks);
    if(a.marks>60)
    {
        printf("passed!!!!\n");
    }
    else
    {
        printf("fail!!!\n");
    }
    return 0;
}
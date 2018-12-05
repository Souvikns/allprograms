#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    char uid[9];
};
int main()
{
    struct student a[10];
    printf("enter your name\n");
    scanf("%s",a->name);
    printf("enter your roll\n");
    scanf("%d",&a->roll);
    printf("enter your uid\n");
    scanf(" %s",a->uid);
    printf("\n");
    printf("%s\n",a->name);
    printf("%d\n",a->roll);
    printf("%s\n",a->uid);
    return 0;
    
}

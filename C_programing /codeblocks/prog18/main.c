#include <stdio.h>
#include <stdlib.h>

int main()
{
    int roll,maths,phy,chem;
    char  name;
    printf("enter your name\n");
    scanf("%s",&name);
    printf("enter your roll no");
    scanf("%d",&roll);
    printf("enter marks of three subjects\n");;
    scanf("%d%d%d",&maths,&phy,&chem);
    int total=maths+phy+chem;
    double percentage=(total/300)*100;
    printf("total=%d",total);
    printf("percentage=%d",percentage);


    return 0;
}

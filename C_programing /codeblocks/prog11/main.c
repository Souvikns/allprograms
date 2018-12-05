#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths,phy,chem;
    printf("Enter the marks of the subjects\n");
    printf("maths \n");
    scanf("%d",&maths);
    printf("physics\n");
    scanf("%d",&phy);
    printf("chemistry\n");
    scanf("%d",&chem);
    int total=maths+phy+chem;
    if(maths>=65&&phy>=55&&chem>=50||total>=180)
        printf("you are eligible");
    else
        printf("you are not eligible");

    return 0;
}

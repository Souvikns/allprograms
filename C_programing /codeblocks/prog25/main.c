#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths,phy,chem;
    printf("enter marks of three subjets");
    scanf("%d%d%d",&maths,&phy,&chem);
    int total=maths+phy+chem;
    if(maths>=65&&phy>=55&&chem>=50&&total>=180||maths+((phy+chem)/2)>=140)
        printf("you are eligible for admission in the institute");
    else
        printf("you are not eligible for admission in the institute");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    printf("enter the elements in a 3x3 matrix\n");
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%dx%d=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    return 0;
}

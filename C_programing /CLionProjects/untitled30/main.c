#include <stdio.h>

int main() {
    int i,j,k;
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
           for(k=1;k<=j;k++)
           {
               if(k%2==0)
               {
                   printf("\n");
               }
               else
               {
                   continue;
               }
           }
           //printf("\n");
        }
        printf("\n");
    }
    return 0;
}

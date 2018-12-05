//pointers


#include <stdio.h>

int main() {
   int a[5];
   int *ptr=a;
   printf("enter 5 numbers\n");

   for(;ptr<=&a[5];ptr++ )
   {
       scanf("%d",&ptr);
   }
    for(;ptr<&a[5];ptr++ )
    {
        printf("%d",ptr);
    }
    return 0;
}
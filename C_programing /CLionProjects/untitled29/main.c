#include <stdio.h>
int fact(int a)
{
   int sum=1;
   if(a==0)
   {
       sum=1;
   }
   else
   {
       sum=a*fact(a-1);
   }
   return sum;
}

int main() {
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int fact1=fact(n);
    printf("the fatorial of the number is %d",fact1);
    return 0;
}
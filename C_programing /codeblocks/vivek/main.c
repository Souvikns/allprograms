#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d,e,f,g,h,i,j;
   printf("enter 10 number to find their sum and average\n");
   scanf("%d%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    int sum;
    float avg;
    sum=a+b+c+d+e+f+g+h+i+j;
    avg=sum/10;
    printf("the sum of all the 10 numbers are %d\n",sum);
    printf("the average is %f\n",avg);
    return 0;
}

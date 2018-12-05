// the logic of the program is that we assign the first element of the array to small and check it with all the other numbers of the array and if there is a number which
// is smaller than small then replace the value in the small with that number.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5]={5,7,1,4,6};
    int small=a[0];
    int pos=0;
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
        if(a[i]<small)
        {
            small=a[i];
            pos=i;
        }
    }
    printf("the smallest number in the array is %d in th position %d",small,pos);
}

#include <stdio.h>
const int max=3;
int main() {
    int var[]={10,100,200};
    int *ptr;
    ptr=&var;
    while(ptr<=&var[max-1])
    {

        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}
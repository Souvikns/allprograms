#include <stdio.h>
 void function(int a)
 {
    if(a==100)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d\n",a);
        function(a+1);
    }
 }

int main() {
    function(1);
    return 0;
}
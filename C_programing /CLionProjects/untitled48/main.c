#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    printf("enter a string\n");
    gets(a);
    int l = strlen(a);
    int i;
    int j;
    int k;
    for (i = 0;i<l;i++) {
        if (a[i] == 32) {
            k = i;
            for (j = i; j >= 0; j--) {
                printf("%c", a[j]);

            }

            if (i == l) {
                for (j = i; j > k; j--) {
                    printf("%c", a[j]);
                }
            }
        }
    }


    return 0;
}



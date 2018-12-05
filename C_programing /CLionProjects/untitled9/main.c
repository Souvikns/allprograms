#include <stdio.h>

int main() {
    int a[3][3];
    int b[3][3];
    printf("enter numbers in the array\n");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter numbers in the array \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int c[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
        }
    }
    int k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);

            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

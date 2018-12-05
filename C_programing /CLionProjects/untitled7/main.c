#include <stdio.h>

int main() {
    int a[3][3];
    int b[3][3];
    int i, j;
    printf("enter a numbers in the 3x3 matrix\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter another matrix\n");
    int x, y;
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            scanf("%d", &b[x][y]);
        }
    }
    int c[3][3];
    int h, k;
    for (h = 0; h < 3; h++) {
        for (k = 0; k < 3; k++) {
            c[h][k] = a[h][k] + b[h][k];
            printf("%d + %d = %d |", a[h][k], b[h][k], c[h][k]);
        }
        printf("\n");
    }
    return 0;
}
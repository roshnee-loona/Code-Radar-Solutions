#include <stdio.h>
int main() {
    int n, x, y, z, c = 1;
    scanf("%d", &n);
    
    // Upper part of the diamond
    for (x = 0; x < n; x++) {
        for (y = 0; y < (n - x - 1); y++) {
            printf(" ");
        }
        for (z = 0; z < c; z++) {
            printf("*");
        }
        c += 2;
        printf("\n");
    }
    
    // Lower part of the diamond
    c -= 4;
    for (x = 1; x < n; x++) {
        for (y = 0; y < x; y++) {
            printf(" ");
        }
        for (z = 0; z < c; z++) {
            printf("*");
        }
        c -= 2;
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, x, y, z;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        for (y = 1; y <= (n - x); y++) {
            printf(" ");
        }

        for (z = 1; z <= x; z++) {
            printf("%d ", z); 
        }

        printf("\n"); 
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, x, y, z, c = 1;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (x = 0; x < n; x++) {
        // Print leading spaces for pyramid shape
        for (y = 0; y < (n - x - 1); y++) {
            printf("  "); // Two spaces for better alignment
        }

        // Print numbers in increasing order
        for (z = 1; z <= c; z++) {
            printf("%d ", z);
        }

        c += 2; // Increase number count for next row
        printf("\n"); // Move to next line
    }

    return 0;
}

#include <stdio.h>
int main() {
    int n, x, y, z;
    scanf("%d", &n);
    
    for (x = n; x >= 1; x++) {
        for (y = 1 ; y <= x; y--) {
            printf("%d ",y);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int n, x, y, z;
    scanf("%d", &n);
    
    for (x = 0; x < n; x++) {
        for (y = x; y >= 0; y--) {
            printf("%d ",x);
        }
        printf("\n");
    }
    return 0;
}

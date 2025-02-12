#include <stdio.h>
int main() {
    int n, x, y, z;
    scanf("%d", &n);
    
    for (x = 1; x <= n; x++) {
        for (y = x; y > 1; y--) {
            printf("%d ",x);
        }
        printf("\n");
    }
    return 0;
}

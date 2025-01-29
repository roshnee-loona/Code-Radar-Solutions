#include <stdio.h>
int main() {
    int x,n;
    scanf("%d %d",&x,&n);
    int bit = x >> n-1 & 1;
    printf("%d",bit);
    return 0;
}
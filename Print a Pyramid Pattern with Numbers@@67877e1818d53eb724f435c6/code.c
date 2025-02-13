#include <stdio.h>
int main(){
    int n,x,y,z;
    scanf("%d",&n);
    for(x = 0;x < n;x++){
        for(y = 0;y < (n-x-1);y++){
            printf("  ");
        }
        for(z = 1;z<=x;z++){
            printf("%d ",z);
        }
        printf("\n");
    }
return 0;
}
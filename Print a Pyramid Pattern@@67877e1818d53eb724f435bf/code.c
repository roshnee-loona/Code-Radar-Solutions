#include <stdio.h>
int main(){
    int n,x,y,z;
    scanf("%d",&n);
    for(x = 0;x < n;x++){
        for(y = 0;y < (n-x-1);y++){
            printf(" ");
        }
        int c = 1;
        for(z = 0;z <= c;z++){
        printf("*");
        }
        c=c+2;
        printf("\n");
    }
return 0;
}
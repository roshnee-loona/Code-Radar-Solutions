#include <stdio.h>
int main(){
    int n,x,y,z,c=1;
    scanf("%d",&n);
    for(x = 0;x < n;x++){
        for(y = 0;y < (n-x-1);y++){
            printf(" ");
        }
        for(z = 1;z<=c;z++){
        printf("%d ",z);
        }
        c=c+2;
        printf("\n");
    }
return 0;
}
#include<stdio.h>
int main(){
    int n;
    int x,y,z;
    scanf("%d",&n);
    for(x=0;x<n;x++){
        for(y=0;y<=x;y++){
            printf("%d",y);
        }
        printf("\n");
    }
    return 0;
}
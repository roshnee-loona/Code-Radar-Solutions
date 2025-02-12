#include<stdio.h>
int main(){
    int n;
    int x,y,z;
    scanf("%d",&n);
    for(x=0;x<n;x++){
        for(y=0;y<(x-n-1);y++){
            printf(" ");
        }
        for(z=0;z<x;z++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    int c = 1;
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        for(int y=0;y<=x;y++){
            printf("%c ",c);
            c = c + 1;
        }
    printf("\n");
    }
    return 0;
}
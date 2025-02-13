#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int x=0;x<n;x++){
            int c = 1;
        for(int y=0;y<=x;y++){
            printf("%c ",c);
            c = c + 1;
        }
    printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    for(int x=0;x<n;x++){
            int c = 65;
        for(int y=0;y<=x;y++){
            printf("%c ",&c);
            c = c + 1;
        }
    printf("\n");
    }
    return 0;
}
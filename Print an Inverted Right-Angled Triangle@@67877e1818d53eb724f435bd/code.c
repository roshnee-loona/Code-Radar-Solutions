#include <stdio.h>
int main() {
    int a,x,y;
    scanf("%d",&a);
    for(x=a;x>=1;x--){
    for(y=1;y<=x;y++){
        printf("* ");
    }printf("\n");
        }    return 0;
}
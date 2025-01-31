#include <stdio.h>
int main() {
    int a,b;
    char ch;
    switch(ch){
        case '+':{
        c = a+b;
        printf("%d",c);
    }
    break;
    case '-':{
    c = a-b;
    printf("%d",c);
    }
    break;
    case '*':
    {
        c = a*b;
        printf("%d",c);
    }
    break;
    case '/':{
        c = a/b;
        printf("%d",c);
    }
    break;
    default:
    printf("Error");
    }}
    printf("%s", welcome());
    return 0;
}
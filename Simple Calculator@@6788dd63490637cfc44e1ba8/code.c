#include <stdio.h>
int main() {
    int a,b;
    int c;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    switch(ch){
        case '+':{
        c = a + b;
        printf("%d", c);}
    break;
    case '-':{
    c = a - b;
    printf("%d", c);
    }
    break;
    case '*':
    {
        c = a * b;
        printf("%d", c);
    }
    break;
    case '/':{
    if (b!=0){
        c = a / b;
        printf("%d", c);
    }
    }
    break;
    }
    return 0;
}
    
    return 0;
}

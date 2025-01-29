#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    int a = int(c);
    if (a >= 96 && a <= 122)
    printf("Lowercase");
else 
printf("Uppercase");
    return 0;
}
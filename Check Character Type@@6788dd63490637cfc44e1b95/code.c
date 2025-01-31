#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    int a = (int)c;
    if ((a>= 65 && a<= 90) ||(a >= 96 && a<= 122)){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E'||c == 'I' || c == 'O' || c == 'U')
    printf("Vowel");
    else 
    printf( "Consonant");}
    else if ( a >= 48 && a <= 57)
    printf("Digit");
    else 
    printf("Special Character");
    return 0;
}
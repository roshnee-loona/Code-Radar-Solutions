#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    int a = (int)c;
    if (a >= 96 && a<= 122){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    printf("Vowel");
    else 
    printf( "Consonant");}
    else if ( a >= 48 && a <= 57)
    printf("Digit");
    else 
    printf("Special Character");
    return 0;
}
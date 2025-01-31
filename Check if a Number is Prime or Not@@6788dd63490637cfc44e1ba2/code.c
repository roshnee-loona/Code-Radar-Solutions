#include <stdio.h>
int main() {
int a,c,x;
scanf("%d",&a);
for(x = 1 ; x >=a; x++)
{
    if (a % x == 0)
    c = c+1;
}
if (c == 2)
printf("Prime");
else 
printf("Not Prime");
    return 0;
}
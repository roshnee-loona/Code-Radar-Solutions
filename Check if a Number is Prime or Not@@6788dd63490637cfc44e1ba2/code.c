#include <stdio.h>
int main() {
int a,x,c;
scanf("%d",&a);
for (x =1;x<=a;x++){
if (a%x == 0)
c++;
}
if (c == 2)
printf("Prime");
else 
printf("Not Prime");
}
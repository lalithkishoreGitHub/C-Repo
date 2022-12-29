#include <stdio.h>

int main() {

int a, b, c;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
//Conditional statements
if(a>b) {
printf("%d is greater than %d",a,b);
}
else if(a<b) {
printf("%d is greater than %d",b,a);
}
else if(a==b) {
printf("%d is equal to %d",a,b);
}
return 0;
}

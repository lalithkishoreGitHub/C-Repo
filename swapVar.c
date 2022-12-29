#include<stdio.h>

int main() {
int a,b,temp;
//Before swapping
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
//Swapping logic
temp=a;
a=b;
b=temp;
//After swapping
printf("After swapping\n");
printf("The value of a is %d\n",a);
printf("The value of b is %d\n",b);
return 0;
}

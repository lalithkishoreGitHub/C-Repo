#include<stdio.h>

void main() {
    int a,b,*ptr,*qtr;
    ptr=&a;
    qtr=&b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("sum = %d",(*ptr + *qtr));
}
#include<stdio.h>

int swap(int *x, int *y)
 {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}
void main()
 {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\na = %d\nb = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping:\na = %d\nb = %d\n",a,b);
    return;
}

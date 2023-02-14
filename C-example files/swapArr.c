#include<stdio.h>

void main() {
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},c[5],i,*atr=&a[0],*btr=&b[0],*ctr=&c[0];
    printf("Before swapping: \n");
    printf("Array A: \n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("Array B: \n");
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    printf("Array after swapping: \n");
    ctr=atr;
    atr=btr;
    btr=ctr;
    printf("Array A\n");
    for(i=0;i<5;i++){
        printf("%d ",*atr);
        atr++;
    }
     printf("Array B\n");
    for(i=0;i<5;i++){
        printf("%d ",*btr);
        btr++;
    }

}
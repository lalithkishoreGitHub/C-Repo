#include<stdio.h>

void main() {
    int a[10],*ptr,i;
    printf("Enter array elements one by one: ");
    for(i=0;i<4;i++) {
        scanf("%d",&a[i]);
    }
    printf("After reversing: ");
    ptr=&a[3];
    for(i=4;i>=0;i--) {
        printf("%d ",*ptr);
        ptr--;
        /*if(ptr==&a[-1]) {
            break;
        }*/
    }
}
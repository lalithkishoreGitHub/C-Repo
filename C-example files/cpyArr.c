#include<stdio.h>
//swapping of arrays using pointers
void main() {
    int a[10],b[10],i,c[10];
    printf("Enter array A elements one by one: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter array B elements one by one: ");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        *(c+i)=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=*(c+i);
    }
    printf("After swapping: \n");
    printf("array A: ");
    for(i=0;i<5;i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
    printf("array B: ");
    for(i=0;i<5;i++){
        printf("%d ",*(b+i));
    }
    printf("\n");
}

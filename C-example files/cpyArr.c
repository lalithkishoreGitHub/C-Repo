#include<stdio.h>
//swapping of arrays using pointers
void main() {
    int a[10],b[10],i,*atr=&a[0],*btr=&b[0];
    printf("Enter array elements one by one: ");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        *(a+i)=*(b+i);
        atr++;
        btr++;
    }
    printf("After copying: \n");
    for(i=0;i<5;i++){
        printf("%d ",*(a+i));
        atr++;
        if(atr==&a[4]){
            break;
        }
    }
    printf("\n");
}
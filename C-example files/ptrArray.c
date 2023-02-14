#include<stdio.h>

void printArray() {
    int b[10],*ptr=&b[0], j;
    printf("Enter your ARRAY elements one by one\n");
    for(j=0;j<10;j++){
        scanf("%d",&b[j]);
    }
    printf("Your ARRAY is\n");
    for(j=0;j<10;j++,ptr++){ 
        printf("%d ",*ptr); 
    }
}


void newArray() {
    int a[10],i;
    printf("Enter your new array elements one by one\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Your array is\n");
    for(i=0;i<10;i++){ 
        printf("%d ",*(a+i)); 
    }
    printf("\n");
}

void main() {
    printArray();
    newArray();
}

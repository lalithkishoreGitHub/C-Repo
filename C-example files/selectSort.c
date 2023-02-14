#include<stdio.h>

void swap(int *a,int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
} 
void selectionSort(int a[], int n) {
    int i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
                swap(&a[i],&a[min]);
            }
        }
    }
}

void main() {
    int b[10],m,i;
    printf("Enter the number of elemnets in your array: ");
    scanf("%d",&m);
    printf("Enter array elements one by one\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    selectionSort(b,m);
    printf("After selection sort: \n");
    for(i=0;i<m;i++){
        printf("%d ",*(b+i));
    }
}
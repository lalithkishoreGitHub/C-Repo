#include<stdio.h>

void swap(int *a,int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
} 

int partition(int a[], int low, int high){
    int pivotElement = a[high], i=low-1,j;
    for(j=low;j<=high-1;j++){
        if(a[j]<=pivotElement) {
            i++;
            swap(&a[i],&a[j]);
        }
    }
swap(&a[i+1],&a[high]);
return i+1;
}

void quickSort(int a[],int low,int high) {
    if(low<high) {
        int pivot = partition(a,low,high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
    }
}
void main() {
    int a[10],i,n;
    printf("Enter number of elements and the elements one by one: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quickSort(a,0,n-1);
    printf("After quick sort: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
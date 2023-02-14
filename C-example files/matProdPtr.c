#include<stdio.h>

int a[10][10],b[10][10],p[10][10],i,j,k,m1,n1,m2,n2;
void input() {
    printf("Enter the order of first matrix A: ");
    scanf("%d%d",&m1,&n1);
    printf("Enter the order of second matrix B: ");
    scanf("%d%d",&m2,&n2);
}
void computeProduct() {
    if(n1==m2){
        printf("Enter the elements of first Matrix A\n");
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elemnets of second matrix B\n");
        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                *(*(p+i)+j)=0;
                for(k=0;k<n1;k++){
                    *(*(p+i)+j)= *(*(p+i)+j) + (*(*(a+i)+k)) * (*(*(b+k)+j));
                }
            }
        }
    }else{
        printf("Matrix multiplication not possible\n");
    }
}
void output() {
    printf("Product:\n");
    for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
               printf("%d  ",*(*(p+i)+j));
            }
            printf("\n");
        }
            printf("\n");
}
void main() {
    input();
    computeProduct();
    output();
}
#include<stdio.h>

int a[10][10], b[10][10], sum[10][10], i,j,m1,m2,n1,n2;

void input() {
    printf("Enter the order of first matrix A: ");
    scanf("%d%d",&m1,&n1);
    printf("Enter the order of second matrix B: ");
    scanf("%d%d",&m2,&n2);
    }

void computeSum() {
    if((m1==m2)&&(n1==n2)){
    printf("Elements of first matrix A:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of second matrix B:\n");
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
          *(*(sum+i)+j)  = (*(*(a+i)+j))+(*(*(b+i)+j));
        }
    }
    printf("Matrix sum\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            printf("%d ",*(*(sum+i)+j));
        }
        printf("\n");
    }
    }else{
        printf("Matrices cannot be added\n");
    }
}
void main() {
    input();
    computeSum();
}
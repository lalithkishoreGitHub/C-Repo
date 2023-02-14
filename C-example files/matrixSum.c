#include<stdio.h>
int a[10][10],b[10][10],i,j,m1,m2,n1,n2;
void input() { 
    printf("Enter the number of rows and columns in first matrix: ");
    scanf("%d%d",&m1,&n1);
    printf("Enter the number of rows and columns in second matrix: ");
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
        printf("A+B=\n");
        for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
            printf("%d ",(a[i][j]+b[i][j]));
        }
        printf("\n");
    }

} else{
    printf("Matrices not Comptabile to add\n");
}
}
void main() {
    input();
    computeSum();
}
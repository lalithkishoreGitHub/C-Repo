#include<stdio.h>

void main() {
    int a[10][10],m,n,i,j,*p=&a[0][0];
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter array elemnts: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",*(*(a + i) + j));
        }
        printf("\n");
    }
    
}
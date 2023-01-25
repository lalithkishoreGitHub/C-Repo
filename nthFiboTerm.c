#include<stdio.h>

void main() {
     int a,b,n,i,sum;
     printf("Enter the first two terms of the fibonacci series: \n");
     scanf("%d%d",&a,&b);
     printf("Enter the limit: ");
     scanf("%d",&n);
     for(i=2;i<n;i++) {
             sum=a+b;
             a=b;
             b=sum;
    }
    printf("%dth term: %d\n",n,sum);
}

#include<stdio.h>

void main() {
    int x;
    printf("Enter a number to find factorial: ");
    scanf("%d",&x);
    printFactorial(x);
}

void printFactorial(int n) {
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
   printf("%d ! = %d\n",n,fact);
}

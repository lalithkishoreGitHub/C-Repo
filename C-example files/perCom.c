#include<stdio.h>

int n,r;
void input() {
    printf("Enter the values of n and r: ");
    scanf("%d%d",&n,&r);
}
int factorial(int a){
    int fact=1,i;
    for(i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}
void printCombination() {
    float C;
    C=factorial(n)/(factorial(n-r)*factorial(r));
    printf("C(%d,%d) = %0.1f\n",n,r,C);
 }

void printPermutation() {
    float P;
    P=factorial(n)/factorial(n-r);
    printf("P(%d,%d) = %0.1f\n",n,r,P);
 }

 void main() {
    input();
    printCombination();
    printPermutation();
}


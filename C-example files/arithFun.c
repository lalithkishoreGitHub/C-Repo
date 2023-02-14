#include<stdio.h>

int sum(int a, int b) {
    return a+b;
}
int difference(int a, int b){
    return a-b;
}
int product(int a , int b) {
    return a*b;
}
int quotient(int a, int b) {
    if(b==0){
        printf("Invalid format\n");
    }else{
        return a/b;
    }
}

void main() {
    int p,q,n;
    printf("Enter any two integers for arithmetic operation: ");
    scanf("%d%d",&p,&q);
    printf("Enter option for operation\n{addition:1\nsubtraction:2\nmultiplication:3\ndivision:4}\n");
    scanf("%d",&n);
    switch(n) {
        case 1:
             printf("%d + %d = %d\n",p,q,sum(p,q));
             break;
        case 2:
             printf("%d - %d = %d\n",p,q,difference(p,q));
             break;
        case 3:
             printf("%d x %d = %d\n",p,q,product(p,q));
             break;
        case 4:
             printf("%d/%d = %d\n",p,q,quotient(p,q));
             break;
        default:
             printf("Invalid input\n");
             break;
    } 
}
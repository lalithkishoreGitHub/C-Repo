#include<stdio.h>

void main() {

    int n,rev,rem,temp;
    printf("Enter a number:\n");
    scanf("%d",&n);
    temp=n;
    rev=0;
    do{
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }while(n>0);
    if(temp==rev){
        printf("%d is a palindrome\n",temp);
    }
    else{
       printf("%d is not a palindrome\n",temp);
   }
}

#include<stdio.h>
//Finding square root of a number using binary search

float printSqrt(int num) {
       int start=0,end=num,mid;
       float ans,inc=0.1;//increment
       //integer part
       while(start<=end){
         mid=(start+end)/2;
         if(mid*mid==num){
            ans=mid;
         } else if(mid*mid>num){
            start=mid+1;
            ans=start;
         } else if(mid*mid<num){
            end=mid-1;
            ans=end;
         }
       } //fractional part begins
       for(int i=0;i<6;i++){
         while(ans*ans<=num){
            ans+=inc;
         }
         ans-=inc;
         inc/=10;
       }
       return ans;
}
void main() {
    int N;
    printf("Enter a number to find square root: ");
    scanf("%d",&N);
    printf("sqrt(%d) = %f\n",N,printSqrt(N));
}
#include<stdio.h>
#include<math.h>
#define PI 3.14159

int factorial(int a){
    if(a>1){
         return a*factorial(a-1);
    }else{
        return 1;
    }
}
float calc(float num, float *res) {
    int i,n=0,sign=1;
    for(i=1;n<=8;i+=2){
        *res = *res + sign*pow(num,i)/factorial(i);
        sign*=1;
        n+=1;
    }
    return *res;
}

int main() {
    int x;
    float rad, result=0;
    printf("Angle in degree: ");
    scanf("%d",&x);
    rad = x*(PI/180);
    printf("sin(%0.2f) = %0.2f\n", rad,calc(rad,&result));
    return 0;
}


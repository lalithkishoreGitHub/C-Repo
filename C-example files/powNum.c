#include<stdio.h>

float computePower(float a, int b) {
          int i;
          float p=1.0;
          for(i=0;i<b;i++) {
            p*=a;
        }
        return p;
}

void output() {
    float x;
    int y;
    printf("Enter the value of base and index\n");
    scanf("%f%d",&x,&y);
    printf("base=%0.2f\nindex=%d\npower=%0.2f\n",x,y,computePower(x,y));
}

void main() {
    output();
}
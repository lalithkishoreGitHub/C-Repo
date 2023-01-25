#include<stdio.h>
#include<math.h>

void main() {
      float a,b,c,d;
      float r1,r2,img;
      printf("Enter the coefficients\n");
      scanf("%f%f%f",&a,&b,&c);
      d=pow(b,2)-(4*a*c);
      printf("Discriminant = %f\n",d);
      if(d==0){
          r1=(-b)/2*a;
          printf("Roots are equal\n");
          printf("r1 = %0.2f\n r2 = %0.2f\n",r1,r1);
      }
      if(d>0) {
           printf("roots are real and unequal\n");
           r1 = ((-b)-sqrt(d))/2*a;
           r2 = ((-b)+sqrt(d))/2*a;
           printf("r1 = %0.2f\n r2 = %0.2f\n",r1,r2);
      }
      if(d<0) {
           printf("roots are imaginary\n");
           r1 = (-b)/2*a;
           img=(sqrt(-d))/2*a;
           printf("r1 = %0.2f + i(%0.2f)\n r2 = %0.2f - i(%0.2f)\n",r1,img,r1,img);
      }

}

#include<stdio.h>

void main() {
    char ch;
    int t;
    printf("Enter your vehicle code [c-car,b-bike,T-tempo]\n");
    scanf("%c",&ch);
    switch(ch) {
        case 'c':
             printf("Car parking time: ");
             scanf("%d",&t);
             printf("Total parking fare: %d\n",20+(t-2)*30);
             break;
        case 'b':
             printf("Bus parking time: ");
             scanf("%d",&t);
             printf("Total parking fare: %d\n",40+(t-2)*50);
             break;
        case 'T':
             printf("Tempo parking time: ");
             scanf("%d",&t);
             printf("Total parking fare: %d\n",30+(t-2)*40);
             break;
        default:
             printf("Invalid Vehicle code\n");
             break;
   }

}

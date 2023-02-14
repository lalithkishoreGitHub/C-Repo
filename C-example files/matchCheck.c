#include<stdio.h>

void main() {
    int a[10],b[10],i,j;
    printf("Enter array(A) elemnets: \n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter array(B) elemnets: \n");
    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(a[i]==b[i]){
                printf("%d matches with %d\n",a[i],b[i]);
                break;
                } 
            }
        }
    }

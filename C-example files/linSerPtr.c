#include<stdio.h>

void main() {
    int a[10],i,*ptr=&a[0],ele,pos=-1;
    printf("Enter the array elements one by one: ");
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the search element: ");
    scanf("%d",&ele);
    for(i=0;i<6;i++){
        if(ele==*ptr){
            pos=i;
        }
        ptr++;
    }
    if(pos>-1){
        printf("%d is present at a[%d]\n",ele,pos);
    }else{
        printf("Invalid..");
    }
}
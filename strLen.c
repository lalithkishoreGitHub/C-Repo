#include<stdio.h>

void main() {
    char str[20];
    int i=0;
    printf("Enter a string:  ");
    scanf("%s",str);
    while(str[i]!='\0') {
       ++i;
}
     printf("Length of the string is %d \n",i);
}

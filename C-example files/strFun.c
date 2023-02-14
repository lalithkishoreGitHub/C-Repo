#include<stdio.h>


int stringLength(char str[]) {
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}


void stringCopy(char src[], char dst[]) {
    int i,j=stringLength(src)-1;
    for(i=0;src[j]!='\0';i++,j--){
          dst[i]=src[i];
    }
    printf("%s is copied to %s\n",src,dst);
}

void execute() {
    char s[20],d[20];
    printf("Enter a string: ");
    scanf("%s",s);
    stringCopy(s,d);
}

void main() {
    execute();
}
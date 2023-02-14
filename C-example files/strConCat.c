#include<stdio.h>

void stringCat(char *s, char *d) {
    while(*s) {
        s++;
    }
    printf("%c",*s);
    while(*s=*d) {
        s++;
        d++;
    }
}

void main() {
    char s1[20],s2[20];
    printf("Enter first string: ");
    scanf("%s",s1);
    printf("Enter second string: ");
    scanf("%s",s2);
    stringCat(s1,s2);
    printf("Concatanated string: %s\n",s1);
    printf("Second string: %s\n",s2);
}
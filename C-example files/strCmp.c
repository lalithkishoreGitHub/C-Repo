#include<stdio.h>

int stringCompare(char *s, char *d) {
    int i;
    for(i=0;s[i]==d[i];i++){
        if(s[i]!='\0') {
            return s[i]-d[i];
        }else{
            return 0;
        }
    }
} 
int main() {
    char strA[20], strB[20];
    printf("Enter first string: ");
    scanf("%s",strA);
    printf("Enter second string: ");
    scanf("%s",strB);
    if(stringCompare(strA,strB)==0) {
        printf("%s is smaller than %s\n",strA,strB);
    }else if(stringCompare(strA,strB)<0){
        printf("%s is bigger than %s\n",strA,strB);
    }

}
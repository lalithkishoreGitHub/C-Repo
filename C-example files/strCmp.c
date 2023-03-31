#include<stdio.h>
int stringLength(char str[]) {
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}

int stringCompare(char *s, char *d) {
    int i;
    if(stringLength(s)==stringLength(d)) {
    for(i=0;s[i]!='\0'&&d[i]!='\0';i++){
        if(s[i]==d[i]) {
            return 0;
        }else{
            return 1;
        }
    }
 }
 else {
    return 1;
 }
}
 
int main() {
    char strA[20], strB[20];
    printf("Enter first string: ");
    scanf("%s",strA);
    printf("Enter second string: ");
    scanf("%s",strB);
    if(stringCompare(strA,strB)==0) {
        printf("%s is the same as %s\n",strA,strB);
    }else if(stringCompare(strA,strB)!=0){
        printf("%s is not the same as %s\n",strA,strB);
    }

}

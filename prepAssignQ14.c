#include<stdio.h>
#include<string.h>

int main() {
    char originalStr[] = "level";
    char revStr[] = originalStr;

    printf("Original String : %s\n",originalStr);

    for(int i=0, j=strlen(originalStr)-1; i<j; i++, j--) {
        char temp = revStr[i];
        revStr[i] = revStr[j];
        revStr[j] = temp;
    }

    if(originalStr == revStr) {
        printf("Palindrom");
    } else {
        printf("Not Palindrom");
    }
} 
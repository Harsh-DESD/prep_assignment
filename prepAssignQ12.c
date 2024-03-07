#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "The quick brown fox jump over the lazy dog";

    printf("Original String : %s\n", str);

    for(int i=0, j=strlen(str) - 1; i<j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed String : %s\n", str);
} 
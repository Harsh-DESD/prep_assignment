#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char* str;
    size_t size = 128;
    int alphabetArr[26] = {0};

    getline(&str, &size, stdin);

    for(int i=0; i<strlen(str)-1; i++) {
        if(isalpha(str[i])) {
            int arrInd = toupper(str[i]) - 'A';
            alphabetArr[arrInd] = alphabetArr[arrInd] + 1;
        }
    }

    for(int i=0; i<26; i++) {
        char letter = 'A' + i;
        printf("%c : %d\n " ,letter,alphabetArr[i]);
    }
} 
#include<stdio.h>
#include<string.h>

int main() {
    const char* arrStr[10] = {"apple", "mango", "banana", "apple", "mango", "banana", "chai", "coffee", "chai", "milk"};

    for(int i=0; i<9; i++) {
        for(int j=i+1; j<10; j++) {
            if(strcmp(arrStr[i], arrStr[j]) == 0) {
                printf("dup=%s\n",arrStr[i]);
                break;
            }
        }
    }
} 
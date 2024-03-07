#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);

    for(int i=1; i<=10; i++){
        printf("%d * %d is %d\n", num, i, num*i);
    }
} 
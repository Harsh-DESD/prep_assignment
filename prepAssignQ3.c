#include<stdio.h>

int main() {
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    printf("%d %d ",a,b);

    for(int i=0; i<n-2; i++) {
        c = a + b;
        a = b;
        b = c;

        printf("%d ", c);    
    }
    printf("\n");
    return 0;
} 
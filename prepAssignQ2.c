#include <stdio.h>

int factorial(int n) {
    int fact = 1;

    for(int i=n; i>0; i--) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}

// Sample Input -> 5
// output -> 120
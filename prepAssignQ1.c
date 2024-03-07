#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    int n = argc - 1; // Number of command-line arguments

    // Convert command-line arguments to integers and find the maximum
    int max = atoi(argv[1]);
    for (int i = 2; i <= n; ++i) {
        int currentNum = atoi(argv[i]);
        if (currentNum > max) {
            max = currentNum;
        }
    }

    printf("Maximum among the entered numbers is: %d\n", max);

    return 0;
}

// Input Sample -> prepAssignQ1.out 2 52 12 98 6 43 21
// Output -> 98
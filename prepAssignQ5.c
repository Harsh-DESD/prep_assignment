#include <stdio.h>

int main() {
    char input;
    
    printf("Enter a character: ");
    scanf("%c", &input);

    if ((input >= 'A' && input <= 'Z')) {
        printf("Uppercase character entered.\n");
    } else if (input >= 'a' && input <= 'z') {
        printf("Lowercase character entered.\n");
    } else if (input >= '0' && input <= '9') {
        printf("Digit entered.\n");
    } else {
        printf("Other character entered.\n");
    }

    return 0;
}
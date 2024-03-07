#include<stdio.h>

int main() {

    for(int i=1;i<=5;i++){
        int marks;
        char *grade;

        printf("Enter the marks of subject %d : ", i);
        scanf("%d", &marks);
        
        if(marks>=90) {
            grade = "Ex";
        } else if(marks>=80 && marks<90) {
            grade = "A";              
        } else if(marks>=70 && marks<80){
            grade = "B"; 
        } else if(marks>=60 && marks<70){
            grade = "C";   
        } else {
            grade = "F";   
        }

        printf("Grade of subject %d is %c%c\n", i, grade[0], grade[1]);

    }
    return 0;
} 
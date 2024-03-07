#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define the structure for Student
struct Student {
    char studentName[50];
    char rollNo[20];
    float totalMarks;
};

// Function to read student data
void readStudentData(struct Student *student) {
    printf("Enter student name: ");
    fgets(student->studentName, sizeof(student->studentName), stdin);
    student->studentName[strcspn(student->studentName, "\n")] = '\0';  // Remove newline character

    printf("Enter roll number: ");
    fgets(student->rollNo, sizeof(student->rollNo), stdin);
    student->rollNo[strcspn(student->rollNo, "\n")] = '\0';  // Remove newline character

    printf("Enter total marks: ");
    scanf("%f", &student->totalMarks);
    
    // Clear input buffer
    while (getchar() != '\n');
}

// Function to display student data
void displayStudentData(const struct Student *student) {
    printf("\nStudent Name: %s\n", student->studentName);
    printf("Roll Number: %s\n", student->rollNo);
    printf("Total Marks: %.2f\n", student->totalMarks);
}

int main() {
    int numStudents = 5;  // Change this value to the desired number of students
    struct Student students[numStudents];

    // Read data for each student
    for (int i = 0; i < numStudents; ++i) {
        printf("\nEnter details for student #%d:\n", i + 1);
        readStudentData(&students[i]);
    }

    // Display data for each student
    printf("\nDisplaying student data:\n");
    for (int i = 0; i < numStudents; ++i) {
        displayStudentData(&students[i]);
    }

    return 0;
} 
#include<stdio.h>
#include<string.h>

struct Employee
{
   char firstName[30];
   char lastName[30];
   double salary;
};

void emp_init(struct Employee* e, const char* firstName, const char* lastName, double salary) {
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->salary = salary;
}

void setSalary(struct Employee* e, double salary) {
    e->salary = salary;
}

void display(struct Employee* e) {
    printf("First Name: %s\n", e->firstName);
    printf("Last Name: %s\n", e->lastName);
    printf("Salary: Rs. %.2f\n", e->salary);
}

int main() {
    struct Employee e1, e2;
    emp_init(&e1, "Harsh", "Soni", 80000);
    emp_init(&e2, "Raju", "Raju", 70000);

    display(&e1);
    printf("Yearly Salary: Rs. %.2f\n", e1.salary * 12);

    display(&e2);
    printf("Yearly Salary: Rs. %.2f\n", e2.salary * 12);

    setSalary(&e1, e1.salary * 1.1);
    setSalary(&e2, e2.salary * 1.1);

    display(&e1);
    printf("Yearly Salary: Rs. %.2f", e1.salary * 12);

    display(&e2);
    printf("Yearly Salary: Rs. %.2f", e2.salary * 12);
} 
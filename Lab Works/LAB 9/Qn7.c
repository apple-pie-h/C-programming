// Write a program to read RollNo, Name, Address, Age & average-marks of
// 12 students in the BCT class and display the details from function.

#include <stdio.h>
#include <string.h>

// Structure definition for a student
struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};

// Function to read student information
void readStudent(struct Student *s) {
    printf("Enter Roll No: ");
    scanf("%d", &s->rollNo);

    printf("Enter Name: ");
  scanf("%s", s->name);

    printf("Enter Address: ");
  scanf("%s", s->address);

    printf("Enter Age: ");
    scanf("%d", &s->age);
    printf("Enter Average Marks: ");
    scanf("%f", &s->averageMarks);
}

// Function to display student information
void displayStudent(struct Student *s) {
    printf("Roll No: %d\n", s->rollNo);
    printf("Name: %s\n", s->name);
    printf("Address: %s\n", s->address);
    printf("Age: %d\n", s->age);
    printf("Average Marks: %.2f\n", s->averageMarks);
}

int main() {
    struct Student students[3];

    // Input loop
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        readStudent(&students[i]);
        printf("\n");
    }

    // Output loop
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        displayStudent(&students[i]);
    }

    return 0;
}

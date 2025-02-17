// Pass the structures defined in Question 1 into a function and read the
// structure member and display the values from the function (use structure
// pointer).


#include <stdio.h>
#include <string.h>



// Structure definition for a student
struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float physicsMarks;
    float cMarks;
    float mathMarks;
};

// Function to read student information using a pointer
void readStudent(struct Student *s) {
    printf("Enter Roll No: ");
    scanf("%d", &s->rollNo);
    getchar(); // Consume newline

    printf("Enter Name: ");
    scanf("%s",s->name);


    printf("Enter Address: ");
    scanf("%s",s->address);
 
    printf("Enter Age: ");
    scanf("%d", &s->age);
    printf("Enter Physics Marks: ");
    scanf("%f", &s->physicsMarks);
    printf("Enter C Marks: ");
    scanf("%f", &s->cMarks);
    printf("Enter Math Marks: ");
    scanf("%f", &s->mathMarks);
}

// Function to display student information using a pointer
void displayStudent(struct Student *s) {
    printf("Roll No: %d\n", s->rollNo);
    printf("Name: %s\n", s->name);
    printf("Address: %s\n", s->address);
    printf("Age: %d\n", s->age);
    printf("Physics Marks: %.2f\n", s->physicsMarks);
    printf("C Marks: %.2f\n", s->cMarks);
    printf("Math Marks: %.2f\n", s->mathMarks);

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

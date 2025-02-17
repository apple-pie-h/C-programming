// Write a function which accepts structure as argument and returns structure
// to the calling program.

#include <stdio.h>
#include <string.h> // For strcpy (if you're using strings in your struct)

// Define the structure (example: a person's information)
struct Person {
    char name[50];
    int age;
    float height;
};

// Function that accepts a structure and returns a structure
struct Person modifyPerson(struct Person p) {
    // Modify the structure (example: increase age by 1 and change name)
    p.age++;
    strcpy(p.name, "Modified Name"); // Be careful with string copying; buffer overflow!
    p.height = p.height + 10; // Example modification
    return p; // Return the modified structure
}

int main() {
    // Create a structure variable
    struct Person person1;

    // Initialize the structure
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 175;

    // Call the function, passing the structure
    struct Person modifiedPerson = modifyPerson(person1);  // Assign returned struct

    // Print the original and modified structures
    printf("Original Person:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    printf("\nModified Person:\n");
    printf("Name: %s\n", modifiedPerson.name);
    printf("Age: %d\n", modifiedPerson.age);
    printf("Height: %.2f\n", modifiedPerson.height);

    return 0;
}

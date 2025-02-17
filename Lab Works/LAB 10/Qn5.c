// Write name, age and height of a person into a data file “person.txt”
// and read it (use fprintf() and fscanf() function).

#include <stdio.h>
#include <string.h>


struct Person {
    char name[50];
    int age;
    int height;
};

int main() {
    struct Person person1;
    FILE *fptr;
    fptr = fopen("person.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing");

    }

    printf("Enter name: ");
    scanf("%s",person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);


    printf("Enter height: ");
    scanf("%d", &person1.height);

    fprintf(fptr, "%s %d %d\n", person1.name, person1.age, person1.height);
    fclose(fptr);


    fptr = fopen("person.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading");

    }

    struct Person person2; // Separate struct for reading

    if (fscanf(fptr, "%s %d %d", person2.name, &person2.age, &person2.height) == 3) {
        printf("\n--- Person Information ---\n");
        printf("Name: %s\n", person2.name);
        printf("Age: %d\n", person2.age);
        printf("Height: %d\n", person2.height);
    } else {
        printf("Error reading from file or file is empty.\n");
    }

    fclose(fptr); // Close the file after reading

    return 0;
}

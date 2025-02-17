// Write set of strings each of length 40 into a file “stringc.txt” and
// display it (use fputs() and fgets() function).



#include <stdio.h>
#include <string.h>


int main() {
    char strings[5][40];
    FILE *fptr;

    // 1. Write strings to the file
    fptr = fopen("stringc.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing");
    }

    printf("Enter %d strings (max length %d):\n", 5, 40-1);

    // Input loop
    for (int i = 0; i < 5; i++) {
        printf("String %d: ", i + 1);
        scanf("%s",strings[i]);

        fputs(strings[i], fptr);   // Write the string
        fputs("\n", fptr);         // Add a newline character after each string. Important!
    }

    fclose(fptr);

    // 2. Read and display strings from the file
    fptr = fopen("stringc.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading");
    }

    char buffer[40]; // Buffer to read each string
    printf("\n--- Strings from file ---\n");

    // Read and display loop
    while (fgets(buffer, 40, fptr) != NULL) {

        printf("%s\n", buffer);
    }

    fclose(fptr);

    return 0;
}

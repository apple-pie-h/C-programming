//Write a program to show programming examples with union and enumerations.

#include <stdio.h>

// Example of a union
union Data {
    int i;
    float f;
    char str[20]; // All members share the same memory location
};

// Example of an enumeration
enum Day {
    MONDAY,   // 0
    TUESDAY,  // 1
    WEDNESDAY, // 2
    THURSDAY, // 3
    FRIDAY,   // 4
    SATURDAY, // 5
    SUNDAY    // 6
};

int main() {
    // Union example
    union Data data;

    data.i = 10;
    printf("Integer: %d\n", data.i); // Accessing integer member

    data.f = 3.14f; // Overwrites the integer value!
    printf("Float: %f\n", data.f);   // Accessing float member

    strcpy(data.str, "Hello"); // Overwrites the float value!
    printf("String: %s\n", data.str); // Accessing string member

    // Note: Only one member of the union can be used at a time
    // because they share the same memory.  The last assignment
    // determines the value stored.

    // Enumeration example
    enum Day today = WEDNESDAY;

    printf("\nToday is: ");
    switch (today) {
        case MONDAY: printf("Monday"); break;
        case TUESDAY: printf("Tuesday"); break;
        case WEDNESDAY: printf("Wednesday"); break;
        case THURSDAY: printf("Thursday"); break;
        case FRIDAY: printf("Friday"); break;
        case SATURDAY: printf("Saturday"); break;
        case SUNDAY: printf("Sunday"); break;
        default: printf("Invalid day");
    }
    printf("\n");

    // You can also print the integer value of the enum
    printf("Integer representation of today (WEDNESDAY): %d\n", today);


    // Another enum example (more practical)
    enum TrafficLight {
        RED = 1,  // Explicitly setting values
        YELLOW = 2,
        GREEN = 3
    };

    enum TrafficLight light = YELLOW;

    if (light == RED) {
        printf("\nSTOP!\n");
    } else if (light == YELLOW) {
        printf("\nPrepare to stop!\n");
    } else if (light == GREEN) {
        printf("\nGo!\n");
    }

    return 0;
}

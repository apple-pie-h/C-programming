// Write a program to enter two Cartesian coordinate points and display the
// distance between them.

#include <stdio.h>
#include <conio.h>
#include <math.h>


// Function to calculate the distance between two points
double calculate_distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2, distance;

    printf("Enter the coordinates of the first point:\n");
    printf("x1: ");
    scanf("%lf", &x1);  // Use %lf for double
    printf("y1: ");
    scanf("%lf", &y1);

    printf("Enter the coordinates of the second point:\n");
    printf("x2: ");
    scanf("%lf", &x2);
    printf("y2: ");
    scanf("%lf", &y2);

    distance = calculate_distance(x1, y1, x2, y2);

    printf("The distance between the two points is: %lf\n", distance); // Use %lf to print double
getch();
    return 0;
}

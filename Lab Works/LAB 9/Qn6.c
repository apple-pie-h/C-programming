// Define a structure “complex” (typedef) to read two complex numbers and
// perform addition, subtraction of these two complex numbers and display the
// result


#include <stdio.h>

// Define the complex structure using typedef
typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number
Complex readComplex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2) {
    Complex diff;
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;
    return diff;
}

// Function to display a complex number
void displayComplex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    Complex num1, num2, sum, difference;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("\nEnter the second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    difference = subtractComplex(num1, num2);

    printf("\nFirst complex number: ");
    displayComplex(num1);
    printf("Second complex number: ");
    displayComplex(num2);

    printf("\nSum: ");
    displayComplex(sum);
    printf("Difference: ");
    displayComplex(difference);

    return 0;
}

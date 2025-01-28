// Write a program that illustrates use of local, global and static variables


#include <stdio.h>
#include<conio.h>

int global_var = 10; // Global variable

void func1() {
    int local_var = 20; // Local variable

    printf("Inside func1:\n");
    printf("  global_var: %d\n", global_var);
    printf("  local_var: %d\n", local_var);

    global_var++; // Modify global variable
}

void func2() {
    static int static_var = 30; // Static variable

    printf("\nInside func2:\n");
    printf("  global_var: %d\n", global_var);
    printf("  static_var: %d\n", static_var);

    static_var++; // Modify static variable
}

int main() {
    func1();
    func2();
    func2(); 
getch();
    return 0;
}

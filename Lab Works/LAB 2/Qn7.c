//qn 7
//wap to print the size of int, char, float, double, long double data types in C

#include<stdio.h>
#include<conio.h>
int main()
{

printf("Size of char: %lu bytes\n", sizeof(char));
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of double: %lu bytes\n", sizeof(double));
printf("Size of pointer: %lu bytes\n", sizeof(long double));
return 0;
	getch();
}

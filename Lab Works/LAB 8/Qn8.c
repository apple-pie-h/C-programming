//Write a program to concatenate two strings

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[50]="Hello ", b[50]="World!";
//using string function
strcat(a,b);
puts(a);
getch();
  return 0;
}

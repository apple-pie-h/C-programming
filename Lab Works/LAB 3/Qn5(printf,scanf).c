//Demonstrate the difference between scanf() & gets(), printf() & puts().

#include <stdio.h>
#include<conio.h>
int main ()
{
  char a[20], b[10]; 
  printf("Enter a string");
  gets(a); //reads string ; considers upto a new line
  puts(a); //displays the string; appends a new line after string output
  printf("Enter another string b");
  scanf("%s",a); //reads string ; considers whitespace
  printf("%s",a); //displays string; doesnt append a new line after string output
  getch();
  return 0;
}

/*Write a program to take a character input from keyboard and check if it is a 
number or alphabet or special character using ASCII CODE. */

#include<stdio.h>
#include<conio.h>
int main()
{
  char a;
  int b;
  printf("Enter a character");
  scanf("%c",&a);
  b=a;
  if (b>=48 && b<=57)
  {
    printf("Number");
  }
  else if (b>=33 && b<=47 || b>=58 && b<=64)
  {
    printf("Special Characters");
  }
  else if (b>=65 && b<=90 || b>=97 && b<=122)
  {
    printf("Alphabets");
  }
  else
  printf("Error");
  getch();
  return 0;
}

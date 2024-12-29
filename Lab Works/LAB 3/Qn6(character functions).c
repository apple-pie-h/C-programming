/*Write a program to take a character input from keyboard and check if 
the character is number or alphabet or special character using character functions below: 
a) Alphanumeric (isalnum) 
b) Blank character (isblank) 
c) Alphabetic (isalpha) 
d) Control character (iscntrl) 
e) Number-digit (isdigit) 
f) Upper case (isupper) 
g) Lower case (islower) 
h) Hexadecimal digit (isxdigit) 
i) Graphical character (isgraph) 
*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
  char a;
  int b;
  printf("Enter a character");
  scanf("%c",&a);
      
    if (isblank(a)!=0)
        printf("It is blank");
    else if (isalnum(a)!=0)
    {if (isalpha(a) != 0)
    
    {    printf("an alphabet.");
     if (isupper(a)!=0)
     printf("Capital letter");
     else if (islower(a)!=0)
     printf("Small Letter");
        
    }   else if(isdigit(a) !=0)
        printf("a number");
    }
 else if (isxdigit(a)!=0)
 printf("Hexadecimal");
 else if (isgraph(a)!=0)
 printf("Graphical Character");
 else 
 printf("none");

getch();
  return 0;
}

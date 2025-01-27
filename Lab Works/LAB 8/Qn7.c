//Write a program to copy one string to another string with and without using string handling function

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
char a[50]="Hello", b[50];
//using string function
strcpy(b,a);
puts(b);
//without using string function
for (i = 0; a[i]!= '\0'; i++) {
        b[i] = a[i];
    }
    b[i] = '\0';
puts(b);
getch();
return 0;
}

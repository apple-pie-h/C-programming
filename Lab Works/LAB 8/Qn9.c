//Write a program to compare two strings

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int c;
char a[50]="Hello ", b[50]="World!";
//using string function
c=strcmp(a,b);
if (c==1)
    printf("They are same");
else
    printf("They are different");
getch();
return 0;

}

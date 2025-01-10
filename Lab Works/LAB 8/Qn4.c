/*Write a program to read a string and check for palindrome without
using string related function (a string is palindrome if its half is
mirror by itself eg: abcdcba)*/

#include<stdio.h>
#include<conio.h>
int palindrome(char[]);
int main()
{
    int i,n=0,s;
char a[20];
printf("Enter a string");
scanf("%s",a);


s=palindrome(a);
if (s==1)
{
    printf("Palindrome");
}
else
    printf("not palindrome");

getch();
return 0;
}

int palindrome(char s[])
{
   int n=0,i;

    while (s[n]!='\0')
{
    n++;
}
for (i=0; i<n/2; i++)
{
     if(s[i] !=s[n-1-i])
     {
         return 0;
     }
}

return 1;

}

//Write a program to find biggest among three numbers using pointer.

#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c, *p=&a, *q=&b, *r=&c;
printf("Enter 3 numbers");
scanf("%d %d %d",&a,&b,&c);

if (*p>*q && *p>*r)
printf("%d is largest",*p);
else if (*q>*r && *q>*p)
printf("%d is largest",*q);
else
printf("%d is largest",*r);
getch();
return 0;
}

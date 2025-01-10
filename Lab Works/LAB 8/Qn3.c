//Write a program to swap value of two variables using function & pointer.

#include<stdio.h>
#include<conio.h>
void swap(int, int);
int main()
{
int a, b;
printf("Enter two variables a & b");
scanf("%d %d",&a,&b);
swap(a,b);
getch();
return 0;
}

void swap(int a, int b)
{
int *p=&a, *q=&b, temp;
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
printf("a=%d\nb=%d",a,b);
return 0;
}

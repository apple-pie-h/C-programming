//Write a program to find the sum of all the elements of an array using pointers.

#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i,n, (*p)[20]=&a, sum=0;
printf("Enter no of elements");
scanf("%d",&n);

for (i=0; i<n; i++)
{
printf("Enter");
scanf("%d",&a[i]);
sum+=(*p)[i];
}
printf("Sum is %d",sum);

getch();
return 0;
}

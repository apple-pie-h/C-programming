#include <stdio.h>
#include <conio.h>
int main()
{
int a;
printf(“Enter a number”);
scanf(“%d”,&a);
if((a>>1)<<1==a)
{
printf(“Number is even”);
}
else
{
printf(“number is odd”);
}
return 0;
getch();
}

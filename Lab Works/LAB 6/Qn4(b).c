// fibonacci series without recursion 
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, a=1, b=0, c;
    for(i=1; i<=10; i++)
    {
        while(a<=500)
        {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        printf("\t");
        }
    }
    getch();
}

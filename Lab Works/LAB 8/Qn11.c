//UNIVERSITY

#include<stdio.h>
#include<conio.h>
int main()
{
char a[10]="UNIVERSITY";
int i,j, n=1;
for (i=0; i<5; i++)
{
    for (j=0; j<=n; j++)
    {printf("%c",a[j]);

}
n+=2;
printf("\n");
}
n=7;
for (i=0; i<4; i++)
{
    for (j=0; j<=n; j++)
    {printf("%c",a[j]);

}
n-=2;
printf("\n");
}

getch();
return 0;
}

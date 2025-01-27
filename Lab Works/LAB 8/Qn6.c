// Write a program to read a sentence & delete all the white spaces.
//Replace all “.” by “:”.


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,c;
char a[50];
printf("Enter sentence ");
gets(a);
c=strlen(a);
//. -> :
for (i=0; i<c ; i++)
{
    if (a[i]=='.')
        a[i]=':';
}
// whitespace remove
for (i=0, j=0; a[i]!='\0'; i++ )
{
    if (a[i]!=' ')
    {
        a[j++]=a[i];
    }

}
a[j]='\0';
printf("%s",a);
getch();
return 0;
}

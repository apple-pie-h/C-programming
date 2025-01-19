// Wap to read a sentence and count the no of character and words in the sentences

#include<stdio.h>
#include<conio.h>
int main()
{
    int l,i,b=1;
char a[300];
printf("Enter sentences");
gets(a);
l=strlen(a);
printf("No of character: %d",l);
for (i=0; i<l; i++)
{
    if(a[i]==' ')
        b++;
}
printf("\nNo of words: %d",b);
getch();
return 0;
}

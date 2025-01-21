// palindrome string 

#include<stdio.h>
#include<conio.h>
int palindrome(char str[], int s, int e)
{
	if (s>=e)
	return 1;
	if (str[s]!=str[e])
	return 0;
	return (palindrome(str,s+1,e-1));
}
int main()
{
	char str[]="madam";
	if ((palindrome(str,0,strlen(str)-1))==1) // that ==1 part not compulsory :0
	printf("palindrome");
	else 
	printf("Not palindrome");
	getch();
	return 0;
}

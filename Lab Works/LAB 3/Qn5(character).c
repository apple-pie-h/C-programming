//Demonstrate the differences among getch(), getche(), getchar().

#include<stdio.h>
#include<conio.h>
int main()
{
	char a, b, c;
	printf("Enter a character ");
	printf (" %c", getchar()); //getchar() reads a single input character from standard input
	printf (" %c", getch()); /*getch() reads a single character from the keyboard. But it does not use any buffer, so the entered character does not display on the screen and is immediately returned without waiting for the enter key*/
	
printf("%c", getche()); /*getche() function reads a single character from the keyboard and displays immediately on the output screen without waiting for enter key*/
	getch();
	return 0;
}

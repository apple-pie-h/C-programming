//input vowel or not using if else and switch case

#include<stdio.h>
#include<conio.h>
int main()
{
	char a; 
	printf("Enter a character");
	scanf("%c",&a);
	if (a=='A'|| a=='E' || a=='I' || a=='O'|| a=='U' || a=='a'|| a=='e' ||a=='i'||a=='o'||a=='u')
	printf("Vowel");
	else 
	printf("Not vowel");
	
	
	/*
	//switch case
	switch(a)
	case 'A':
	{ printf("Vowel");
	break;
}
	case 'E':
	{ printf("Vowel");
	break;
}
	case 'I':
	{ printf("Vowel");
	break;
}
	case 'O':
	{ printf("Vowel");
	break;
}
	case 'U':
	{ printf("Vowel");
	break;
}
	case 'a':
	{ printf("Vowel");
	break;
}
	case 'e':
	{ printf("Vowel");
	break;
}
	case 'i':
	{ printf("Vowel");
	break;
}
	case 'o':
	{ printf("Vowel");
	break;
}
	case 'u':
	{ printf("Vowel");
	break;
}
default:
printf("not vowel");
}
	*/
	return 0;
	getch();
}

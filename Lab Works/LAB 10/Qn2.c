// filec.txt character write until enter key is pressed 

#include<stdio.h>

int main()
{
	FILE *fptr; 
	char c;
	fptr=fopen("filec.txt","w");
	
	printf("Enter text. hit enter key to stop\n");
	while((c=getchar())!='\n')
	{
		fputc(c,fptr);
	}
	fclose(fptr);

	return 0;
}

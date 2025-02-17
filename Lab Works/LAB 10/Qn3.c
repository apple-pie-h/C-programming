// filec.txt count no of character

#include<stdio.h>

int main()
{
	FILE *fptr; 
	char c;
	int i=0;
	fptr=fopen("filec.txt","r");


 while ((c = fgetc(fptr)) != EOF) {
        i++;
    }
printf("no of terms %d",i);
	fclose(fptr);
	return 0;
}

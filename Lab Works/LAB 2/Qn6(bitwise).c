#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 1) //(num & 1) is equivalent to ((num & 1 ) == 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }

    return 0;
}

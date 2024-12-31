//quadratic equation 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,  b, c, d;
	float root1, root2;
	printf("Enter quadratic coeffecient a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	d=pow((pow(b,2)-4*a*c),1/2);
	if (d>=0)
	
	{
	root1=(-b+d)/(2*a);
	root2=(-b-d)/(2*a);
}
printf("Roots are \n: %.2f \n:%.2f",root1,root2);
	getch();
	return 0;
}
/*#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // Condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }

    // Condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }

    // Condition for imaginary roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary:\n");
        printf("Root 1 = %.2f + i%.2f\n", realPart, imagPart);
        printf("Root 2 = %.2f - i%.2f\n", realPart, imagPart);
    }

    return 0;
}*/

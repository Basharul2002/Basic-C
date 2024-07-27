#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    float len, area;

    printf("The length of arm(meter): ");
    scanf("%f", &len);

    area = (pow(len, 2)*sqrt(3))/4;
    printf("Area of the equilateral triangle = %.2f sq-meter", area);
    getch();
}

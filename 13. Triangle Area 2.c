#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    float a, b, area;

    printf("Enter length of equal arms(meter): ");
    scanf("%f", &a);

    printf("Enter length of other arm (meter): ");
    scanf("%f", &b);

    area = (b*sqrt(pow(a,2)-pow(b,2)))/4;
    printf("Area of Isosceles triangle = %.2f sq-meter", area);


    getch();
}

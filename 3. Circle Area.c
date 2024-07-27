#include<stdio.h>
#include<conio.h>

main()
{
    float pie = 3.1416, radius, area;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = pie * radius * radius;

    printf("The area of circle is %.2f", area);

    getch();
}

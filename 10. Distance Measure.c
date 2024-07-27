#include<stdio.h>
#include<conio.h>


main()
{
    float d, v, t;
    printf("Enter the velocity(in m/s): ");
    scanf("%f", &v);

    printf("Enter the time(in sec): ");
    scanf("%f", &t);

    d = v*t;

    printf("Distance = %.2f meter", d);
    getch();
}

#include<stdio.h>
#include<conio.h>

main()
{
    float a, b, c;

    printf("Enter the value of slide-1: ");
    scanf("%f", &a);

    printf("Enter the value of slide-2: ");
    scanf("%f", &b);

    printf("Enter the value of slide-3: ");
    scanf("%f", &c);

    ((a||b||c != 0) && (a+b)>c && (b+c)>a && (a+c)> b)? printf("Triangle") : printf("Not Triangle");
    getch();
}

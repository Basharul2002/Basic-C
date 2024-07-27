#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);


    (b*b == a*c) ? printf("Proportional") : printf("Not Propostional");

    getch();
}

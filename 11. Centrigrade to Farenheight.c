#include<stdio.h>
#include<conio.h>


main()
{
    float c, f;
    printf("Enter the value o Centigrade: ");
    scanf("%f", &c);

    f = (9*c/5)+32;
    printf("The value of Farenheight is %.2f (degree farenheight)", f);
    getch();
}

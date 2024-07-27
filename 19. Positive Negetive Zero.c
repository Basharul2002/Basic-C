#include<stdio.h>
#include<conio.h>

main()
{
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);

    if (num > 0)
        printf("The number is POSITIVE");
    else if (num < 0)
        printf("The number is Negetive");
    else
        printf("The number is ZERO");

    getch();

}

#include<stdio.h>
#include<conio.h>

main()
{
    int year;
    printf("Enter the year(4 digit): ");
    scanf("%d", &year);

    if (year%400 == 0 || (year%4 == 0 && year%100 != 0))
        printf("%d is a leap year", year);

    else
        printf("%d is not leap year", year);

    getch();

}

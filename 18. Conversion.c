#include<stdio.h>
#include<conio.h>

main()
{
    int ch;
    printf("1. Feet to Meter \n2.Meter to feet\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    float num;

    if (ch == 1)
    {
        printf("Enter the number of feet: ");
        scanf("%f", &num);
        printf("Meters: %.2f", num/3.28);
    }

    else
    {
        printf("Enter the number of Meters: ");
        scanf("%f", &num);
        printf("feet: %.2f", num*3.28);
    }
}

#include<stdio.h>
#include<conio.h>

main()
{
    int num;
    printf("Enter the total number of value: ");
    scanf("%d", &num);

    int sum = 0, i = 1;

    while (i <= num)
    {
        sum += i;
        i++;
    }

    printf("The sum of the value is %d", sum);
    getch();
}


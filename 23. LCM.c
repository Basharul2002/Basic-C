#include<stdio.h>
#include<conio.h>

main()
{
    int a, b, x;
    printf("Enter the two integer number: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        x = a;
    else
        x = b;

    again:
        if (a%x == 0 && b%x == 0)
            printf("The LCM of %d and %d is %d", a, b, x);
        else
        {
            x -= 1;
            goto again;
        }
    getch();
}

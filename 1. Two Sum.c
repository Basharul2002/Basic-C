#include <stdio.h>
#include<conio.h>

main()
{
    int a,b, sum;
    printf("Enter the value of first number: ");
    scanf("%d" ,& a);
    printf("Enter the second number: ");
    scanf("%d",&b );

    sum=a+b;
    printf("Sum of two numbers = %d\n", sum);
    getch();
}

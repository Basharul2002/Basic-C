#include<stdio.h>
#include<conio.h>

main()
{
    int num,isPrime = 1;

    printf("Enter the number to be tested: ");
    scanf("%d", &num);

    for (int i = 2; i <= num*0.5; i++)
    {
        if (num%2 == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (num != 0 && num != 1 && isPrime == 1)
        printf("%d is prime number", num);
    else
         printf("%d is not prime number", num);

}

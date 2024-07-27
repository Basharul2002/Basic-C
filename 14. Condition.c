#include<stdio.h>
#include<conio.h>

main()
{
    int mark;
    printf("Enter your marks: ");
    scanf("%f", &mark);

    if (mark>=40)
        printf("You have the passed in the subject");
    else
        printf("You have the failed in the subject");

    getch();
}

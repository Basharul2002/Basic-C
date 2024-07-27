#include<stdio.h>
#include<conio.h>

main()
{
    float c, f;
    printf("Enter the value of Farenheight: ");
    scanf("%f", &f);

    c = ((f-32)/9)*5;
    printf("The value of Centigrade is %.2f (degree Centigrade)", c);
    getch();
}

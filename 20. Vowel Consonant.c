#include<stdio.h>
#include<conio.h>

main()
{
    char ch;
    printf("Enter the letter: ");
    ch = getche();

    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("\n%c is vowel", ch);
            break;
        default:
            printf("\n%c is vowel", ch);
    }
    getch();
}

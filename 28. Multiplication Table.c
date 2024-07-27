#include<stdio.h>
#include<conio.h>

int                 main()
{
    int r, c, row, col;
    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Emter the column: ");
    scanf("%d", &col);

    printf("\t\t=======================\n");
    printf("\t\t  MULTIPLICATION TABLE\n");
    printf("\t\t========================\n     ");

    for (int i = 1; i <= col; i++)
        printf("%4d", i);
    printf("\n    =========================");
    printf("===============\n");

    for (int i = 0; i < row; i++)
    {
        printf("%2d  | ", (i+1));

        for (int j = 1; j <= col; j++)
            printf("%4d", (i+1)*j);

        printf("\n");
    }

    getch();
}


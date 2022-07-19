#include <stdio.h>

void main()
{
    int i, j, r, c, exit = 1;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &c);
    int a[r][c], b[r][c];
    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(a[i][j] != b[i][j])
            {
                exit = 0;
                break;
            }
        }
    }
    if(exit == 1)
    printf("\nThe matrix is a symmetric matrix.");
    else
    printf("\nThe matrix is not a symmetric matrix.");
}
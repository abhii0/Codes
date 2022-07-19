#include <stdio.h>

void main()
{
    int a[50][50], b[50][50], c[50][50];
    int r1, c1, r2, c2, i, j, k, sum=0;

    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);

    printf("\nEnter number of rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);

    if(c1 != r2)
    printf("Multiplication is not possible.");
    else
    {
        printf("Enter the elements of the first matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nFirst Matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }

        printf("\nSecond Matrix:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }

        for(i = r1; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                c[i][j] = 0;              
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                sum = 0;
                for (k = 0; k < c1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }

        printf("\nMultiplied Matrix:\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}
#include <stdio.h>

void main()
{
    int i, j, r=3, c=5;
    float a[r][c];
    for(i = 0; i < r; i++)
    {
        printf("\nEnter marks of Student %d: ", i+1);
        for(j = 0; j < c; j++)
        {
            printf("\nEnter marks for Subject %d: ", j+1);
            scanf("%f", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        float sum = 0.0, avg=0.0;
        for (j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        avg = sum/5;
        printf("\nTotal marks of Student %d are: %.2f", i+1, sum);
        printf("\nAverage marks are: %.2f", avg);
    }
    
}
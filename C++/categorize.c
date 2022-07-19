#include <stdio.h>

void main()
{
    int i, size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int pn = 0, nn = 0, on = 0, en = 0, zeros = 0;
    for (i = 0; i < size; i++)
    {
        if(a[i] > 0)
        pn++;
        else if(a[i] < 0)
        nn++;
        else
        zeros++;
        if(a[i] % 2 == 0)
        en++;
        else
        on++;
    }
    printf("\nPositive Numbers in the array: %d", pn);
    printf("\nNegative Numbers in the array: %d", nn);
    printf("\nEven Numbers in the array: %d", en);
    printf("\nOdd Numbers in the array: %d", on);
    printf("\nZeros in the array: %d", zeros);
}
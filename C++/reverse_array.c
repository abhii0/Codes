#include <stdio.h>

void main()
{
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("\nEnter the elements of the array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int aux[size];
    for (i = 0; i < size; i++)
    {
        aux[size-1-i] = a[i];
    }

    printf("\nOriginal Array:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nReversed Array:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", aux[i]);
    }
    
}
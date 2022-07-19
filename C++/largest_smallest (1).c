#include <stdio.h>

void main()
{
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int largest = a[0], smallest = a[0];
    for (i = 0; i < size; i++)
    {
        if(a[i] > largest)
        largest = a[i];
        if(a[i] < smallest)
        smallest = a[i];
    }
    printf("\nLargest element in the array is: %d", largest);
    printf("\nSmallest element in the array is: %d", smallest);
}
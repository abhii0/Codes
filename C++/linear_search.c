#include <stdio.h>

void main()
{
    int size, i, n, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements of the array: \n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search for in the array: ");
    scanf("%d", &n);
    
    for(i = 0; i < size; i++)
    {
        if(a[i] == n)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    printf("%d found in the array at position %d.", n, i+1);
    else
    printf("%d is not present in the array.", n);
}
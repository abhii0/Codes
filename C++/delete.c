#include <stdio.h>
#include <stdlib.h>
int a;
void declare(int*arr)
{
    int i;
    printf("Enter array");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void delete(int*ar)
{
    int pos,j;
    printf("Enter position where to delete element");
         scanf("%d",&pos);
         for(j=pos-1;j<a;j++)
         {
             ar[j]=ar[j+1];
         }
         a--;
    
}
void display(int*ar)
{
    int j;
    for(j=0;j<a;j++)
         {
             printf("%d",ar[j]);
         }
         printf("\n");
}
int main()
{
    printf("Enter size of array");
    scanf("%d",&a);
    int* ptr=(int*)malloc(100*sizeof(int));
    declare(ptr);
    display(ptr);
    delete(ptr);
    display(ptr);
    return 0;
}

#include<stdio.h>
void enterdata(int arr[][100],int col,int row)
{
    printf("Enter the elements of the matrix");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void transpose(int arr[][100],int col,int row,int arr1[][100])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            arr1[i][j]=arr[j][i];
        }
    }
}
void display(int arr1[][100],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d  ",arr1[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[100][100];
    int arr1[100][100];
    int row,col;
    printf("Enter the rows of matrix:");
    scanf("%d",&row);

    printf("Enter the coloums of matrix:");
    scanf("%d",&col);
    enterdata(arr,col,row);
    transpose(arr,col,row,arr1);
    display(arr1,row,col);

    return 0;
}
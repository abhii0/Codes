
#include <stdio.h>

int main() {
    int a[100],b[100],c[100],n,i,j,k;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of 1st array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements of 2nd array: ");
     for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
     
    for(i=0,j=0,k=0;k<n;k++,i++,j++)
    {
     
      c[k]=a[i]+a[j];
      
    
   printf("%d",c[k]);
   
    }
       
    return 0;
}

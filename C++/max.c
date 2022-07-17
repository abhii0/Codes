
#include <stdio.h>

int main() 
{
    int a[100],n,i,j=0,k;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elemenst : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
            }
            k=a[0];
    for(i=0;i<n;i++)
    { 
    if(a[i]>k)
    k=a[i];
    }
      for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
        ++j;
        }
                  }
                    printf("%d",j);
    return 0;
}

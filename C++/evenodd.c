
#include <stdio.h>

int main() 
{
    int a[100],n,i;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elemenst : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
            }
        
    for(i=0;i<n;i++)
    { 
    if(i%2!=0)
    {
    printf("%d",a[i]);
}
    }
      for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
        printf("%d",a[i]);
        }
                  }
                   
    return 0;
}

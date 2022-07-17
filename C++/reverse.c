
#include <stdio.h>

int main() {
    int a[100],n,i,j=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elemenst : ");
    for(i=0;i<n;i++)
    {
        
        if(a[i]!=0)
        {scanf("%d",&a[i]);
   ++j;
        }
    }
    for(i=j;i<n;i++,j--)
    {
      printf("%d",a[i]);
    }
   
    
    return 0;
}

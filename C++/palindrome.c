
#include <stdio.h>

int main() {
    int a[100],n,i,j=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elemenst : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if

    }
    for(i=0;i<n;i++,n--)
    {
        if(a[i]!=a[n-1])
        j=1;
        break;
    }
    if(j==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }

    
    return 0;
}

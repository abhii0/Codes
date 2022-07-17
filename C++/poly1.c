#include <stdio.h>
#include<math.h>
int main() {
    int a[100],n,i,x,sum=0,k;
    printf("enter number of coefficients");
    scanf("%d",&n);
    printf("enter coefficients ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
     }
     printf("enter  variable value ");
   {
   scanf("%d",&x);
   }
    for(i=0;i<n;i++)
    { 
       k= a[i]*pow(x,i);
       sum=sum+k;
            }
   printf("%d",sum);
    return 0;
}

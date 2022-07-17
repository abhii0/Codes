#include <stdio.h>

int main(void)
{
   int miles,yards;
   double kilometers;
   printf("Please enter miles and yards");
   scanf("%d %d",&miles, &yards);
   kilometers=1.609*(miles+yards/1706.0);
   printf("\nA marathon is %lf kilometers \n",kilometers);
   return 0;
}

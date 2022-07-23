#include<stdio.h>
int main()
{
   int a,b,*x,*y;
   printf("enter value 1 : ");
   scanf("%d",&a);
   printf("enter value 2 : ");
   scanf("%d",&b);
   x=&a;
   y=&b;
   printf("addition on pointers : %d %d",*x,*x+1);
   printf("\nsubtraction on pointers : %d %d  ",*y,*y-1);
   return 0;
}
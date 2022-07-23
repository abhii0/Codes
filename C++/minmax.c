#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int max, min;
int a[100];
void maxmin(int i, int j)
{
 int max1, min1, mid;
 if(i==j)
 {
  max = min = a[i];
 }
 else
 {
  if(i == j-1)
  {
   if(a[i] <a[j])
   {
    max = a[j];
    min = a[i];
   }
   else
   {
    max = a[i];
    min = a[j];
   }
  }
  else
  {
   mid = (i+j)/2;
   maxmin(i, mid);
   max1 = max; min1 = min;
   maxmin(mid+1, j);
   if(max <max1)
    max = max1;
   if(min > min1)
    min = min1;
  }
 }
}
int main ()
{
  time_t start,end;
   double tc;
  start=clock();
 int n;
 int arr[200] = { 0 };
    int randNumber = 0;
    int i = 0;

    for (int i = 0; i < 200; i++)
    {
        
        randNumber = rand() % 10 + 1;
        i++;
    }
 max = arr[0];
 min = arr[0];
 n=sizeof(arr)/sizeof(int);
 maxmin(1, n);
 printf ("Minimum element in an array : %d\n", min);
 printf ("Maximum element in an array : %d\n", max);
tc=(difftime(end,start)/CLOCKS_PER_SEC);
end=clock();
printf("\ntime efficiency is %lf",tc);
 return 0;
}
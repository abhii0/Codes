#include<stdio.h>
struct swap
{
    int a;
    int b;
    int c;
};
void value(int x,int y)
{
    int p;
    p=x;
    x=y;
    y=p;
    printf("Values after swapping are %d ans %d ",x,y);
}
void ref(int *x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    return *x;
    return *y;
}
int main()
{
    struct swap s;
    printf("Enter value 1 : ");
    scanf("%d",&s.a);
    printf("Enter value 2 : ");
    scanf("%d",&s.b);
    value(s.a,s.b);
    ref(&s.a,&s.b);
    printf("\nValues after swapping are %d and %d ",s.a,s.b);
    return 0;
}
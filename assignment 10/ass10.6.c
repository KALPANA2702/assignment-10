#include<stdio.h>
int factorial(int);
int main()
{
    int n,x;
    printf("enter the number");
    scanf("%d",&n);
    x=factorial(n);
    printf("%d",x);
    return 0;
}
int factorial(int n)
{
   int i,f=1;
   for(i=1;i<=n;i++)
   f=i*f;
   return (f);
}
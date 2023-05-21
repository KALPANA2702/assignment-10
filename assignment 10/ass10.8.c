#include<stdio.h>
int factorial(int);
int main()
{
    int n,x,r;
    printf("enter the total item\n");
    scanf("%d",&n);
     printf("enter the arranged item\n");
    scanf("%d",&r);
    x=factorial(n)/factorial(n-r);
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
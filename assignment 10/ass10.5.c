#include<stdio.h>
void odd_natural_number(int n);
int main()
{
    int n;
    printf("enter the number of natural number");
    scanf("%d",&n);
    odd_natural_number(n);
    return 0;
}
void odd_natural_number(int n)
{
   int i;
   for(i=1;i<=n;i++)
   printf("%d",i*2-1);
    printf("/n");
}
#include<stdio.h>
void natural_number(int n);
int main()
{
    int n;
    printf("enter the number of natural number");
    scanf("%d",&n);
    natural_number(n);
    return 0;
}
void natural_number(int n)
{
   int i;
   for(i=1;i<=n;i++)
   printf("%d",i);
}
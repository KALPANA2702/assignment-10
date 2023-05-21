#include<stdio.h>
int check(int number);
int main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if(check(number))
    {
    printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;

}
int check(int number)
{
    if((number%2)==0)
    {
    return (1);
    }
    else{
        return (0);
    }
}
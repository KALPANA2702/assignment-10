#include<stdio.h>
int check(int num,int digit);
int main()
{
    int number,rem,x,digit;
    printf("enter the number\n");
    scanf("%d",&number);
     printf("enter the given digit\n");
    scanf("%d",&digit);
	x=check(number,digit);
	if(x==1)
	{
		printf("%d is occured in %d",digit,number);
	}
	else
	{
     printf("%d is not occured in %d",digit,number);
	}
    return 0;
}
int check(int num , int digit)
{
    int rem;
	while(num!=0)
	{
		rem=num%10;
		if(rem==digit)
		{
			return(1);
		}
		num=num/10;
	}
	return 0;
}
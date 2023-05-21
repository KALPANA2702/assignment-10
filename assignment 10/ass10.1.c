#include<stdio.h>
float area(float);
int main()
{
    float x,r;
    printf("enter the radius");
    scanf("%f",&r);
    x=area(r);
    printf("the area of circle is %f",x);
    return 0;
}
float area(float rd)
{
    float p=3.14,A;
    A=p*rd*rd;
    return (A);
}
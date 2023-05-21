#include<stdio.h>
float SI( float p,float r,float t);
int main()
{
    float x,r,p,t;
    printf("enter the principal,rate,time");
    scanf("%f %f %f",&p,&r,&t);
    x=SI(p,t,r);
    printf("the simple interest is %f",x);
    return 0;
}
float SI( float p,float r,float t)
{
    float SI;
    SI=(p*r*t)/100;
    return SI;
}
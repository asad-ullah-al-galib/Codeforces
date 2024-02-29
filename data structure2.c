#include<stdio.h>
#include<math.h>
int main ()
{
    double a,b,c,s,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    d=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf",d);
}

#include<stdio.h>
#include <math.h>
int main ()
{
    double a,b,c,v,x,y;
    scanf("%lf %lf %lf",&a,&b,&c);
    v=acos((pow(b,2)+pow(c,2)-pow(a,2)) /(2*b*c));
    x=acos((pow(a,2)+pow(c,2)-pow(b,2)) /(2*a*c));
    y=acos((pow(a,2)+pow(b,2)-pow(c,2)) /(2*a*b));
    printf("%lf\n", v);
    printf("%lf\n", x);
    printf("%lf\n", y);
}


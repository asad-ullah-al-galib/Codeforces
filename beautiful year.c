//<Coded by TheAnonymousAMGR>
#include<stdio.h>
int main ()
{
    int year,a,b,c,d,amgr;
    scanf("%d",&year);
    while (1)
    {
        year++;
        amgr=year;
        a=year%10;
        year=year/10;
        b=year%10;
        year=year/10;
        c=year%10;
        year=year/10;
        d=year%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            printf("%d",amgr);
            break;
        }
        year=amgr;
    }
    return 0;
}

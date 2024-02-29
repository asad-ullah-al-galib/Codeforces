#include<stdio.h>
int leapyear(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400)
            {
                return 1;
            }
            else return 0;
        }else return 1;
    }
    else return 0;
}
int main()
{
    int year;
    scanf("%d",&year);
    if(leapyear(year))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

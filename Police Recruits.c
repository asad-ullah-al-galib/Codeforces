//Coded By..<<TheAnonymousAMGR>>..<<CSTE>>..
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int police=0;
    int crime=0;
    for (int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if (a>0)
        {
            police+=a;
        }
        else
        {
            if(police<1)
            {
                ++crime;
            }
            else
            {
                --police;
            }
        }
    }
    printf("%d",crime);
}

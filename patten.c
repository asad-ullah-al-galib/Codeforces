//coded by TheAnonymousAMGR
//NSTU
//CSTE
#include<stdio.h>
int main ()
{
    long long int n,amgr;
    scanf("%lld",&n);
    long long int count=0;
    while(n!=0)
    {
        amgr=n%10;
        if(amgr==4||amgr==7){
            count++;
        }
        n/=10;
    }
    if(count==4||count==7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}

//coded by Asad Ullah Al Galib
//TheAnonymousAMG
#include<stdio.h>
int main()
{
    long long int n,amg;
    scanf("%lld",&n);
    long long int count=0;
    while(n!=0){
        amg=n%10;
        if(amg==4 || amg==7){
            count++;
        }
        n/=10;
    }
    if(count==4 || count==7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}

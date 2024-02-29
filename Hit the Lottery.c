#include<stdio.h>
int main ()
{
    int n,count=0;
    scanf("%d",&n);
    int ans=n/100;
    int left=n%100;

    ans+=left/20;
    left=left%20;

    ans+=left/10;
    left=left%10;

    ans+=left/5;
    left=left%5;

    ans+=left/1;
    printf("%d",ans);
}

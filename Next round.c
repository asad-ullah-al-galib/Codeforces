//coded by TheAnonymousAMGR
#include<stdio.h>
int main ()
{
    int n, k, count=0;
    scanf("%d %d",&n,&k);
    int amgr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&amgr[i]);
    }
    for (int i=0;i<n;i++){
        if(amgr[k-1]<=amgr[i] && amgr[i]!=0){
            count++;
        }
    }
    printf("%d",count);
}

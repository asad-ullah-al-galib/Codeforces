#include<stdio.h>
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int amg=0;
    for(int i=1; i<=w; i++)
    {
        amg+=i*k;
    }
    if (amg>n)
    {
        printf("%d",amg-n);
    }
    else
    {
        printf("0");
    }
}

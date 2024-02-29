#include<stdio.h>
int main()
{
    int a,cnt=0;
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}

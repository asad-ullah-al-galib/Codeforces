#include<stdio.h>
#include<string.h>
const int N=1e5+10;
void answer()
{
    int a[26]={0},cnt=0,n,res=0;
    char x[N];
    scanf("%d",&n);
    scanf("%s",&x);
    for(int i=0;i<n;i++)
    {
        if(!a[x[i]-'a'])cnt++,a[x[i]-'a']=1;
        res+=cnt;
    }
    printf("%d\n",res);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        answer();
    }
}

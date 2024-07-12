#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int res=0;
        for(int i=1;i<=n;i++)
        {
            int a; scanf("%d",&a);
            res+=a;
        }
        if(res==m) printf("YES\n");
        else printf("NO\n");
    }
}
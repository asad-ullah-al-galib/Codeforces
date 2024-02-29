#include<stdio.h>
int main()
{
    int tt;
    printf("N=",tt);
    scanf("%d",&tt);
    //print("N",tt);

    int a[tt];

    for(int oo=0;oo<tt;oo++)
    {
        //cin>>a[i];
        scanf("%d",&a[oo]);
    }
    int cnt=0;
    //int cnt1=0;

    for(int i=0;i<tt;i++)
    {
        int cnt1=0;
        for(int j=0;j<tt;j++)
        {

            if(a[j]==a[i])
            {
                cnt1++;
            }

        }
        if(cnt1==1)
            {
                cnt++;

            }
    }
    printf("Number of unique elemnet is:%d\n",cnt);
}

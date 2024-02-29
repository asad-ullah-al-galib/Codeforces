#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        int num=0;
        for(int i=1;i<=n;i++)
        {
            int me;
            cin>>me;
            if(me<0)
            {
                num++;
            }
        }
        if(num%2==1)
        {
            cout<<"0"<<endl;
        }
        else if(num%2==0)
        {
            cout<<"0"<<endl;
            cout<<"0 1"<<endl;
        }
    }
}

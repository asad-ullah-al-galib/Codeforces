#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100],b[100],s,d;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=(a[i]+m-1)/m;
    }
    s=b[0];
    d=0;

    for(int o=1;o<n;o++)
    {
        if(b[o]>=s)
        {
            s=b[o];
            d=o;
        }
    }
    cout<<d+1;
}
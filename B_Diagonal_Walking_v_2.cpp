#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;

        x=abs(x);
        y=abs(y);

        if(x>y)
        {
            x+=y;
            y=x-y;
            x-=y;
        }
        if(y>z)
        {
            cout<<"-1"<<endl;
            continue;
        }
        z-=y-x;

        if((z%x%2) &1) z-=2;
        cout<<z<<endl;
    }
}
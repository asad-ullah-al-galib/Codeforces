#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int pos=abs(b-c)+c;
        if(pos>a)
        {
            cout<<1<<endl;
        }
        if(a==pos)
        {
            cout<<3<<endl;
        }
        if(a>pos)
        {
            cout<<2<<endl;
        }
    }
}

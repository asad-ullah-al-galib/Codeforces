#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    //int f=max(a,b)-min(a,b);
    //cout<<f<<endl;
    if(a==b)
    {
        cout<<0;
    }
    else if(b>a)
    {
        cout<<2;
    }
    else
    {
        cout<<a-b;
    }
}

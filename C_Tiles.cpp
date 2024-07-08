#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353
int main()
{
    int a,s;
    cin>>a>>s;


    long long res=1;
    for(int i=0;i<(a+s);i++)
    {
        res=(2*res)%MOD;
    }
    cout<<res;
}
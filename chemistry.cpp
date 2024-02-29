#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main(){
    ll t; cin>>t;
    while (t--)
    {
        vector<int> me(26,0);
        ll n,m; cin>>n>>m;
        string U;
        cin>>U;
        for(ll i=0; i<U.size(); i++) me[U[i]-97]++;
        int x=0;
        for(ll i=0; i<26; i++) if(me[i]%2!=0) x++;
        if(x-m<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}





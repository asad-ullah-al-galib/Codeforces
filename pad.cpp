#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        ll c;
        cin >> n >> c;
        vector<pair<ll,int>> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i].first;
            a[i].second = i+1;
        }
        sort(a.begin(),a.end());
        vector<ll> prefix(n+1);
        for(int i=0;i<n;i++){
            prefix[i+1] = prefix[i] + a[i].first;
        }
        ll ans = 1e18;
        for(int i=0;i<n;i++){
            ans = min(ans,max((ll)a[i].second,(prefix[i+1]+a[i].first-1)/a[i].first));
        }
        if(ans*c <= prefix[n]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


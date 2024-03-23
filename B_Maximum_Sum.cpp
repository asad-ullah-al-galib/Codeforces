#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll sum = 0;
        for(int i=n-1; i>=0 && k>0; i--, k--)
            sum = (sum + a[i]) % mod;
        cout << sum << "\n";
    }
    return 0;
}

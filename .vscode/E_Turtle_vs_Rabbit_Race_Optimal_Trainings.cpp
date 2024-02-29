#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n+1), pre(n+1);
        for(int i=1; i<=n; i++) {
            cin >> a[i];
            pre[i] = pre[i-1] + a[i];
        }

        int q;
        cin >> q;
        while(q--) {
            int l;
            ll u;
            cin >> l >> u;
            ll total = pre[n] - pre[l-1];
            ll r = lower_bound(pre.begin()+l, pre.end(), pre[l-1] + u) - pre.begin();
            if(r <= n && pre[r] - pre[l-1] == u) r++;
            cout << min(r-1, total/u + l - 1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}

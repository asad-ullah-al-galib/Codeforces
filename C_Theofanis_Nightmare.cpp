#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long ans = 0;
    for (int i = 0; i < n; ) {
        long long sum = 0;
        int j = i;
        while (j < n && a[i] * a[j] > 0) {
            sum = max(sum, (long long)a[j]);
            j++;
        }
        ans += sum;
        i = j;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

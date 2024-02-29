#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    if (n == 1) {
        cout << "YES\n0\n";
        return;
    }
    vector<int> a(n);
    for (int i = 1; i < n; i++)
        a[i] = m[0][i] & m[i][0];
    a[0] = m[0][1];
    for (int i = 2; i < n; i++)
        a[0] &= m[0][i];
    cout << "YES\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

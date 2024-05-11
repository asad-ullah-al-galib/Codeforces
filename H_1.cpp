#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        for(int i=0; i<n; i++)
            cin >> c[i];

        vector<int> pos(n+1);
        for(int i=0; i<n; i++) {
            if(a[i] > 0) pos[a[i]]++;
            else pos[-a[i]]--;
            if(b[i] > 0) pos[b[i]]++;
            else pos[-b[i]]--;
            if(c[i] > 0) pos[c[i]]++;
            else pos[-c[i]]--;
        }

        string ans = "YES";
        for(int i=1; i<=n; i++) {
            if(pos[i] == 0) {
                ans = "NO";
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

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
        string a, b;
        cin >> a >> b;
        vector<int> dp(n+1, 1);
        int i = 0;
        while(i < n && a[i] == '0') i++;
        for(int j = 0; j < n; j++) {
            if(b[j] == '1') {
                if(i <= j) dp[j+1] = dp[j];
                else dp[j+1] = 0;
                i = max(i, j+1);
                while(i < n && a[i] == '0') i++;
            } else {
                if(i <= j) dp[j+1] = dp[j+1] + dp[j];
            }
        }
        cout << dp[n] << "\n";
    }
    return 0;
}

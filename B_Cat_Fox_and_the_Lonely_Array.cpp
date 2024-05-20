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
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        vector<int> prefix(n);
        prefix[0] = a[0];
        for(int i=1; i<n; i++)
            prefix[i] = prefix[i-1] | a[i];

        int ans = 1;
        for(int k=2; k<=n; k++) {
            bool flag = true;
            int target = prefix[k-1];
            for(int i=k; i<n; i++) {
                int subarray_or = prefix[i] - (i>=k ? prefix[i-k] : 0);
                if(subarray_or != target) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans = k;
            else
                break;
        }
        cout << ans << "\n";
    }
    return 0;
}

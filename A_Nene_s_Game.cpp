#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int k, q;
        cin >> k >> q;
        vector<int> a(k), n(q);
        for(int i=0; i<k; i++)
            cin >> a[i];
        for(int i=0; i<q; i++)
            cin >> n[i];

        sort(a.begin(), a.end());
        for(int i=0; i<q; i++) {
            int left = 0, right = n[i];
            while(left < right) {
                int mid = left + (right - left + 1) / 2;
                if(mid - (upper_bound(a.begin(), a.end(), mid) - a.begin()) < n[i] - mid)
                    left = mid;
                else
                    right = mid - 1;
            }
            cout << n[i] - left << "\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int pos;
        cin >> pos;
        int n = s.size();
        vector<int> len(n);
        len[0] = 1;
        for (int i = 1; i < n; ++i) {
            if (s[i] > s[i - 1]) {
                len[i] = len[i - 1] + 1;
            } else {
                len[i] = 1;
            }
        }
        int l = 0, r = n * (n + 1) / 2 - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            int sum = 0;
            for (int i = 0; i < n; ++i) {
                sum += min(len[i], n - i - mid);
            }
            if (sum >= pos) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (len[i] <= n - i - l) {
                sum += len[i];
            } else {
                sum += n - i - l;
                break;
            }
        }
        cout << s[sum + l] << endl;
    }
    return 0;
}


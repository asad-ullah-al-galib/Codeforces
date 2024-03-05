#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }

        sort(s.begin(), s.end());

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            int x = s[i];
            int y = c - x;

            if (y <= x) {
                break;
            }

            int cnt = upper_bound(s.begin(), s.end(), y) - s.begin();
            ans += cnt;
        }

        cout << ans << endl;
    }

    return 0;
}

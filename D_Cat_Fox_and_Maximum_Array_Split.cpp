#include<bits/stdc++.h>
using namespace std;

int ask(int l, int x) {
    cout << "? " << l << " " << x << endl;
    int r;
    cin >> r;
    return r;
}

void answer(int m) {
    cout << "! " << m << endl;
    int res;
    cin >> res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        int l = 1, r = n, m;
        while(l < r) {
            m = (l + r + 1) / 2;
            if(ask(1, m) <= n - m + 1) {
                l = m;
            } else {
                r = m - 1;
            }
        }

        int max_m = l;
        vector<int> pos;
        pos.push_back(0);
        pos.push_back(n + 1);

        l = 1, r = n;
        while(l < r) {
            m = (l + r) / 2;
            if(ask(1, m) > n - m) {
                r = m;
            } else {
                l = m + 1;
            }
        }

        pos.push_back(ask(1, l));
        pos.push_back(ask(1, max_m));

        sort(pos.begin(), pos.end());

        int max_len = 0;
        for(int i = 1; i < pos.size(); ++i) {
            max_len = max(max_len, pos[i] - pos[i-1]);
        }

        answer(max_m * max_len);
    }

    return 0;
}

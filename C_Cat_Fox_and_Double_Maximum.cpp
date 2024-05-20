#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> p(n), q(n), pos(n+1);
        for(int i = 0; i < n; ++i) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        set<int> s;
        for(int i = 1; i <= n; ++i) {
            s.insert(i);
        }

        for(int i = 0; i < n; ++i) {
            if(i == 0 || i == n-1 || p[i-1] < p[i] && p[i] > p[i+1]) {
                q[i] = p[i];
                s.erase(p[i]);
            }
        }

        for(int i = 0; i < n; ++i) {
            if(q[i] == 0) {
                q[i] = *s.begin();
                s.erase(s.begin());
            }
        }

        for(int i = 0; i < n; ++i) {
            cout << q[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

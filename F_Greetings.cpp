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
        vector<int> a(n), b(n);
        vector<pair<int, int>> events;
        for(int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
            events.push_back({a[i], -1});
            events.push_back({b[i], 1});
        }
        sort(events.begin(), events.end());

        long long greetings = 0, cnt = 0;
        for(auto& e : events) {
            if(e.second == -1) {
                greetings += cnt;
                cnt++;
            } else {
                cnt--;
            }
        }

        cout << greetings << "\n";
    }

    return 0;
}

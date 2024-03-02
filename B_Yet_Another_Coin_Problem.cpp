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

        int ans = 0;
        while(n > 0) {
            if(n >= 15) {
                ans += n / 15;
                n %= 15;
            } else if(n >= 10) {
                ans += n / 10;
                n %= 10;
            } else if(n >= 6) {
                ans += n / 6;
                n %= 6;
            } else if(n >= 3) {
                ans += n / 3;
                n %= 3;
            } else {
                ans += n;
                n = 0;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

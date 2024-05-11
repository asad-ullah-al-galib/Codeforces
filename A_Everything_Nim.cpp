#include <iostream>
#include <cmath>

using namespace std;
typedef long long int ll;

ll calculate(ll a, ll b, ll c) {
    ll total = a;
    ll temp = b / 3;
    total += temp;
    b -= (temp * 3);

    if ((b + c < 3) && b != 0) {
        return -1;
    }
    total += static_cast<ll>(ceil((b + c) / 3.0));
    return total;
}

void solve() {
    int t;
    cin >> t;
    while(t--) { 
        ll a, b, c;
        cin >> a >> b >> c;
        ll result = calculate(a, b, c);
        if (result == -1) {
            cout << -1 << endl;
            return;
        }
        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}

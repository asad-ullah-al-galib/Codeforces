#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 1e6 + 5;
int fact[MAXN], inv[MAXN], invfact[MAXN];

int add(int a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
    return a;
}

int mul(int a, int b) {
    return (1LL * a * b) % MOD;
}

int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

int C(int n, int k) {
    if (k > n || k < 0) return 0;
    return mul(fact[n], mul(invfact[k], invfact[n - k]));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    fact[0] = inv[0] = invfact[0] = 1;
    fact[1] = inv[1] = invfact[1] = 1;
    for (int i = 2; i < MAXN; i++) {
        fact[i] = mul(fact[i - 1], i);
        inv[i] = mul(MOD - MOD / i, inv[MOD % i]);
        invfact[i] = mul(invfact[i - 1], inv[i]);
    }

    int t;
    cin >> t;
    while (t--) {
        int l, n;
        cin >> l >> n;
        int ans = 0;
        for (int i = n; i <= l; i++) {
            ans = add(ans, mul(C(i, n), C(i - 1, n - 1)));
        }
        cout << ans << "\n";
    }

    return 0;
}

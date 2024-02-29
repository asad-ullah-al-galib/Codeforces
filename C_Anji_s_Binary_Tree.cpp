#include<bits/stdc++.h>
using namespace std;

const int MAXN = 3e5 + 5;
vector<int> g[MAXN];
int dp[MAXN][3];
string s;

void dfs(int v, int p = -1) {
    vector<int> child;
    for (auto u : g[v]) {
        if (u == p) continue;
        dfs(u, v);
        child.push_back(u);
    }
    if (child.empty()) {
        dp[v][0] = (s[v] != 'U');
        dp[v][1] = (s[v] != 'L');
        dp[v][2] = (s[v] != 'R');
    } else if (child.size() == 1) {
        int u = child[0];
        dp[v][0] = min(dp[u][0] + (s[v] != 'U'), dp[u][2] + (s[v] != 'L'));
        dp[v][1] = dp[u][0] + (s[v] != 'L');
        dp[v][2] = dp[u][0] + (s[v] != 'R');
    } else {
        int u = child[0], w = child[1];
        dp[v][0] = min({dp[u][0] + dp[w][0], dp[u][2] + dp[w][0], dp[u][0] + dp[w][2]}) + (s[v] != 'U');
        dp[v][1] = dp[u][0] + dp[w][0] + (s[v] != 'L');
        dp[v][2] = dp[u][0] + dp[w][0] + (s[v] != 'R');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cin >> s; s = " " + s;
        for (int i = 1; i <= n; i++) g[i].clear();
        for (int i = 1; i <= n; i++) {
            int l, r; cin >> l >> r;
            if (l) g[i].push_back(l);
            if (r) g[i].push_back(r);
        }
        dfs(1);
        cout << min({dp[1][0], dp[1][1], dp[1][2]}) << '\n';
    }

    return 0;
}

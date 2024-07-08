#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Calculate binomial coefficient C(n, k) modulo MOD
int binomial(int n, int k) {
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
        for (int j = 1; j <= k; ++j) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }
    return dp[n][k];
}

int main() {
    int n, k;
    cin >> n >> k;

    // Calculate the total ways without restrictions
    int totalWays = binomial(n * n, k);

    // Calculate the ways that kings threaten each other
    int threatenedWays = 4 * (n - 1) * (n - 2);

    // Calculate the final answer
    int answer = (totalWays - threatenedWays + MOD) % MOD;

    cout << answer << endl;
    return 0;
}
